#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
 int T, N, funny, i, r;
 char S[10001];
 scanf("%d\n", &T);
 while (T--) {
 scanf("%s\n", S);
 N = strlen(S);
 funny = 1;
 for(i=1, r=N-2; i<N; i++, r--) {
 if (fabs(S[i]-S[i-1]) != fabs(S[r]-S[r+1])) {
 funny = 0;
 break;
 }
 }
 if (funny)
 {
 printf("funny");
}
else
printf("not funny");
 }
 return 0;
}