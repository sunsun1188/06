#include <stdio.h>

void func1(void) {
	int x;
	printf("func1 x is at %p\n",&x); // %p ����� 16���� ���·� ���� 
} 

int main(void) {
	int x;
	printf("main x is at %p\n",&x); // x�� �ּҰ� 16������ ��� 
	func1();
	
	return 0;
} 
/* ���� �������� main �Լ��� x�� �� �Ʒ� ����(�޸� �� �� ����)
func1 �Լ��� x �޸� �� �� ���� */ 
