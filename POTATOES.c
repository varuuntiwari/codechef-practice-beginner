#include <stdio.h>

int nextPrime(int sum) {
  int i = 2, j, flag;
  while(1) {
    flag = 1;
    for(j=2;j<i;j++) {
      if(i%j == 0) {
        flag = 0;
        break;
      }
    }
    if(flag && i > sum) {
      return (i-sum);
    }
    i++;
  }
}

int main() {
  int t, x, y;
  scanf("%d", &t);
  while(t-- > 0) {
    scanf("%d %d", &x, &y);
    printf("%d\n", nextPrime(x+y));
  }
	return 0;
}