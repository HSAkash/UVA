#include<stdio.h>
int b[500000][2];
int main()
{

    int i,j,y,z,n;
    while(scanf("%d",&n)!=EOF){
        if(n==0)return 0;
            for(i=0;i<n;i++){
                scanf("%d%d",&b[i][0],&b[i][1]);
            }
            y=0;
            for(i=0;i<n-1;i++){
                if(b[i][0]!=-1){
                    z=1;
                    for(j=i+1;j<n;j++){
                        if(b[j][0]!=-1){
                            if((b[i][0]==b[j][1])&&(b[i][1]==b[j][0])){
                                b[j][0]=-1;
                                z=2;
                                break;
                            }
                        }
                    }
                    if(z==1){
                    y=1;
                    break;
                    }
                }

            }

            if(y==0)printf("YES\n");
            else printf("NO\n");

    }
    return 0;
}

