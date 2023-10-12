#include <stdio.h>

int sumTwo(int a, int b) {
	return a+b;
}

int square(int n) {
	return n*n;
}

int get_max(int x, int y) {
	if (x>y) 
		return x;
	else
		return y;   // else •ûµµ µÊ 
}

int main(void) {
	
	int a,b;
	
	a=3;
	b=5;
	
	printf("%d\n",sumTwo(a,b));
	printf("%d\n",square(a));
	printf("%d\n",get_max(a,b));
	
	return 0;
}
