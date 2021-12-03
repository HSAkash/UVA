#include<iostream>
#include<map>
#include<cctype>
#include<cmath>
using namespace std;

int twotoonedigist(int number){
    return (number/10) + (number%10);
}

int onedigit(int number){
    int result=0;
    while(number){
        result += (number%10);
        result = twotoonedigist(result);
        number/=10;
    }
    return twotoonedigist(result);
}

int main(){
    map<char, int>charmap;
    for(int i=1; i<27;i++){
        charmap[(char)(i+64)] = i;
        charmap[(char)(i+96)] = i;
    }

    string input, input2;
    while(getline(cin,input)){
        getline(cin,input2);

        int sum1 = 0, sum2 = 0;
        for(int i=0;i<input.length();i++)if(isalpha(input[i]))sum1+=charmap[input[i]];
        for(int i=0;i<input2.length();i++)if(isalpha(input2[i]))sum2+=charmap[input2[i]];
        sum1 = onedigit(sum1);
        sum2 = onedigit(sum2);
        printf("%.2f",min(sum2,sum1)*1.0/max(sum2,sum1)*100);
        cout<<" %"<<endl;
    }
}