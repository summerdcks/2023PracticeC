#include <stdio.h>
int main()
{	int linuxScore, javaScore, cScore;
	FILE *fp;
	fp = fopen("input2.txt", "r");
	printf("������\t�ڹ�\tC���\n");
	while(fscanf(fp, "%d,%d,%d", &linuxScore, &javaScore, &cScore) !=-1);
	{
		printf("%d\t%d\t%d\n", linuxScore, javaScore, cScore);
	
	}
	fclose(fp);
	return 0;
}
