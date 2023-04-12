#include "main.h"
#include <stdio.h>
int add(int i, int r) {
int result = i + r;
return result;
printf("The result of the sum of %d and %d is %d\n", i,r,result);
}

int main(void) {
int t = 234;
int x = 4322;
int sum = add(t, x);
printf("The result of the sum of %d and %d is %d\n", t,x,sum);
return 0;
}
