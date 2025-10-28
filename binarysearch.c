// Online C compiler to run C program online
#include <stdio.h>
 int binarysearch(int a[],int low,int high,int key)
 {
     if(low>high)
         return -1;
    int mid =(low + high)/2;
    if(a[mid]==key)
        return mid;
    else if(a[mid]<key)
        return binarysearch(a,mid+1,high,key);
    else
        return binarysearch(a,low,mid-1,key);
}
int main()
{
    int a[50],i,key,result,n;
    printf("Enter no of element:");
    scanf("%d",&n);
    printf("Ente sortedr array elemnt");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key value");
    scanf("%d",&key);
    result = binarysearch(a,0,n-1,key);
    if(result==-1)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element found at %d\n",result+1);
    }
    return 0;
 }
