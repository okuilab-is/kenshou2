#include <stdio.h>

int main(void){
	int m=0,n=0,h,i,j,k=0,l=0,a[m],b[n];
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&n);
	for(j=0;j<n;j++){
		scanf("%d",&b[j]);
	}
	for(h=0;h<(m+n-1);h++){
		
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
