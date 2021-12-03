#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    while(cin>>n,n){
        int array[n];
        for(int i=0;i<n;i++)cin>>array[i];
        int m = sizeof(array) / sizeof(array[0]);
        sort(array,array+m);
        for(int i=0;i<n-1;i++)cout<<array[i]<<" ";
        cout<<array[n-1]<<endl;
    }
}


