#include <iostream>
#include<cstring>
#include<climits>
#define N '\n'
#define SP ' '
using namespace std;

int get_maxsum(int temp[], int len)
{
   int maxsum = INT_MIN;
   for(int i=0; i<len; i++)
   {
      int sum = 0;
      for(int j=i; j<len; j++)
      {
         sum += temp[j];
         if(maxsum < sum)
            maxsum = sum;
      }

   }
   return maxsum;
}

int get_maxsum_submatrix(int matrix_1d[], int row)
{
   int currentsum=0, maxsum=INT_MIN;
   int matrix[row][row];

   for(int i=0,z=0; i<row; i++)
      for(int j=0; j<row; j++)
         matrix[i][j] = matrix_1d[z++];

   for(int i=0; i<row; i++)
   {
      int temp[row];
      memset(temp, 0, sizeof(temp));
      for(int j=i; j<row; j++)
      {
         for(int k=0; k<row; k++)
            temp[k]+=matrix[k][j];

         currentsum = get_maxsum(temp, row);
         if(maxsum < currentsum)
            maxsum = currentsum;
      }
   }
   return maxsum;
}


void solve()
{
   int n;
   cin>>n;
   int matrix[n*n];
   for(int i=0; i<n*n; i++)
      cin>>matrix[i];
   cout<<get_maxsum_submatrix(matrix,n)<<N;

   
}

int main()
{
	solve();
    return 0;
}
