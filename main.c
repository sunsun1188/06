#include <stdio.h>

void func1(void) {
	int x;
	printf("func1 x is at %p\n",&x); // %p 출력이 16진수 형태로 나옴 
} 

int main(void) {
	int x;
	printf("main x is at %p\n",&x); // x의 주소값 16진수로 출력 
	func1();
	
	return 0;
} 
/* 스태 국조에서 main 함수의 x가 더 아래 있음(메모리 수 더 높음)
func1 함수의 x 메모리 수 더 낮음 */ 
