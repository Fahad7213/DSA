#include <stdio.h>
int binary_search(int arr[],int low,int high,int key)
{
if(high<low)
{
    return -1;
}
int mid= (low+high)/2;
if (key==arr[mid])
return mid;
if(key>arr[mid])
return binary_search(arr,(mid+1),high,key);
return binary_search(arr,low,(mid-1),key);

}
int main(){

int size,key;
printf("enter a size of array");
scanf("%d",&size);
int arr[size];
printf("enter a elemnt of sorted");
for(int i=0;i<size;i++)
{
    scanf("%d",&arr[i]);

}
int n=sizeof(arr)/sizeof(arr[0]);
printf("enter key to be search");
scanf("%d",&key);
printf("element found at the index:%d",binary_search(arr,0,n-1,key));
return 0;

} 