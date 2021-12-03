#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,i,j;
    float r[8],a,c,r2[8],r3,r4[8],r5,r6,r7;
    while(scanf("%d",&n)!=EOF){
        while(n--){
            scanf("%d",&m);
            for(i=0;i<m;i++)scanf("%f",&r[i]);
            sort(r,r+m);
            for(i=0,j=0;j<m;i++,j=j+2){
                r2[j]=r[m-1-i];
                r4[j]=r[i];
            }
            for(i=0,j=1;j<m;i++,j=j+2){
                r2[j]=r[i];
                r4[j]=r[m-1-i];
            }
            r3=r2[0]+r2[m-1];
            for(i=0;i<m-1;i++){
                a=r2[i];
                c=r2[i+1];
                r6=sqrt(((a+c)*(a+c))-((a-c)*(a-c)));
                if(r6<a||r6<c){
                    if(a>c)r3=r3+a;
                    else r3=r3+c;
                }
                 else  r3=r3+r6;
            }
            r5=r4[0]+r4[m-1];
            for(i=0;i<m-1;i++){
                a=r4[i];
                c=r4[i+1];
                r7=sqrt(((a+c)*(a+c))-((a-c)*(a-c)));
                if(r7<a||r7<c){
                    if(a>c)r5=r5+a;
                    else r5=r5+c;
                }
                else r5=r5+r7;
            }
            if(r3<r5)printf("%.03f\n",r3);
            else printf("%.03f\n",r5);
        }
    }
}
////////////////////
//#include <iostream>
//#include <cstdlib>
//#include <cstdio>
//#include <cmath>
//
//using namespace std;
//
//float circles[8];
//float smallest;
//
//void swap (char *x, char *y)
//{
//    char temp;
//    temp = *x;
//    *x = *y;
//    *y = temp;
//}
//
//float get_size_of_box(char *order, int N)
//{
//	int poradi[8];
//	for (int i = 0; i < 8; i++)
//	{
//		poradi[i] = order[i]-'0';
//	}
//	float partial_dist[8]; //stores distancies from the left side of the box up to the ith circle center
//	float centers[8]; 	//stores "coordinate" of the centers
//
//	float size = 2*circles[poradi[0]];
//
//	centers[0] = circles[poradi[0]];
//	partial_dist[0] = circles[poradi[0]];
//	float max_par_dist;
//	float aux_dist;
//
//	for (int i  = 1; i < N; i++)
//	{
//		max_par_dist=0;
//		for (int j = 0; j < i; j++)
//		{
//			aux_dist = 2*sqrt(circles[poradi[j]]*circles[poradi[i]]);
//			if ((max_par_dist < (partial_dist[j]+aux_dist)) )
//			{
//				max_par_dist =  partial_dist[j]+aux_dist;
//			}									//tim overime, ze se skutecne dotyka jen predposledniho
//		}
//		partial_dist[i] = max_par_dist;
//
//
//		//ale muze nastat pripad, kdy je kulicka dosti mala
//		if (partial_dist[i] < circles[poradi[i]])
//			partial_dist[i] = circles[poradi[i]];
//		if ((partial_dist[i]+circles[poradi[i]])> size)
//			size = partial_dist[i]+circles[poradi[i]];
//	}
//	return size;
//}
//
//void permute(char *a, int i, int n)
//{
//	int j;
//	if (i == n)
//	{
//		float size = get_size_of_box(a, n+1);
//		if (size < smallest)
//			smallest = size;
//	}
//	else
//	{
//		for (j = i; j <= n; j++)
//		{
//			swap((a+i), (a+j));
//			permute(a, i+1, n);
//			swap((a+i), (a+j)); //backtrack
//		}
//	}
//}
//
//
//int main ()
//{
//	int cases;
//	scanf("%d\n", &cases);
//	char order[] = {'0', '1', '2', '3', '4', '5', '6', '7'};
//	while (cases)
//	{
//		cases--;
//		int N;
//		scanf("%d", &N);
//		for (int i = 0; i < N; i++)
//			scanf(" %f", &circles[i]);
//		getchar(); //end of line
//
//		smallest = get_size_of_box(order, N);
//		permute (order, 0, (N-1));
//
//		printf("%.3f\n", smallest);
//	}
//
//}
