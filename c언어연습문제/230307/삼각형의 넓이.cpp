#include <stdio.h>
int main()
{
	int base;
	int height;
	int area;
	
	
	printf("�ﰢ���� �غ�, ���̸� �Է��ϸ� �ﰢ���� ���̰� ���ɴϴ�: ");
	scanf("%d %d", &base, &height);
	area=base*height*0.5;
	printf("%d * %d = %d\n", base, height, area);
	
	return 0;
}
