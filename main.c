#include <stdio.h>
#include <stdlib.h>

int combination(int n, int r);
int factorial(int n);
void get_integer(int *n, int *r);

int main(int argc, char *argv[]) {
	
	int n,r;
	get_integer(&n,&r);
	
	int result=combination(n,r);
	printf("Combination(%d,%d) is %d\n", n,r,result);
	return 0;
}


int combination(int n, int r) {
	int div1, div2; // di1 분자 div2  분모
	div1=factorial(n); //n!
	div2=factorial(n-r)*factorial(r);
	return (div1/div2);
}

int factorial(int n) {
	
    int res = 1;
    for (int i = 1; i<=n; i++) {
        res *= i;
    }
    return res;
}

void get_integer(int *n, int *r) {
	
	printf("input n: ");
	scanf("%d",n);
	printf("input r: ");
	scanf("%d",r);
}


