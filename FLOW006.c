#include <stdio.h>

int getSum(int n){
    int x,sum=0;
    while(n != 0){
        x=n%10;
        sum+=x;
        n/=10;
    }
    return sum;
}
int main() {
	int n,y;
	scanf("%d",&n);
	while(n--){
        scanf("%d",&y);
        printf("%d\n",getSum(y));
	}
	return 0;
}