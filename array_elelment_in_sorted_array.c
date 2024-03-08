#include <stdio.h>
int main()
{
int arr[5]={2, 4, 5, 7, 9};
int i,num,a;
printf("enter number to found in sorted array");
scanf("%d",&num);
for(i=0;i<5;i++){
    if(num==arr[i]){}
        printf("data found at the element of: %d", arr[i]);
        break; 
}if(i==5);
printf("not found");

return 0;
}