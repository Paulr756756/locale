#include <stdio.h>

int main(void){
 int a, b, c;

scanf("%d %d %d", &a, &b, &c);
a > b  ? a>c ? printf("%d is the largest", a): printf("%d is the largest", c) : b>c ? printf("%d is the largest", b):printf("%d is the largest", c);
return 0;
}