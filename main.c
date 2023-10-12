#include <stdio.h>

int print_star();

int main(void) {
	
	print_star();
	print_star();
	print_star();
	
	return 0;	
}

void print_star() {   // 출력값 없으므로 void 씀 
	
	int i;
	
	for (i=0;i<10;i++) {
		printf("*");
	}
}
