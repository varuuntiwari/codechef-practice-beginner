#include <stdio.h>
#include <math.h>

int getSum(long x){
	int c,sum; long y=x;
	sum=y%10;
	for(c=0;y>0;c++)
		y=y/10;
	sum+=x/((long)pow(10,c-1));
	return sum;
	
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	long x;
	scanf("%ld",&x);
	printf("%d\n",getSum(x));
	}
	return 0;
}