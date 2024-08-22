#include<stdio.h>
#include<math.h>
int sum(int T[], int k) {
int s = 0;
while (k >= 1) {
s += T[k];
k -= k&-k;
}
printf("\n The sum is %d",s) ;
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
int n, k, T[100] = {0, 1, 4, 4, 16, 6, 7, 4, 29};
printf("\n Fenwick Tree");
display(T,n);
printf("\n Enter the value for k");
scanf("%d",&k);
 sum(T, k);
return 0;
}