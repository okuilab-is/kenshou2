#include <stdio.h>

void main(void){
	int m,n,mary[101],nary[101],i,tm=0,tn=0;
	scanf("%d",&m);
	for(i=0;i<m;i++)
		scanf("%d",mary+i);
	mary[m]=0x7fff;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",nary+i);
	nary[n]=0x7fff;
	while(m+n-tm-tn){
		if(mary[tm]<nary[tn])
			printf("%d ",mary[tm++]);
		else
			printf("%d ",nary[tn++]);
	}

}
