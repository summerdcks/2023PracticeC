#include <stdio.h>
int main()
{
	int base;
	int height;
	int area;
	
	
	printf("삼각형의 밑변, 높이를 입력하면 삼각형의 넓이가 나옵니다: ");
	scanf("%d %d", &base, &height);
	area=base*height*0.5;
	printf("%d * %d = %d\n", base, height, area);
	
	return 0;
}
