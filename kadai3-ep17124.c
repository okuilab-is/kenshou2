#include<stdio.h>

int main(void){
   int m, n, a[100] = {}, b[100] = {}, i, j;

   scanf("%d", &m);
   for (i = 0; i < m ; i++) scanf("%d ", &a[i]);
   scanf("%d", &n);
   for (j = 0; j < n - 1; j++) scanf("%d ", &b[j]);

   i = 0, j = 0;
   for (int k = 0; k < m + n; k++){
      if (a[i] < b[j] && i != m || j == n - 1){
         printf("%d ", a[i]);
         i++;
      } else {
         printf("%d ", b[j]);
         j++;
      }
   }
   printf("\n");

   return 0;
}
