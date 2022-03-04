#include <stdio.h>

int main() {
	int n, count = 0;
	scanf("%d", &n);
	if(n <= 0) {
	  printf("0");
	  return 0;
	}
	while(n != 0) {
	  count++;
	  n/=10;
	}
	if(count < 4) {
	  printf("%d", count);
	} else printf("More than 3 digits");
	return 0;
}