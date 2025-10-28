#include <stdio.h>

int main()
{
    int a[50],i,j,temp,n,num;
    printf("Enter no of element");
    scanf("%d",&n);
    printf("Enter elememts in array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        temp= a[i];
        j=i-1;
            while(j>=0 && a[j]>temp)
            {
                a[j+1]=a[j];
                j=j-1;
            }
            a[j+1]=temp;
    }
    printf("Sorted array:");
    for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
}
