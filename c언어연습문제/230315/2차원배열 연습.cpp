#include <stdio.h>
#include <string.h>

int main()
{

//	char* ticket[�ְ���,�߰���][BABY, CHILD, TEEN, ADULT, OLD] = {}
//	char* ticket[2][5] = {DAY_BABY, DAY_CHILD, DAY_TEEN, DAY_ADULT, DAY_OLD},
//							{NIGHT_BABY, NIGHT_CHILD, NIGHT_TEEN, NIGHT_ADULT, NIGHT_OLD};





    char* ticket[2][2] ; // 2�� 2���� ���ڿ� �迭

    // 1��� 1���� ���� �Ҵ�
    char* rowHeader[] = "DAY";
    char* columnHeader[] = "BABY";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (i == 0) { // 1��
                sprintf(ticket[i][j], "%s_%s", rowHeader, columnHeader);
            } else if (j == 0) { // 1��
                sprintf(ticket[i][j], "%s_%s", rowHeader, columnHeader);
            }
             else {
                strcpy(ticket[i][j],""); // ������ ��Ҵ� �� ���ڿ��� �ʱ�ȭ
            }
        }
}

    // �迭 ���
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%s\t", ticket[i][j]);
        }
        printf("\n");
    }








return 0;
}
