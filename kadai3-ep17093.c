#include<stdio.h>

void main(){
  int m,n;
  scanf("%d",&n);
  int a[m];
  for(int i=0;i<m; i++) scanf("%d",&a[i]);
  scanf("%d",&n);
  int b[n];
  for(int i=0; i<n; i++) scanf("%d",&b[i]);
  int j=0,k=0;
  for(int i=0; i<m+n; i++){
    if(a[j]<b[k]){
      printf("%d",a[j]);
      j++;
    }else{
      printf("%d",b[k]);
      k++;
    }
  }
  printf("\n");
}
