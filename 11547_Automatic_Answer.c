#include <stdio.h>

int main(){
    int t, number;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&number);
        int result = ((((number*567/9)+7492)*235/47)-498)/10;
        if (result<0)result = -result;
        printf("%d\n",result%10);
    }
}