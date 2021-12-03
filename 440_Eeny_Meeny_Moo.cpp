#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n;
    while(cin>>n, n!=0){
        vector<int> array;
        for(int i=2; i<=n; i++)array.push_back(i);
        for(int i=1; ;i++){
            int m = n-1, index=0;
            vector<int> data = array;
            while(1){
                index = (index + i)%m;
                if(m==1) break;
                int a = data.size();
                data.erase(data.begin()+index);
                --m;
            }
            if(data[0]==2){
                cout<<i+1<<endl;
                break;
            }

        }

    }
}