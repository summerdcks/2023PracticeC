#include <stdio.h>
int main()
{ 
	char character;
	
	printf("문자를 입력하세요:");
	scanf("%c", &character) ;
	printf("입력하신 문자는 %c입니다\n", character);
	
	return 0;
}
