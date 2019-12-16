#include <stdio.h>

int main(void){
	int m=0,n=0,i,j,k,l,a[m],b[n];
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&n);
	for(j=0;j<n;j++){
		scanf("%d",&b[j]);
	}
	for(k=0;k<m;k++){
		for(l=0;l<m;l++){
			if(a[k]<b[l]){
				printf("%d ",a[k]);
				k++;
			}else{
				printf("%d ",b[l]);
			}
		}
	}
	printf("\n");
}
