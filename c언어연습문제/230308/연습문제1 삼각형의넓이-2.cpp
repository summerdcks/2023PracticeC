#include<stdio.h>
#include<math.h> 
int main()
{
	int x1, y1, x2, y2, x3, y3;
	float area;

	printf("������ ��ǥ���� ���ʴ�� �����ÿ�(x1, y1, x2, y2, x3, y3):");
	scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
	
 // ���� = |(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2))/2|
 	area = fabs((x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2))/2);
	
	printf("%.1f", area);	
	
	return 0;
}
