#include <stdio.h>
#include <time.h> 

int main()
{
	int age, daynight, number, price, discount;
	long long int socialNumber, birthYear, today;
	float discountRate;
	const int DAY_ADULT=56000, DAY_TEEN=47000, DAY_CHILD=44000, DAY_OLD=44000, DAY_BABY=0, NIGHT_ADULT=46000, NIGHT_TEEN=40000, NIGHT_CHILD=37000, NIGHT_OLD=37000, NIGHT_BABY=0;
	
	printf("\n�ֹι�ȣ�� �Է��Ͻÿ�:\n");
	scanf("%lld", &socialNumber);

	//���糯¥ �ҷ�����
	time_t now = time(NULL);
	struct tm *t = localtime(&now);
	
	int year = t->tm_year + 1900; // 1900�� �������� ������
	int month = t->tm_mon + 1; // ���� 0���� �����ϹǷ� 1�� ������
	int day = t->tm_mday;
	 

	//���̰���ϱ�
	birthYear = (int)(socialNumber/10000000000);
	age = (year - birthYear) % 100 + 1;

	printf("%d", age);	
	
	return 0;
	
}
