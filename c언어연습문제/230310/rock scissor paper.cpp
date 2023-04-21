#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    srand(time(NULL)); 					// 시드값 초기화

    char you[10];
    int com, number;
    int youwin=0, comwin=0, same=0;

for(int i=0 ; i<5; i++)
{	
    printf("가위 바위 보를 입력하시오 (가위/바위/보/종료): ");
    scanf("%s", you);

    if(strcmp(you, "종료") == 0) break;

	while(true)
	{	
	
    if(strcmp(you, "가위") == 0) number = 1;
    else if(strcmp(you, "바위") == 0) number = 2;
    else if(strcmp(you, "보") == 0) number = 3;
    else printf("잘못된 입력입니다.\n");

	com = rand() % 3 + 1; 				// 1~3 사이의 랜덤값 생성

    if(com == number) {printf("비겼습니다.\n"); same++;}
    else if((com==1 && number==2) || (com==2 && number==3) || (com==3 && number==1)) {printf("당신의 승리입니다.\n"); youwin++;}
    else {printf("컴퓨터의 승리입니다.\n"); comwin++; }
	
	break;
	}
}
	printf("\n당신이 %d번 이겼어요.\n", youwin);
	printf("컴퓨터가 %d번 이겼어요.\n", comwin);
	printf("%d번 비겼어요.\n", same); 
	
    return 0;
}
