Populate a Fenwick Tree from an array of integer elements.
Given the value of a node in a Fenwick Tree
tree[k] = sumq (k - p(k) + 1, k)
Where, p(k) = k&-k and denotes the largest power of two that divides k 
#include<stdio.h>
#include<math.h>
int sum(int arr[], int n, int a, int b){
int i, sum=0;
for (i = a; i<=b; i++)
{
sum += arr[i] ;
}
return sum;
}
void create_fenwick_tree(int T[], int arr[], int n)
{
int a, b, k;
for (k=1; k<=n; k++)
{
a = k – (k&-k) +1;
b = k;
T[k] = sum(arr,n,a,b);
}
}
void display(int arr[], int n)
{
int i;
for (i=1;i<=n;i++)
{
printf("\t %d ",arr[i]);
}
}
int main(){
int n, i, arr[100], T[100] , a, b;
// printf("the power of 6 is %u \n", largestPowerOf2(7)) ;
printf("enter the number of elements\n");
scanf("%d",&n);
printf("enter the array elements\n");
for (i=1;i<=n;i++)
{
scanf("%d",&arr[i]);
}
printf("\n Original array");
display(arr, n);
create_fenwick_tree(T, arr, n);
printf("\n Fenwick Tree");
display(T,n);
return 0;
}