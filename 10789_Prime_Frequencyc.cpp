#include<iostream>

using namespace std;


int main(){
    int prime[2002] = {0};
	int i, j;
	prime[0] = prime[1] = 1;
	for(i = 2; i < 2002; i++){
		if(prime[i] == 0) {
			for(j = 2; i*j < 2002; j++)prime[i*j] = 1;
        }
    }
    string input;
    int t;
    bool emptybool;
    cin>>t;
    for(i=1;i<=t;i++){
        emptybool = true;
        int charmap[125]={0};
        cin>>input;
        for(j=0;j<input.length();j++)charmap[(int)input[j]]++;
        printf("Case %d: ",i);
        for(j=0;j<125;j++){
            if(prime[charmap[j]]==0){
                cout<<(char)j;
                emptybool = false;
            }
        }
        if (emptybool)cout<<"empty";
        cout<<endl;
    }
}