#include <stdio.h>
int main(){
	int n,b,total;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&b);
		total=0;
		while(b>0){
			b-=2;
			total+=b/2;
		}
		printf("%d\n",total);
	}
	return 0;
}