#include <stdio.h>

int resultPlus, resultMinus, resultMul, resultDiv; 

int plus(int inputOne, int inputTwo)
{
	int result = inputOne + inputTwo;
	return result;
}

int minus(int inputOne, int inputTwo)
{
	int result = inputOne - inputTwo; 
	return result;
}

int mul(int inputOne, int inputTwo)
{
	int result = inputOne * inputTwo; 	
	return result;
}

int div(int inputOne, int inputTwo)
{
	int result = inputOne / inputTwo;; 	
	return result;
}

void printAll(int a, int b)
{
	printf("%d + %d =  %d\n", a, b, resultPlus);
	printf("%d - %d =  %d\n", a, b, resultMinus);
	printf("%d * %d =  %d\n", a, b, resultMul);
	printf("%d / %d =  %d\n", a, b, resultDiv);
}

void calcAll(int a, int b)
{
	resultPlus = plus(a, b);
	resultMinus = minus(a, b);
	resultMul = mul(a, b);
	resultDiv = div(a, b);	
}
//�Է��� ������ ������ ��µǴ� ��ȯ��return�� 1��
//��ȯ���� �������� �ϰ� ������ �Է��� �迭��, ��ȯ�� �迭��, �ڹٿ��� �� 



//main�� �Լ� �ؿ� �־�� ������ ���� �� ���� 
int main()
{
	
	//����� 
	
	int a;
	int b;
	
	//�Էº� 
	a=10;
	b=2;
	
	//���  
	calcAll(a, b);
	
	
	//��� 
	printAll(a, b);
	
	return 0;
}
