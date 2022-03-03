#include <stdio.h>

int main() {
  int t, n, m, k;
  scanf("%d", &t);
  while(t-- > 0) {
    scanf("%d %d %d", &n, &m, &k);
    if(n < m) {
      if(k+n >= m) {
        printf("0");
      }
      else {
        printf("%d", (m-(k+n)));
      }
    }
    else if(n > m) {
      if(k+m >= n) {
        printf("0");
      }
      else {
        printf("%d", (n-(k+m)));
      }
    } else {
      printf("0");
    }
    printf("\n");
  }
	return 0;
}