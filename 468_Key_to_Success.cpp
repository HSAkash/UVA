#include<iostream>
#include<vector>
#include<map>
#include <iterator>
#include<algorithm> 
using namespace std;

vector<pair<int, char>> getCountAlpha(string s){
    vector<pair<int, char>> result;
    map<char, int> datamap;
    for(int i=0; i < s.length(); i++){
        if(datamap.find(s[i]) == datamap.end()){
            datamap[s[i]] = 1;
        }
        else{
            datamap[s[i]]++;
        }
    }
    map<char, int>::iterator itr;
    for (itr = datamap.begin(); itr != datamap.end(); ++itr) {
        result.push_back(make_pair(itr->second ,itr->first));
    }
    sort(result.rbegin(), result.rend());
    return result;

}

void showresult(string data, vector<pair<int, char>> data1, vector<pair<int, char>> data2){
    map<char, char> charmap;
    for(int i=0; i<data1.size(); i++)charmap[data2[i].second] = data1[i].second;
    for(int i=0;i<data.length();i++)cout<<charmap[data[i]];
    cout<<endl;
}


int main(){
    int t;
    string input1, input2;
    bool start = false;
    cin >> t;
    getchar();
    while(t--){
        cin >> input1;
        cin >> input2;
        vector<pair<int, char>> data1 = getCountAlpha(input1);
        vector<pair<int, char>> data2 = getCountAlpha(input2);
        if (start){
            cout<<endl;
        }else start = true;
        showresult(input2, data1, data2);
    }
}