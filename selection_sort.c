
#include <stdio.h>
void print_arr(int a[],int n);
void selection_sort(int a[],int n);
int main()
{
    int a[20],n,i;
    printf("enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
     {
       printf("enter %d element:",i+1);
        scanf("%d",&a[i]);
     }
    selection_sort(a,n); 
    print_arr(a,n);
}
void print_arr(int a[],int n)
{
   int i;
   printf("The elements that are sorted using selection sort are :\t");
   for (i=0;i<n;i++)
    {
     printf("%d\t",a[i]);
    }
}
void selection_sort(int a[],int n)
{
     int temp,i,j,min;
     for(i=0;i<n;i++)
      {
        min=i;
        for(j=i+1;j<=n-1;j++)
           {
             if (a[j]<a[min])
                {
                   min =j;
                }
           }
        if (min!=i)
           {
             temp=a[i];
             a[i]=a[min];
            a[min]=temp;
            }
       }
}
