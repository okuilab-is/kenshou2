#include<stdio.h>

int main(void){
   int m, n, a[100], b[100];

   scanf("%d", &m);
   for (int i = 0; i < m ; i++) scanf("%d ", &a[i]);
   scanf("%d", &n);
   for (int j = 0; j < n ; j++) scanf("%d ", &b[j]);

   i = 0, j = 0;
   for (int k = 0; k < m + n; k++){
      if (a[i] < b[j]){
         printf("%d ", a[i]);
         i++;
      } else {
         printf("%d", b[j]);
        j++;
   }
   printf("\n");

   return 0;
}
