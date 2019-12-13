#include <stdio.h>

int main(void){
	int i,m,n,x[100],y[100],xi=0,yi=0;
	scanf("%d",&m);
	for(i=m-1; i>=0; i--) scanf("%d",x);
	scanf("%d",&n);
	for(i=n-1; i>=0; i--) scanf("%d",y);
	printf("%d",x[0]);
	/*for(i=0; i<m+n; i++){
		if(x[xi]<y[yi]){
			printf("%d ",x[xi]);
			xi++;
		}else{
			printf("%d ",y[yi]);
			yi++;
		}
	}*/
	printf("\n");
	return 0;
}
