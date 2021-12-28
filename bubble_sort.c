#include <stdio.h>
void print_arr(int[],int);
void bubble_sort(int a[],int n);
int main()
{
    int a[20],size,i;
    printf("Enter the number of elements:");
    scanf("%d",&size);
    for(i=0;i<size;i++)
     {
       printf("Enter the elements:");
        scanf("%d",&a[i]);
     }
    bubble_sort(a,size); 
    print_arr(a,size);
}
void print_arr(int a[],int n)
{
   int i;
   printf("sorted elements using Bubble sort are :\t");
   for (i=0;i<n;i++)
    {
     printf("%d\t",a[i]);
    }
}
void bubble_sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
        }
    }
}
