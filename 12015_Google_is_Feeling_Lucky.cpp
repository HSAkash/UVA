#include<iostream>
#include<algorithm>

using namespace std;

struct website{
    string link;
    int index;
};

bool operator < (const website& a, const website& b){
   return a.index > b.index;
}

int main(){
    int t, index;
    string link;
    cin >> t;
    cin.ignore(1);
    for (int i=1; i <= t; i++){
        website websites[10];
        for (int j=0; j < 10; j++)cin>> websites[j].link >> websites[j].index;
        sort(websites, websites+10);
        index = websites[0].index;
        printf("Case #%d:\n",i);
        for (int j=0; j<10; j++){
            if(websites[j].index==index)cout<<websites[j].link<<endl;
            else break;
        }
            
        
    }
}