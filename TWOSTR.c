#include <stdio.h>

int main() {
	int i, t, flag; char str1[50], str2[50];
	scanf("%d", &t);
	while(t-- > 0) {
	  flag = 0;
	  scanf("%s", str1);
	  scanf("%s", str2);
	  for(i = 0;str1[i] != '\0';i++) {
	    if(str1[i] != str2[i] && str1[i] != '?' && str2[i] != '?') {
	      flag = 1;
	      break;
	    }
	  }
	  if(flag) {
	    printf("No\n");
	  } else {
	    printf("Yes\n");
	  }
	}
	return 0;
}