#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
int u[501][2000];
int t[]={1,1,1,1,2,3,3,4,5,6,7,8,9,10,11,13,14,15,16,18,19,20,22,23,24,26,27,29,30,31,33,34,36,37,39,41,42,44,45,47,48,50,52,53,55,57,58,60,62,63,65,
67,68,70,72,74,75,77,79,81,82,84,86,88,90,91,93,95,97,99,101,102,104,106,108,110,112,114,116,117,119,121,123,125,127,129,131,133,135,137,139,
141,143,145,147,149,150,152,154,156,158,160,162,164,167,169,171,173,175,177,179,181,183,185,187,189,191,193,195,197,199,201,203,206,208,210,
212,214,216,218,220,222,225,227,229,231,233,235,237,239,242,244,246,248,250,252,255,257,259,261,263,265,268,270,272,274,276,279,281,283,285,
287,290,292,294,296,298,301,303,305,307,310,312,314,316,319,321,323,325,328,330,332,334,337,339,341,343,346,348,350,352,355,357,359,362,364,
366,369,371,373,375,378,380,382,385,387,389,392,394,396,399,401,403,406,408,410,413,415,417,420,422,424,427,429,431,434,436,438,441,443,445,
448,450,452,455,457,460,462,464,467,469,471,474,476,479,481,483,486,488,491,493,495,498,500,503,505,507,510,512,515,517,519,522,524,527,529,
532,534,536,539,541,544,546,549,551,554,556,558,561,563,566,568,571,573,576,578,580,583,585,588,590,593,595,598,600,603,605,608,610,613,615,
617,620,622,625,627,630,632,635,637,640,642,645,647,650,652,655,657,660,662,665,667,670,672,675,677,680,682,685,687,690,692,695,698,700,703,
705,708,710,713,715,718,720,723,725,728,730,733,736,738,741,743,746,748,751,753,756,758,761,764,766,769,771,774,776,779,781,784,787,789,792,
794,797,799,802,805,807,810,812,815,817,820,823,825,828,830,833,836,838,841,843,846,849,851,854,856,859,862,864,867,869,872,875,877,880,882,
885,888,890,893,895,898,901,903,906,908,911,914,916,919,922,924,927,929,932,935,937,940,943,945,948,950,953,956,958,961,964,966,969,972,974,
977,980,982,985,987,990,993,995,998,1001,1003,1006,1009,1011,1014,1017,1019,1022,1025,1027,1030,1033,1035,1038,1041,1043,1046,1049,1051,1054,
1057,1059,1062,1065,1067,1070,1073,1075,1078,1081,1083,1086,1089,1092,1094,1097,1100,1102,1105,1108,1110,1113,1116,1118,1121,1124,1126,1129,1132,1135};
int main()
{
    int a[1200],a1[3][1200],n,m,i,j,l,k,p,q,r,z,b,c,d;
    for(i=0;i<1200;i++){
        a[i]=-1;
        a1[0][i]=-1;
        a1[1][i]=-1;
        a1[2][i]=-1;
    }
    u[0][0]=1;
    a[0]=1;
    for(i=1;i<=500;i++){
        l=i;
        z=0;
        while(l>0){
            r=l%10;
            b=0;
            for(j=0;a[j]!=-1;j++){
                if(z==1)a1[z][0]=0;
                else if(z==2){
                    a1[z][0]=0;
                    a1[z][1]=0;
                }
                a1[z][j+z]=((a[j]*r)+b)%10;
                b=((a[j]*r)+b)/10;
                if(a[j+1]==-1&&b>0)a1[z][j+1+z]=b;
            }
            if(z>0){
                c=0;
                for(j=0;a1[z][j]!=-1;j++){
                    if(a1[0][j]==-1)a1[0][j]=0;
                    d=(a1[0][j]+a1[z][j]+c);
                    a1[0][j]=d%10;
                    c=d/10;
                    if(a1[z][j+1]==-1&&c>0)a1[0][j+1]=c;
                }
            }
            l=l/10;
            z++;
        }
        for(k=0;a1[0][k]!=-1;k++){
            a[k]=a1[0][k];
        }
        for(p=k-1,j=0;p>=0;p--,j++){
            u[i][j]=a[p];
        }
    }
    int e;
    while(scanf("%d",&e)!=EOF){
        printf("%d!\n",e);
        for(i=0;i<t[e];i++){
            printf("%d",u[e][i]);
        }
        printf("\n");
    }

}



/*#include<stdio.h>
#include <iostream>
#include <string>
using namespace std;

string factorial[] = {};




int main()
{
    int n;
    while(scanf("%d",&n)==1){
        printf("%d!\n",n);
        printf("%s\n",factorial[n]);
    }

    return 0;
}
*/

/*#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
    //FILE *fp;
    //fp=fopen("623.text","w");
    int a[1200],a1[3][1200],n,m,i,j,l,k,p,q,r,z,b,c,d;
    //memset(a,-1,sizeof(a));
    for(i=0;i<1200;i++){
        a[i]=-1;
        a1[0][i]=-1;
        a1[1][i]=-1;
        a1[2][i]=-1;
    }
    a[0]=1;
    for(i=1;i<=500;i++){
        l=i;
        z=0;
        //for(j=0;a[j]!=-1;j++)printf("%d",a[j]);//
        //printf("\n");
        while(l>0){
            r=l%10;
            b=0;
            for(j=0;a[j]!=-1;j++){
                if(z==1)a1[z][0]=0;
                else if(z==2){
                    a1[z][0]=0;
                    a1[z][1]=0;
                }
                a1[z][j+z]=((a[j]*r)+b)%10;
                b=((a[j]*r)+b)/10;
                if(a[j+1]==-1&&b>0)a1[z][j+1+z]=b;
            }
            //for(j=0;a1[z][j]!=-1;j++)printf("%d",a1[z][j]);//
            //printf("\n");
            if(z>0){
                c=0;
                for(j=0;a1[z][j]!=-1;j++){
                    if(a1[0][j]==-1)a1[0][j]=0;
                    //printf("a1[0][%d]=%d a1[%d][%d]=%d c=%d\n",j,a1[0][j],z,j,a1[z][j],c);//
                    d=(a1[0][j]+a1[z][j]+c);
                    a1[0][j]=d%10;
                    //printf("a1[0][%d]=%d\n",j,a1[0][j]);//
                    c=d/10;
                    if(a1[z][j+1]==-1&&c>0)a1[0][j+1]=c;
                }
            }
            l=l/10;
            z++;
        }
        for(k=0;a1[0][k]!=-1;k++){
            a[k]=a1[0][k];
        }
        printf("%d!\n",i);
        //fprintf(fp,"%d!\n",i);
        //char x='"';
        //char y=',';
        //printf("%c",x);
        //fprintf(fp,"%c",x);
        for(p=k-1;p>=0;p--){
            printf("%d",a[p]);
            //fprintf(fp,"%d",a[p]);
        }
        //printf("%c%c",x,y);
        //fprintf(fp,"\n");
        printf("\n");
    }
}
*/


/*#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int a[3000];
    int n,i,j,b,z,x;
    while(scanf("%d",&n)==1){
       a[0]=1;
       z=1;

       b = 0;
       for(i=1;i<=n;i++){
            for(j=0;j<z;j++){
               x = a[j]*i+b;
               a[j]=x%10;
               b = x/10;
            }
             while(b>0){
               a[z]=b%10;
               b = b/10;
               z++;
             }
      }
      printf("%d!\n",n);
      for(i=z-1;i>=0;i--)
      printf("%d",a[i]);
      printf("\n");
    }
    return 0;
}
*/
