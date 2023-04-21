#include <stdio.h>
#include <time.h>
#include <string.h> 

int main()
{
	int age, dayNight, number, price, discount;
	int birthYear, birthMonth, birthDay, flag;
	int answer, end;
	long long int socialNumber;
	float discountRate;
	
	int DAY_ADULT, DAY_TEEN, DAY_CHILD, DAY_OLD, DAY_BABY, NIGHT_ADULT, NIGHT_TEEN, NIGHT_CHILD, NIGHT_OLD, NIGHT_BABY;


	//	char* ticket[�ְ���,�߰���][BABY, CHILD, TEEN, ADULT, OLD] = {}
	char* ticket[2][5] = {
							{0},
							{0}
					 	 };
	


	int i=0;
	char* typeOfTicket[20] = { 0 };
 	int countOfTicket[20] = { 0 };
 	char* appliedDiscount[20] = { 0 };
 	char* ageOfEntrant[20] = { 0 };
	int priceOfTicket[20] = { 0 };

do{
	
	do{
		
	
		printf("������ �Է��Ͻÿ�:\n1. �ְ���\n2. �߰���\n");
		while(true)
		 {
		 	scanf("%d", &dayNight);
		 	if(dayNight == 1 || dayNight == 2) break;
		 	else printf("�ٽ� �����Ͻÿ�\n");
		 }
		

		if (dayNight == 1) 
		{
			for(int a = 0 ; a < 2 ; a++)
			ticket[1][a]="DAY";
		}
		else 
		{
			for(int a = 0 ; a < 2 ; a++)
			ticket[2][a]="NIGHT";
		}
		

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
	
	
		countOfTicket[i] = number; 
	
	
	
		printf("\n�������� �����Ͻÿ�:\n1.����(���̿��� �ڵ�ó��)\n2.�����\n3.����������\n4.���ڳ�\n5.�ӻ��\n");
		while(true)
		 {
			scanf("%d", &discount);
		 	if(0 < discount && discount < 6) break;
		 	else printf("�ٽ� �����Ͻÿ�\n");
		 }


		if(discount == 1) appliedDiscount[i]="*����������";
		if(discount == 2) appliedDiscount[i]="*����ο������";
		if(discount == 3) appliedDiscount[i]="*���������ڿ������";
		if(discount == 4) appliedDiscount[i]="*���ڳ�������";
		if(discount == 5) appliedDiscount[i]="*�ӻ�ο������";



		//���糯¥ �ҷ�����
		time_t now = time(NULL);
		struct tm *t = localtime(&now);
		
		int year = t->tm_year + 1900; // 1900�� �������� ������
		int month = t->tm_mon + 1; // ���� 0���� �����ϹǷ� 1�� ������
		int day = t->tm_mday;
	

		//���̰���ϱ� 
		age = (year - birthYear) % 100 + 1;
	

	

			if(age<=2) 
			{
				for(int b = 0 ; b < 2 ; b++)
				strcpy(ticket[b][0], strcat(ticket[b][0], "_BABY"));
			}
		
			else if(age<=12)
			{
				for(int b = 0 ; b < 2 ; b++)
				strcpy(ticket[b][0], strcat(ticket[b][0], "_CHILD"));
			}
			
			
			else if(age<=18)
			{
				for(int b = 0 ; b < 2 ; b++)
				strcpy(ticket[b][0], strcat(ticket[b][0], "_TEEN"));
			}
		
			
			else if(age<=64)
			{
				for(int b = 0 ; b < 2 ; b++)
				strcpy(ticket[b][0], strcat(ticket[b][0], "_ADULT"));
			}
		
			
			else
			{
				for(int b = 0 ; b < 2 ; b++)
				strcpy(ticket[b][0], strcat(ticket[b][0], "_OLD"));
			}
		
	




//
//		if (price==DAY_BABY || price==NIGHT_BABY) ageOfEntrant[i]="������"; 
//		else if (price==DAY_CHILD || price==NIGHT_CHILD) ageOfEntrant[i]="���"; 
//		else if (price==DAY_TEEN || price==NIGHT_TEEN) ageOfEntrant[i]="û�ҳ�"; 
//		else if (price==DAY_ADULT || price==NIGHT_ADULT) ageOfEntrant[i]="�"; 
//		else if (price==DAY_OLD || price==NIGHT_OLD) ageOfEntrant[i]="����"; 
//		
//		
		
		DAY_ADULT=56000, DAY_TEEN=47000, DAY_CHILD=44000, DAY_OLD=44000, DAY_BABY=0, NIGHT_ADULT=46000, NIGHT_TEEN=40000, NIGHT_CHILD=37000, NIGHT_OLD=37000, NIGHT_BABY=0;

		
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
	
		priceOfTicket[i] = (int)((float)price*(float)number*discountRate);			//�ݾ��� totalPrice �迭�� ���� 
	
		printf("����Ͻðڽ��ϱ�?:\n1.��\n2.����\n");
		scanf("%d", &answer);
 
		i++;



	}while(answer == 1);


	printf("===================��������==================\n\n");
	
	int sum =0;
	for (int j = 0 ; j < i ; j++)
		{	
		printf("%5s %5s x %3d %10d�� %10s\n", typeOfTicket[j], ageOfEntrant[j], countOfTicket[j], priceOfTicket[j], appliedDiscount[j]); 
    	
		sum += priceOfTicket[j];		//�迭�� ��� �ջ� =�Ѿ� 	
		}


	printf("\n����� �Ѿ��� %d���Դϴ�.\n\n=============================================", sum);
	
	printf("\n\n��� ����(1:���ο� �ֹ�, 2:���α׷� ����):");
	scanf("%d", &end); 
	
}while(end==1);

	return 0;
}
