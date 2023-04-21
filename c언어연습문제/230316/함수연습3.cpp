#include <stdio.h>

int resultPlus, resultMinus, resultMul, resultDiv;
//이건 권장하지 않음. 메모리를 계속 잡아먹고 값이 변했을 때 찾기 어려움. 충돌할 수 있음.
//변수는 되도록 그 코드 안에서 선언하고 해결까지 다 해 

int plus(int inputOne, int inputTwo);
int minus(int inputOne, int inputTwo);
int mul(int inputOne, int inputTwo);
int div(int inputOne, int inputTwo);
void printAll(int a, int b);
void calcAll(int a, int b);
//함수를 먼저 선언해주면 main 밑으로 가도 계산식을 찾아올 수 있음. 보기 좋음 이상적. 

int main()
{
	//선언부 
	
	int a;
	int b;
	
	//입력부 
	a=10;
	b=2;
	
	//계산  
	calcAll(a, b);
	
	
	//출력 
	printAll(a, b);
	
	return 0;
}


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
//입력은 여러개 되지면 출력되는 반환값return은 1개
//반환값을 여러개로 하고 싶으면 입력을 배열로, 반환도 배열로, 자바에선 됨 



 

