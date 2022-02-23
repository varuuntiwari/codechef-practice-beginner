#include <stdio.h> 

int main() {
	int a,b,T;
	scanf("%d", &T);
	while (T--){
		scanf("%d %d", &a, &b);
		printf("%d\n", (a+b));
	}
	return 0;
}