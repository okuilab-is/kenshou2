#include <stdio.h>

int main(void){
	int m,n,x[100],y[100],xi=0,yi=0;
	scanf("%d",&m);
	for(int i=0; i<m; i++) scanf("%d",x);
	scanf("%d",&n);
	for(    i=0; i<n; i++) scanf("%d",y);
	for(    i=0; i<m+n; i++){
		if(x[xi]<x[xj]){
			printf("%d ",x[xi]);
			xi++;
		}else{
			printf("%d ",y[yi]);
			yi++;
		}
	printf("\n");
	return 0;
}
