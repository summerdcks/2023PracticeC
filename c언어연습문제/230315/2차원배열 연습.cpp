#include <stdio.h>
#include <string.h>

int main()
{

//	char* ticket[주간권,야간권][BABY, CHILD, TEEN, ADULT, OLD] = {}
//	char* ticket[2][5] = {DAY_BABY, DAY_CHILD, DAY_TEEN, DAY_ADULT, DAY_OLD},
//							{NIGHT_BABY, NIGHT_CHILD, NIGHT_TEEN, NIGHT_ADULT, NIGHT_OLD};





    char* ticket[2][2] ; // 2행 2열의 문자열 배열

    // 1행과 1열에 값을 할당
    char* rowHeader[] = "DAY";
    char* columnHeader[] = "BABY";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (i == 0) { // 1행
                sprintf(ticket[i][j], "%s_%s", rowHeader, columnHeader);
            } else if (j == 0) { // 1열
                sprintf(ticket[i][j], "%s_%s", rowHeader, columnHeader);
            }
             else {
                strcpy(ticket[i][j],""); // 나머지 요소는 빈 문자열로 초기화
            }
        }
}

    // 배열 출력
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%s\t", ticket[i][j]);
        }
        printf("\n");
    }








return 0;
}
