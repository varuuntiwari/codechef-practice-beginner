#include <stdio.h>

int main() {
  int winner, score=0, x, y, n;
  scanf("%d\n", &n);
  while(n-- > 0) {
    scanf("%d %d\n", &x, &y);
    if((x-y) > 0 && (x-y) > score) {
      winner=1;
      score=(x-y);
    } else if((y-x) > score) {
      winner=2;
      score=(y-x);
    }
  }
  printf("%d %d", winner, score);
  
	return 0;
}