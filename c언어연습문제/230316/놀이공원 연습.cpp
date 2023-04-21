#include <stdio.h>
#include <time.h>
//�Լ����� 
void selectType(int dayNight, char* typeOfTicket);
void inputSocialNumber(long long int socialNumber, int birthYear, int birthMonth, int birthDay, int flag);
void inputNumber(int number);
void selectDiscount(int discount, char* appliedDiscount);

int main()
{
//����� 
	int age, dayNight, number, price, discount;
	int birthYear, birthMonth, birthDay, flag;
	int answer, end;
	long long int* socialNumber;
	float discountRate;
	const int DAY_ADULT=56000, DAY_TEEN=47000, DAY_CHILD=44000, DAY_OLD=44000, DAY_BABY=0, NIGHT_ADULT=46000, NIGHT_TEEN=40000, NIGHT_CHILD=37000, NIGHT_OLD=37000, NIGHT_BABY=0;
	
	int i=0;
	char* typeOfTicket[20] = { 0 };
 	int countOfTicket[20] = { 0 };
 	char* appliedDiscount[20] = { 0 };
 	char* ageOfEntrant[20] = { 0 };
	int priceOfTicket[20] = { 0 };
	
//�Էº�	
	//�ְ��߰����� 
	selectType(dayNight,  typeOfTicket);
	
	//�ֹι�ȣ�Է� 
	inputSocialNumber(socialNumber, birthYear, birthMonth, birthDay, flag);
	
	//�ֹ�ǥ�� 
	inputNumber(number);
	
	//���μ���  
	selectDiscount(discount, appliedDiscount);
		
		
		
//���		
	//���糯¥�ҷ�����
		time_t now = time(NULL);
		struct tm *t = localtime(&now);
		
		int year = t->tm_year + 1900; // 1900�� �������� ������
		int month = t->tm_mon + 1; // ���� 0���� �����ϹǷ� 1�� ������
		int day = t->tm_mday;
	
	//���̰��
		age = (year - birthYear) % 100 + 1;
	
	
		
	
	
//��º� 
	
	
	
	return 0;	
 } 


//�Լ� 
//�ְ��߰����� 
void selectType(int dayNight, char* typeOfTicket) {
    printf("������ �Է��Ͻÿ�:\n1. �ְ���\n2. �߰���\n");
    while (true) {
        scanf("%d", dayNight);
        if (dayNight == 1 || dayNight == 2) break;
        else printf("�ٽ� �����Ͻÿ�\n");
    }

    if (dayNight == 1) *typeOfTicket = "�ְ���";
    else typeOfTicket = "�߰���";
}

//�ֹι�ȣ�Է� 
void inputSocialNumber(long long int socialNumber, int birthYear, int birthMonth, int birthDay, int flag) {
    printf("\n�ֹι�ȣ�� �Է��Ͻÿ�:\n");
    while (true) {
        scanf("%lld", socialNumber);

        // �ֹι�ȣ �����ϱ�
        birthYear = socialNumber / 100000000000; // ����
        birthMonth = socialNumber / 1000000000 % 100; // ��
        birthDay = socialNumber / 10000000 % 100; // ��
        flag = socialNumber / 1000000 % 10; // �ֹι�ȣ���ڸ�ù��°

        if ((999999999999 < socialNumber && socialNumber < 10000000000000) &&
            (1 <= birthMonth && birthMonth <= 12) &&
            (1 <= birthDay && birthDay <= 31) &&
            (flag == 1 || flag == 2 || flag == 3 || flag == 4)) break;

        else printf("�ٽ� �����Ͻÿ�\n");
    }
}

//�ֹ�ǥ�� 
void inputNumber(int number) {
    printf("\n��� �ֹ��Ͻðڽ��ϱ�?(�ִ�10��):\n");
    while (true) {
        scanf("%d", number);
        if (0 < number && number < 11) break;
        else printf("�ٽ� �����Ͻÿ�\n");
    }
}

 
void selectDiscount(int discount, char* appliedDiscount) {
    printf("\n�������� �����Ͻÿ�:\n1.����(���̿��� �ڵ�ó��)\n2.�����\n3.����������\n4.���ڳ�\n5.�ӻ��\n");
    while (true) {
        scanf("%d", discount);
        if (0 < discount && discount < 6) break;
        else printf("�ٽ� �����Ͻÿ�\n");
    }

    if (discount == 1) *appliedDiscount = "*����������";
    if (discount == 2) *appliedDiscount = "*����ο������";
    if (discount == 3) *appliedDiscount = "*���������ڿ������";
    if (discount == 4) *appliedDiscount = "*���ڳ�������";
    if (discount == 5) *appliedDiscount = "*�ӻ�ο������";
    
}


