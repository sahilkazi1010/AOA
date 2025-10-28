#include <stdio.h>

 int Quick(int a[],int low ,int up)
{
int i,j,pivot,temp;
i=low+1;
j=up;
pivot=a[low];
    while(i<=j)
    {
        while(a[i]<pivot)
        i++;
        while(a[j]>pivot)
        j--;
        if(i<j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    a[low]=a[j];
    a[j]=pivot;
    
    return j;
}
void Sort(int a[],int low,int up)
{
    int z;
    if(low < up)
    {
        z=Quick(a,low,up);
        Sort(a,low,z-1);
        Sort(a,z+1,up);
    }
}
int main()
{
    int a[]={20,10,30,40,11};
    int n =sizeof(a)/sizeof(a[0]);
    printf("Before Sorting");
    for(int i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
    Sort(a,0,n-1);
    
    printf("\n After Sorting");
    for(int i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }

    return 0;
}    



