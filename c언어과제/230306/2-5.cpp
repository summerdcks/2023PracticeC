#include <stdio.h>
int main()
{
	FILE *fp;
	fp= fopen("output.txt", "a");
	fprintf(fp, "제 이름은 홍길동이고, 나이는 21살입니다.\n");
	fclose(fp);
	return 0;
}
