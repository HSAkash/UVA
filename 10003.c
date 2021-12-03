#include<stdio.h>
#include<algorithm.h>
int main()
{
    int n,i,j,tamp,k,b=0,s2[50],c=0,d;
    while(scanf("%d",&n)!=EOF){
        if(n==0)return 0;
        scanf("%d",&d);
        int s[d];
        for(i=0;i<d;i++)scanf("%d",&s[i]);
        //sort here
        short(s);
        //sort end
        //start find piece
        for(i=n/s[0];i>=0;i--){
            for(j=0;j<=(n/s[0])-i;j++){
                for(k=0;k<=(n/s[0])-i;k++){
                    if((s[0]*i)+(s[1]*j)+(s[2]*k)==n){
                    s2[c]=i+j+k;
                    c++;
                    }
                }

            }

        }
        //end find piece
        //start sort
        for(i=0;i<c-1;i++){
            for(j=0;j<c-i-1;j++){
                if(s2[j]>s2[j+1]){
                    tamp=s2[j];
                    s2[j]=s2[j+1];
                    s2[j+1]=tamp;
                }
            }
        }
        printf("Hight piece=%d",s2[c-1]);
    }

    return 0;
}

