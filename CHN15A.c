#include <stdio.h>

int main(void) {
	int t, n, k, tmp;
	scanf("%d", &t);
	while(t-- > 0) {
	  int count = 0;
	  scanf("%d %d", &n, &k);
	  while(n-- > 0) {
	    scanf("%d", &tmp);
	    if((tmp+k)%7 == 0) {
	      count++;
	    }
	  }
	  printf("%d\n", count);
	}
	return 0;
}