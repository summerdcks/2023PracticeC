#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>   // ���ڿ� ó�� �Լ��� ����ϱ� ���� ��� ����

int main()
{
	int ticket;
	long long  idNum;
	int num;
	int special;
	int ticketList[10], ageList[10], numList[10], specialList[10], totalOrderCount = 0;
	long long birthYear = 0, birthMonth = 0, birthDay = 0;
	//long long todayYear, todayMonth, todayDay;
	long long age;
	int flag;
	
	while(true)  // ��ü �ֹ� �ݺ� 
	{
			// ���� ���� 
		printf("������ �����ϼ���.\n");  
		printf("1. �ְ���\n");
		printf("2. �߰���\n");		
		while (true){
			scanf("%d", &ticket);
			
			if (ticket == 1 || ticket == 2){
				break;
			}
			else {
			printf("�ٽ� �Է��ϼ���.\n");
			}
		}
		ticketList[totalOrderCount] = ticket;	
		// �ֹι�ȣ �Է�  
		printf("�ֹι�ȣ�� �Է��ϼ���.(-���� �Է�)\n");  
		while (true){		
			char id[14]; // �ֹι�ȣ�� �Է¹��� ���ڿ� �迭
			char birthMonthStr[3]; // ���� ������ ���ڿ� �迭
			char birthDayStr[3]; // ���� ������ ���ڿ� �迭
			char birthYearStr[3];
			char flagStr[3];
			
			scanf("%s", id);
			
			birthYearStr[0] = id[0]; //�ֹι�ȣ�� �� �κ��� �����Ͽ� year �迭�� �ֱ�  
		    birthYearStr[1] = id[1];
		    birthYearStr[2] = '\0';
		    
		    birthMonthStr[0] = id[2]; //�ֹι�ȣ�� �� �κ��� �����Ͽ� month �迭�� �ֱ�  
		    birthMonthStr[1] = id[3];
		    birthMonthStr[2] = '\0';
		    
		    birthDayStr[0] = id[4]; //�ֹι�ȣ�� �� �κ��� �����Ͽ� day �迭�� �ֱ�  
		    birthDayStr[1] = id[5];
		    birthDayStr[2] = '\0';
		    
		    flagStr[0] = id[6]; //���� �ڸ� ����  
		    flagStr[1] = '\0';
		    
			
			if(	
				(atoi(birthYearStr) >= 00 && atoi(birthYearStr) <= 99)
				&&
			 	(strlen(id) == 13)
				 &&
				(atoi(birthMonthStr) >= 01 && atoi(birthMonthStr) <= 12)
				&&
				(atoi(birthDayStr) >= 01 && atoi(birthDayStr) <= 31)
				&&
			  	(atoi(flagStr) == 1 || atoi(flagStr) == 2 || atoi(flagStr) == 3 || atoi(flagStr) == 4)
			)
			{
				//printf("�Է��� �ֹι�ȣ�� ��������� %s�� %s�� %s���Դϴ�.\n", birthYearStr, birthMonthStr, birthDayStr);
				
		        birthYear = atoi(birthYearStr);
		    	birthMonth = atoi(birthMonthStr);
		    	birthDay = atoi(birthDayStr);
		    	
			    //���� ����ϱ�
				time_t t = time(NULL);  
			    struct tm *now = localtime(&t);  
			    int todayYear = now->tm_year + 1900;  
			    int todayMonth = now->tm_mon + 1;  
			    int todayDay = now->tm_mday;  
			 
				 //long long age;
				 age = (todayYear - birthYear) % 100; //�� ����  
				 ageList[totalOrderCount] = age;
				 //printf("����� ���̴� %lld���Դϴ�.\n", age);
				 break; // if ������ ���� �ڵ�� �̵�  
			} //if�� ������ ������� ����  		
			else{
				printf("�ٽ� �Է��ϼ���.\n");
			}
		}
		//���� ���� ���  
		int dayA = 56000, dayT = 47000, dayS = 44000, dayG = 44000;
		int nightA = 46000, nightT = 40000, nightS = 37000, nightG = 37000;
		int price;
		if ( ticket == 1)
		{
			if (age >= 19 && age <= 64 )
			{
				price = dayA;
			}
			 else if (age <= 18 )
			{
				price = dayT;
			}
			else if (age <= 12 )
			{
				price = dayS;
			}
			else if (age >= 65 )
			{
				price = dayG;
			}
			else if (age <= 2 )
			{
				price = 0;
			}
		}	
		if ( ticket == 2)
		{
			if (age >= 19 && age <= 64 )
			{
				price = nightA;
			}
			 else if (age >= 13 && age <= 18 )
			{
				price = nightT;
			}
			else if (age >= 3 && age <= 12 )
			{
				price = nightS;
			}
			else if (age >= 65 )
			{
				price = nightG;
			}
			else if (age <= 2 )
			{
				price = 0;
			}
		}
		printf("�� ���� �ֹ��Ͻðڽ��ϱ�? (�ִ� 10��)\n");
		while (true){
			scanf("%d", &num);		
			if ( num >=1 && num <= 10) {
				break;
			}
			else {
				printf("�ٽ� �Է��ϼ���.\n");
			}	
		}
		numList[totalOrderCount] = num;
	
		printf("��������  �����ϼ���.\n"); // ������ ���� 
		printf("1. ���� (���� ���� �ڵ�ó��)\n");
		printf("2. �����\n");
		printf("3. ����������\n");
		printf("4. ���ڳ�\n");
		printf("5. �ӻ��\n");
		while (true){
			scanf("%d", &special);			
			if ( special >=1 && special <= 5) {
				break;
			}
			else {
				printf("�ٽ� �Է��ϼ���.\n");
			}	
		}
		specialList[totalOrderCount] = special;
		float discount;
			
		if ( special == 1)
		{
			discount = 1;
		}
		if ( special == 2)
		{
			discount = 0.6;
		}
		if ( special == 3)
		{
			discount = 0.5;
		}
		if ( special == 4)
		{
			discount = 0.8;
		}
		if ( special == 5)
		{
			discount = 0.85;
		}	
		float total;
		total = price * (float)(discount) * num;
		
		printf("������ %.0f�Դϴ�.", total );
		
		printf("�߰� �ֹ� �Ͻðڽ��ϱ�? \n");  
		printf("1. �� \n");
		printf("2. �ƴϿ�\n");
		
		int addOrder;
		while (true){
			scanf("%d", &addOrder);
			
			if (addOrder == 1 || addOrder == 2){
				break;
			}
			else {
			printf("�ٽ� �Է��ϼ���.\n");
			}
		}
		if(addOrder == 2) {
			break;
		} 
		totalOrderCount++;
	}
	
	for(int index = 0; index <=totalOrderCount; index++) {
		
		printf("���� : %d, ���� : %d, ���� : %d, ��� : %d\n", ticketList[index], ageList[index], 
																numList[index], specialList[index] );
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	  
	  
return 0;	
}

