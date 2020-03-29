#include <iostream>
#include<string>
#include <climits>
#define N '\n'
#define SP ' '
using namespace std;

string colors[6] = {"BCG","BGC","CBG","CGB","GBC","GCB"};

int movement(int B[3], int G[3], int C[3], int min, int pos,string &ans)
{
	int temp = B[1]+B[2]+G[0]+G[2]+C[0]+C[1];
	if(temp<min)
	{
		ans = colors[pos];
		return temp;
	}
	return min;
}

void solve()
{
   int B[3], G[3], C[3];
   while (scanf("%d %d %d %d %d %d %d %d %d", &B[0], &G[0], &C[0], &B[1],
			&G[1], &C[1], &B[2], &G[2], &C[2]) != EOF)
   {
   		int min = INT_MAX,temp;
   		string ans=colors[0];
   		min = movement(B,C,G,min,0,ans);
   		min = movement(B,G,C,min,1,ans);
   		min = movement(C,B,G,min,2,ans);
   		min = movement(C,G,B,min,3,ans);
   		min = movement(G,B,C,min,4,ans);
   		min = movement(G,C,B,min,5,ans);
   		cout <<ans<<SP<<min<<N;
   }



}
int main()
{
	solve();
    return 0;
}
