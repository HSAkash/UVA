#include<iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n;
    while(cin>>n, n!=0){
        int total = n*(n-1)/2;
        int cptotal = 0;
        int data[n];
        for (int i =0; i<n; i++) cin>>data[i];
        for(int i=0; i<n-1; i++){
            for (int j=i+1; j<n; j++){
                if(__gcd(data[i],data[j])==1)++cptotal;
            }
        }
        if(cptotal)printf("%.6lf\n",sqrt(6*total*1.0/cptotal) );
        else cout<<"No estimate for this data set."<<endl;
        
    }
}