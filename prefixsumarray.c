#include<stdio.h>
void display(int arr[], int n)
{
int i;
for (i=0;i<n;i++)
{
printf("\t %d ",arr[i]);
}
}
create_prefix_sum_array(int arr[], int n)
{
int i;
for (i = 1; i<n; i++)
{
arr[i] = arr[i] + arr[i-1];
}
}
void sum(int arr[], int n, int a, int b){
int result;
if (a == 0)
result = arr[b];
else
result = arr[b] - arr[a-1];
printf("The sum is %d", result);
}
int main(){
int n, i, arr[10], a, b;
printf("enter the number of elements\n");
scanf("%d",&n);
printf("enter the array elements\n");
for (i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("\n Original array");
display(arr, n);
create_prefix_sum_array(arr, n);
printf("\n Prefix sum array");
display(arr,n);
printf("\n enter the range to find the sum");
scanf("%d%d",&a,&b);
sum(arr, n, a, b);
return 0;
}