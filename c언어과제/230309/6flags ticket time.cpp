#include <stdio.h>
#include <time.h> 

int main()
{
	int age, daynight, number, price, discount, birthYear;
	long long int socialNumber;
	float discountRate;
	const int DAY_ADULT=56000, DAY_TEEN=47000, DAY_CHILD=44000, DAY_OLD=44000, DAY_BABY=0, NIGHT_ADULT=46000, NIGHT_TEEN=40000, NIGHT_CHILD=37000, NIGHT_OLD=37000, NIGHT_BABY=0;
	
	
	printf("������ �Է��Ͻÿ�:\n1. �ְ���\n2. �߰���\n");
	scanf("%d", &daynight);
	
	printf("\n�ֹι�ȣ�� �Է��Ͻÿ�:\n");
	scanf("%lld", &socialNumber);
	
	printf("\n��� �ֹ��Ͻðڽ��ϱ�?(�ִ�10��):\n");
	scanf("%d", &number);
	
	printf("\n�������� �����Ͻÿ�:\n1.����(���̿��� �ڵ�ó��)\n2.�����\n3.����������\n4.���ڳ�\n5.�ӻ��\n");
	scanf("%d", &discount);


	//���糯¥ �ҷ�����
	time_t now = time(NULL);
	struct tm *t = localtime(&now);
	
	int year = t->tm_year + 1900; // 1900�� �������� ������
	int month = t->tm_mon + 1; // ���� 0���� �����ϹǷ� 1�� ������
	int day = t->tm_mday;


	//���̰���ϱ�
	birthYear = (int)(socialNumber/10000000000);
	age = (year - birthYear) % 100 + 1;
	
	
	
	if(daynight==1)				//�ְ��� 
	{
		if(age<=2) 
		price=DAY_BABY;
	
		else if(age<=12)
		price=DAY_CHILD;
		
		else if(age<=18)
		price=DAY_TEEN;
		
		else if(age<=64)
		price=DAY_ADULT;
		
		else
		price=DAY_OLD;
	
	}
	
	else if(daynight==2)		//�߰��� 
	{
		if(age<=2) 
		price=NIGHT_BABY;
	
		else if(age<=12)
		price=NIGHT_CHILD;
		
		else if(age<=18)
		price=NIGHT_TEEN;
		
		else if(age<=64)
		price=NIGHT_ADULT;
		
		else
		price=NIGHT_OLD;
	
	}	
	
	switch(discount)		//������
{	case 1 :
		discountRate=1;
	break;
	
	case 2 :
		discountRate=0.6;
	break;
	
	case 3 :
		discountRate=0.5;
	break;
	
	case 4 :
		discountRate=0.8;
	break;
	
	case 5 :
		discountRate=0.85;
	break;
		
	
}

	printf("\n������ %d ���Դϴ�.\n�����մϴ�.", (int)((float)price*(float)number*discountRate));
	
	
	return 0;
}
