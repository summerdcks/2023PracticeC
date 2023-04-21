#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int type, age, num, prefer, price;
int month, day;
int go;
long long address;
int total[100][5];

int getType();
int getAge();
int getNum();
int getPrefer();
int getPrice();
void getTotal(int i);
void printPrice(int i);
int ifRepeat();

int main() {
	int i = 0;
	
	while(1) {
	type = getType(); // ���� �ޱ� 
	age = getAge(); // ���� �ޱ� 
	num = getNum(); // ���� ���� �ޱ� 
	prefer = getPrefer(); // ������ �ޱ� 
	getTotal(i); // ���� ��� �� ���� 
	go = ifRepeat(); // �ݺ� ����
	if(go == 0) break; // ���� ����
	i++;
	}
	printPrice(i); // ���� ���
	
	return 0;
}


int getType() { // ������ �Է¹ް� �� ���� �����ϴ� �Լ� 
	while(1) {
		printf("������ �����ϼ���.\n1. �ְ���\n2. �߰���\n");
		scanf("%d", &type);
		if(type != 1 && type != 2) {
			printf("��ȿ�� ���ڸ� �Է��ϼ���.\n");
		}
		else break;
	}
	return type;
}
int getAge() { // �ֹε�Ϲ�ȣ�� �Է¹ް� ���̸� �����ϴ� �Լ� 
	
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	
	int currYear = tm.tm_year + 1900; 
	int currMonth = tm.tm_mon+1;
	int currDay = tm.tm_mday;
	
	while(1) {
		printf("�ֹι�ȣ�� �Է��ϼ���.\n");
		scanf("%lld", &address);
		
		if(address > 9999999999999 || address < 1000000000000) {
			printf("��ȿ�� ��ȣ�� �Է��ϼ���.\n");
		}
		else break;
	}
	age = (currYear - (address/100000000000))%100;
	int month = ((address/10000000)%10000)/100;
	int day = (address/10000000)%100;
		
	if(currMonth - month < 0 || (currMonth - month == 0 && currDay - day < 0)) age--; // ������ �� �������� �� ���� ���ش�. 
		
	return age;
	
}

int getNum() { // ���� ������ �Է¹ް� �� ���� �����ϴ� �Լ� 
	
	while(1) {
		
		printf("�� ���� �ֹ��Ͻðڽ��ϱ�? (�ִ� 10��)\n");
		scanf("%d", &num);
		
		if(num > 10 || num <1) {
			printf("��ȿ�� ���� �Է��ϼ���.\n");
			continue;
		}
		break;
	}
	return num;
}

int getPrefer() { // �������� �Է¹ް� �� ���� �����ϴ� �Լ� 
	while(1) {
		printf("�������� �����ϼ���.\n1. ���� (���� ���� �ڵ�ó��)\n2. �����\n3. ����������\n4. ���ڳ�\n5. �ӻ��\n");
		scanf("%d", &prefer);
		if(prefer < 1 || prefer > 5) {
			printf("��ȿ�� ���ڸ� �Է��ϼ���.\n");	
		}
		else break;
	}
	
	return prefer;
}

int getPrice() { // Ƽ�� ������ ����ϴ� �Լ� 
	if(age >=65) {
			if(type == 1) price = 44000;
			if(type == 2) price = 37000;
		}
		else if(age >= 19) {
			if(type == 1) price = 56000;
			if(type == 2) price = 46000;
		}
		else if(age >= 13) {
			if(type == 1) price = 47000;
			if(type == 2) price = 40000;
		}
		else if(age >= 3) {
			if(type == 1) price = 44000;
			if(type == 2) price = 37000;
		}
		else if(age <= 2) {
			price = 0;
		}
		
		price *= num;
		
		if(prefer == 2) {
			price *= 0.6;
		}
		if(prefer == 3) {
			price *= 0.5;
		}
		if(prefer == 4) {
			price *= 0.8;
		}
		if(prefer == 5) {
			price *+ 0.85;
		}
		
		return price;
		
}

void getTotal(int i) { // i��° �ŷ��� ���� ���� 
	total[i][0] = type; 
	total[i][1] = age;
	total[i][2] = num;
	total[i][3] = prefer;
	total[i][4] = getPrice();
} 

void printPrice(int i) { // ���� ������ ����ϴ� �Լ�
	int totalPrice = 0;
	char* ttype[2] = {"�ְ���", "�߰���"};
	char* pprefer[5] = {"����","�����","����������","���ڳ�","�ӻ��"};
	
	for(int j=0; j<=i; j++) {
		printf("%d��° �ŷ�- ����:%s, ����:%d, ���� ���:%d, ������:%s, ����:%d \n", j+1, ttype[total[j][0]-1], total[j][1],total[j][2],pprefer[total[j][3]-1],total[j][4]);
		totalPrice+=total[j][4];
	}
	
	printf("�� ������ %d�� �Դϴ�.", totalPrice);
	printf("\n�����մϴ�.\n");
}

int ifRepeat() { // �ݺ� ���θ� �Է¹ް� �״�� �����ϴ� �Լ� 
	while(1) {
		printf("�� �� �� �����Ͻðڽ��ϱ�? (yes: 1, no: 0)");
		scanf("%d", &go);
		if(go!=1 && go!=0) printf("��ȿ�� ���� �Է��ϼ���.");
		else break;
	}
	return go;
}


