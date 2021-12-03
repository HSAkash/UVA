#include<stdio.h>
void quicksort(int *arr, int low, int high)
{
  int pivot, i, j, temp;
  if(low < high) {
    pivot = low;
    i = low;
    j = high;
    while(i < j) {
      while(arr[i] <= arr[pivot] && i <= high)
        i++;
      while(arr[j] > arr[pivot] && j >= low)
        j--;
      if(i < j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
    temp = arr[j];
    arr[j] = arr[pivot];
    arr[pivot] = temp;
    quicksort(arr, low, j-1);
    quicksort(arr, j+1, high);
  }
}

int main()
{

    int n;
    while(scanf("%d",&n)!=EOF){
        if(n==0)return 0;
        int a[n],b[n],i,y;
        for(i=0;i<n;i++)scanf("%d%d",&a[i],&b[i]);
        quicksort(a,0,n-1);
        quicksort(b,0,n-1);
        y=0;
        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i]){
                y=1;
                break;
            }
        }
        if(y==0)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}


