#include <stdio.h>
#include <time.h> 

int main()
{
	int age, dayNight, number, price, discount, birthYear, birthMonth, birthDay, flag, answer, end;
	long long int socialNumber;
	float discountRate;
	const int DAY_ADULT=56000, DAY_TEEN=47000, DAY_CHILD=44000, DAY_OLD=44000, DAY_BABY=0, NIGHT_ADULT=46000, NIGHT_TEEN=40000, NIGHT_CHILD=37000, NIGHT_OLD=37000, NIGHT_BABY=0;
	int i=0; 
	int list[10][5] = { 0 };
	// �ְ��߰� ���� ������ ���� ���� 

do{	
	do{
	
	
		printf("������ �Է��Ͻÿ�:\n1. �ְ���\n2. �߰���\n");
		while(true)
		 {
		 	scanf("%d", &dayNight);
		 	if(dayNight == 1 || dayNight == 2) break;
		 	else printf("�ٽ� �����Ͻÿ�\n");
		 }
		 
		list[i][0] = dayNight;
		
		
		printf("\n�ֹι�ȣ�� �Է��Ͻÿ�:\n");
		while(true)
		 {
		 	scanf("%lld", &socialNumber);
	 		
	 			//�ֹι�ȣ �����ϱ� 
				birthYear = socialNumber / 100000000000;	//���� 
				birthMonth = socialNumber / 1000000000 % 100; //�� 
				birthDay = socialNumber / 10000000 % 100;		//�� 
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
		 
		
		printf("\n��� �ֹ��Ͻðڽ��ϱ�?(�ִ�10��):\n");
		while(true)
		 {
		 	scanf("%d", &number);
		 	if(0 < number && number < 11) break;
		 	else printf("�ٽ� �����Ͻÿ�\n");
		 }
	
		list[i][1] = number;
	
		printf("\n�������� �����Ͻÿ�:\n1.����(���̿��� �ڵ�ó��)\n2.�����\n3.����������\n4.���ڳ�\n5.�ӻ��\n");
		while(true)
		 {
			scanf("%d", &discount);
		 	if(0 < discount && discount < 6) break;
		 	else printf("�ٽ� �����Ͻÿ�\n");
		 }

		list[i][2] = discount;

		//���糯¥ �ҷ�����
		time_t now = time(NULL);
		struct tm *t = localtime(&now);
		
		int year = t->tm_year + 1900; // 1900�� �������� ������
		int month = t->tm_mon + 1; // ���� 0���� �����ϹǷ� 1�� ������
		int day = t->tm_mday;
	

		//���̰���ϱ� 
		age = (year - birthYear) % 100 + 1;
	


	
		if(dayNight==1)				//�ְ��� 
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
		
		else if(dayNight==2)		//�߰��� 
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
		
		
				
		if (price==DAY_BABY || price==NIGHT_BABY) list[i][3]=100; 
		else if (price==DAY_CHILD || price==NIGHT_CHILD) list[i][3]=200; 
		else if (price==DAY_TEEN || price==NIGHT_TEEN) list[i][3]=300; 
		else if (price==DAY_ADULT || price==NIGHT_ADULT) list[i][3]=400; 
		else if (price==DAY_OLD || price==NIGHT_OLD) list[i][3]=500; 
		
		
		switch(discount)		//������
		{	
			case 1 :
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

		printf("\n������ %d ���Դϴ�.\n�����մϴ�\n\n", (int)((float)price*(float)number*discountRate));
	
		list[i][4] = (int)((float)price*(float)number*discountRate);			//�ݾ��� totalPrice �迭�� ���� 
	
		printf("����Ͻðڽ��ϱ�?:\n1.��\n2.����\n");
		scanf("%d", &answer);
 
		i++;

	}while(answer == 1);
		
	printf("===================��������==================\n\n");
	
	int sum =0;
	for (int j = 0 ; j < i ; j++)
		{	
		printf("%5s %5s x %3d %10d�� %10s\n", list[j][0], list[j][3], list[j][1], list[j][4], list[j][2]) ;
    	
		sum +=list[j][4];		//�迭�� ��� �ջ� =�Ѿ� 	
		}


	printf("\n����� �Ѿ��� %d���Դϴ�.\n\n=============================================", sum);
	
	printf("\n\n��� ����(1:���ο� �ֹ�, 2:���α׷� ����):");
	scanf("%d", &end); 
	
}while(end==1);

		
	return 0;
}
