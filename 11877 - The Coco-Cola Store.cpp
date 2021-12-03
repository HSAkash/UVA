#include<iostream>
using namespace std;
int main()
{
    int n,count;
    while(cin>>n&&n!=0){
        count=0;
        while(n/3>0){
            count+=(n/3);
            n=(n/3)+(n%3);
        }
        if(n==2)count++;
        cout<<count<<endl;
    }
}
