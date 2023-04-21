#include<stdio.h>
#include<math.h> 
int main()
{
	int x1, y1, x2, y2, x3, y3;
	int area;

	printf("세개의 좌표값을 차례대로 넣으시오(x1, y1, x2, y2, x3, y3):");
	scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
	
	area = fabs((x1*y2+x2*y3+x3*y1)-(x2*y1+x3*y2+x1*y3))/2;
	
	printf("%d", area);	
	
	return 0;
}
