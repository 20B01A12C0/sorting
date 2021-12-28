#include <stdio.h>
void print_arr(int a[],int n);
void merge_sort(int a[],int lb,int ub);
void merge(int a[],int lb,int mid,int ub);
int main()
{
    int a[20],n,i;
    printf("\n Enter no.of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter %d element:",i+1);
        scanf("%d",&a[i]);
    }
    merge_sort(a,0,n-1);
    print_arr(a,n);
}
void print_arr(int a[],int n)
{
  int i;
  printf("the elements of array that are sorted using merge sort are:");
  for (i=0;i<n;i++)
  {
    printf("%d \t",a[i]);
  }
}

void merge_sort(int a[],int lb,int ub)
{
    int mid;
    if(lb<ub)
    {
        mid=(ub+lb)/2;
        merge_sort(a,lb,mid);
        merge_sort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}

void merge(int a[],int lb,int mid,int ub)
{
    int temp[20],i,j,k;
    i=lb;
    j=mid+1;
    k=lb;
    while(i<=mid && j<=ub)
    {
        if(a[i]<=a[j])
        {
             temp[k++]=a[i++];
        }
        else
        {
            temp[k++]=a[j++];
        }
    }
    if(i>mid)
    {
      while(j<=ub)
      {
        temp[k++]=a[j++];
       }
    }
    else
    {
      while(i<=mid)
      {
        temp[k++]=a[i++];
      }
    }
    for(k=lb;k<=ub;k++)
    {
        a[k]=temp[k];
    }
}
