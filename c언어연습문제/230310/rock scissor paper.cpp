#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    srand(time(NULL)); 					// �õ尪 �ʱ�ȭ

    char you[10];
    int com, number;
    int youwin=0, comwin=0, same=0;

for(int i=0 ; i<5; i++)
{	
    printf("���� ���� ���� �Է��Ͻÿ� (����/����/��/����): ");
    scanf("%s", you);

    if(strcmp(you, "����") == 0) break;

	while(true)
	{	
	
    if(strcmp(you, "����") == 0) number = 1;
    else if(strcmp(you, "����") == 0) number = 2;
    else if(strcmp(you, "��") == 0) number = 3;
    else printf("�߸��� �Է��Դϴ�.\n");

	com = rand() % 3 + 1; 				// 1~3 ������ ������ ����

    if(com == number) {printf("�����ϴ�.\n"); same++;}
    else if((com==1 && number==2) || (com==2 && number==3) || (com==3 && number==1)) {printf("����� �¸��Դϴ�.\n"); youwin++;}
    else {printf("��ǻ���� �¸��Դϴ�.\n"); comwin++; }
	
	break;
	}
}
	printf("\n����� %d�� �̰���.\n", youwin);
	printf("��ǻ�Ͱ� %d�� �̰���.\n", comwin);
	printf("%d�� �����.\n", same); 
	
    return 0;
}
