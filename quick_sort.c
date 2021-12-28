#include<stdio.h>
void print_arr(int a[],int n);
void quick_sort(int a[],int start,int end);
int main()
{
    int a[30],n,i;
    printf("Enter number of elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
      printf("\n Enter %d element:",i+1);
      scanf("%d",&a[i]);
    }
    quick_sort(a,0,n-1);
    print_arr(a,n);
}
void print_arr(int a[],int n)
{
  int i;
  printf("the elements of array that are sorted using quick sort are:");
  for (i=0;i<n;i++)
  {
    printf("%d \t",a[i]);
  }
}
void quick_sort(int a[],int start,int end)
{
    int i,j,k,pivot;
    if(start<end)
    {
        pivot=start;
        i=start;
        j=end;
        while(i<j)
        {
            while(a[i]<=a[pivot] && i<end)
            {
                i++;
            }
            while(a[j]>a[pivot])
            {
                j--;
            }
            if(i<j)
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
        k=a[j];
        a[j]=a[pivot];
        a[pivot]=k;
        quick_sort(a,start,j-1);
        quick_sort(a,j+1,end);
    }
}
