#include <stdio.h>
#include <time.h> 
//����� 
int age, dayNight, number, price, discount, birthYear, birthMonth, birthDay, flag;
long long int socialNumber;
float discountRate;
int priceResult, discountResult, birthYearResult;
//�Լ����� 
//�Է� 
int selectType();
int inputSocialNumber();
int inputNumber();
int selectDiscount();
//��� 
int appliedPrice(int dayNight, int age);
int appliedDiscount(int discount);
//��� 
void printAll(int price, int number, float discountRate);


int main()
{

//�Էº� 

	selectType();					//�ְ��߰��Է� 

	inputSocialNumber();			//�ֹι�ȣ�Է� 
	birthYear = birthYearResult;
	printf("%d", birthYear);

	inputNumber();					//����ǥ���Է� 

	selectDiscount();				//�������Է� 


//��� 

	time_t now = time(NULL);							//���糯¥�ҷ�����
	struct tm *t = localtime(&now);
	
	int year = t->tm_year + 1900; 	// 1900�� �������� ������
	int month = t->tm_mon + 1;		 // ���� 0���� �����ϹǷ� 1�� ������
	int day = t->tm_mday;


	age = (year - birthYear) % 100 + 1;					//���̰���ϱ� 
	printf("%d = %d - %d\n", age, year, birthYear);

	appliedPrice(dayNight, age);						//�ְ��Ǿ߰��ǰ��� 
	price = priceResult;
	printf("%d", price);

	printf("%d", discount);								//������ 
	appliedDiscount(discount);
	discountRate = discountResult;
	printf("%f", discountRate);

//��º� 
	printAll(price, number, discountRate);
	
	
	return 0;
}


//�Լ�
//�Էº� 
	//�ְ��߰��Է� 
	int selectType()
	{
		printf("������ �Է��Ͻÿ�:\n1. �ְ���\n2. �߰���\n");
		while(true)
		 {
		 	scanf("%d", &dayNight);
		 	if(dayNight == 1 || dayNight == 2) break;
		 	else printf("�ٽ� �����Ͻÿ�\n");
		 }
		return dayNight;
	}
	//�ֹι�ȣ�Է� 
	int inputSocialNumber()
	{	
		printf("\n�ֹι�ȣ�� �Է��Ͻÿ�:\n");
		while(true)
		 {
		 	scanf("%lld", &socialNumber);
		 	
		 		//�ֹι�ȣ �����ϱ� 
				birthYearResult = socialNumber / 100000000000;	//���� 
				birthMonth = socialNumber / 1000000000 % 100; //�� 
				birthDay = socialNumber / 10000000 % 100;	//�� 
				flag = socialNumber / 1000000 % 10;			//�ֹι�ȣ���ڸ�ù��° 
	
				
		 	 	if(
				  (999999999999 < socialNumber && socialNumber < 10000000000000)
				  &&
				  (1 <= birthMonth && birthMonth <= 12)
				  &&
				  (1 <= birthDay && birthDay <= 31)
				  &&
			 	  (flag == 1 || flag == 2 || flag == 3 || flag == 4)
			 	 )
				break;			
			
		 		else printf("�ٽ� �����Ͻÿ�\n");
		 }
	  	return birthYearResult;
	}
	//����ǥ���Է� 
	int inputNumber()
	{
		printf("\n��� �ֹ��Ͻðڽ��ϱ�?(�ִ�10��):\n");
		while(true)
		 {
		 	scanf("%d", &number);
		 	if(0 < number && number < 11) break;
		 	else printf("�ٽ� �����Ͻÿ�\n");
		 }
		int number;
	}
	//�������Է� 
	int selectDiscount()
	{
		printf("\n�������� �����Ͻÿ�:\n1.����(���̿��� �ڵ�ó��)\n2.�����\n3.����������\n4.���ڳ�\n5.�ӻ��\n");
		while(true)
		 {
			scanf("%d", &discount);
		 	if(0 < discount && discount < 6) break;
		 	else printf("�ٽ� �����Ͻÿ�\n");
		 }
		return discount;
	}

//���
	//�ְ��Ǿ߰��ǰ��ݰ�� 
	int appliedPrice(int dayNight, int age)
	{
		const int DAY_ADULT=56000, DAY_TEEN=47000, DAY_CHILD=44000, DAY_OLD=44000, DAY_BABY=0, NIGHT_ADULT=46000, NIGHT_TEEN=40000, NIGHT_CHILD=37000, NIGHT_OLD=37000, NIGHT_BABY=0;

		if(dayNight==1)				//�ְ��� 
		{
			if(age<=2) 
			priceResult=DAY_BABY;
		
			else if(age<=12)
			priceResult=DAY_CHILD;
			
			else if(age<=18)
			priceResult=DAY_TEEN;
			
			else if(age<=64)
			priceResult=DAY_ADULT;
			
			else
			priceResult=DAY_OLD;
		}
	
		else if(dayNight==2)		//�߰��� 
		{
			if(age<=2) 
			priceResult=NIGHT_BABY;
		
			else if(age<=12)
			priceResult=NIGHT_CHILD;
			
			else if(age<=18)
			priceResult=NIGHT_TEEN;
			
			else if(age<=64)
			priceResult=NIGHT_ADULT;
			
			else
			priceResult=NIGHT_OLD;
		}
		return priceResult;
	}

	//������ 
	int appliedDiscount(int discount)
	{
	 	switch(discount)		
		{	case 1 :
				discountResult=1;
			break;
			
			case 2 :
				discountResult=0.6;
			break;
			
			case 3 :
				discountResult=0.5;
			break;
			
			case 4 :
				discountResult=0.8;
			break;
			
			case 5 :
				discountResult=0.85;
			break;
		}
		return discountResult;
	}
		
//��º� 
void printAll(int price, int number, float discountRate)
{
	printf("\n������ %d ���Դϴ�.\n�����մϴ�.", (int)((float)price*(float)number*discountRate));
}
