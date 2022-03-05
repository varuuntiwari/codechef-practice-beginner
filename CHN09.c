#include <stdio.h>

int main() {
	int i, t, a, b, len; char str[100];
	scanf("%d", &t);
	while(t-- > 0) {
	  a = 0; b = 0;
	  scanf("%s", str);
	  for(len=0;str[len] != '\0';len++);
	  for(i = 0;i<len;i++) {
	    if(str[i] == 'a') {
	      a++;
	    } else {
	      b++;
	    }
	  }
	  if(a == 0 || b == 0) {
	    printf("0");
	  } else if(a == b) {
	    printf("%d", a);
	  } else {
	    printf("%d", (a>b)?b:a);
	  }
	  printf("\n");
	}
	return 0;
}

