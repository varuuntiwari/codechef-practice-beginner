#include <stdio.h>

int main(void) {
	int x; float y;
	scanf("%d",&x);
	scanf("%f",&y);
	if(x%5 != 0 || x>y-0.5){
	    printf("%.2f",y);
	    return 0;
	}
	float res = y - ((float)x+0.50);
	printf("%.2f",res);
	return 0;
}