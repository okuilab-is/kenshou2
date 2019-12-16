#include <stdio.h>

int main(void){
	int m,n,h,i,j,k=0,l=0,a[100],b[100];
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&n);
	for(j=0;j<n;j++){
		scanf("%d",&b[j]);
	}
	for(h=0;h<(m+n);h++){
		
			if(a[k]<b[l]){
				printf("%d ",a[k]);
				k++;
			}else{
				printf("%d ",b[l]);
				l++;
			}
		
	}
	printf("\n");
}
