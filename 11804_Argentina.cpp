#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct palyer{
    string name;
    int attacking;
    int defending;    
};
bool operator < (const palyer& a, const palyer& b){
    if(a.attacking != b.attacking)return a.attacking > b.attacking;
    else if(a.defending != b.defending)return a.defending < b.defending;
    else return a.name < b.name;
}

bool supComp(const palyer& a, const palyer& b){
    return a.name < b.name;
}


int main(){
    int t, attacking, defending;
    string name;
    cin >> t;
    cin.ignore(1);
    for(int i=1; i<=t; i++){
        vector<palyer> Players;
        for(int j=0; j<10; j++){
            Players.push_back(palyer());
            cin >> Players[j].name >> Players[j].attacking >> Players[j].defending;
        }
        sort(Players.begin(), Players.end());
        sort(Players.begin(), Players.begin() + Players.size()/2, supComp);
        sort(Players.begin() + Players.size()/2, Players.end(), supComp);
        cout<<"Case "<<i<<":\n";
        cout<<"("<<Players[0].name<<", "<<Players[1].name<<", "<<Players[2].name<<", "<<Players[3].name<<", "<<Players[4].name<<")\n";
        cout<<"("<<Players[5].name<<", "<<Players[6].name<<", "<<Players[7].name<<", "<<Players[8].name<<", "<<Players[9].name<<")\n";
        
    }
}
