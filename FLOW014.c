#include <stdio.h>
#define hardness 50
#define carbon 0.7
#define strength 5600

int main() {
  int t, n, h, s;
  float c;
	scanf("%d", &t);
	if(t>1000 || t<1){
	  return 0;
	}
	while(t-- > 0) {
	  scanf("%d %f %d", &h, &c, &s);
	  if(h>hardness && c<carbon && s>strength){printf("10\n");}
	  else if(h>hardness && c<carbon){printf("9\n");}
	  else if(c<carbon && s>strength){printf("8\n");}
	  else if(h>hardness && s>strength){printf("7\n");}
	  else if(h>hardness || c<carbon || s>strength){printf("6\n");}
	  else {printf("5\n");}
	}
	return 0;
}