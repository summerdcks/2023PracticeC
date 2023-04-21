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
	type = getType(); // 권종 받기 
	age = getAge(); // 나이 받기 
	num = getNum(); // 구매 개수 받기 
	prefer = getPrefer(); // 우대사항 받기 
	getTotal(i); // 가격 계산 및 저장 
	go = ifRepeat(); // 반복 여부
	if(go == 0) break; // 루프 종료
	i++;
	}
	printPrice(i); // 가격 출력
	
	return 0;
}


int getType() { // 권종을 입력받고 그 값을 리턴하는 함수 
	while(1) {
		printf("권종을 선택하세요.\n1. 주간권\n2. 야간권\n");
		scanf("%d", &type);
		if(type != 1 && type != 2) {
			printf("유효한 숫자를 입력하세요.\n");
		}
		else break;
	}
	return type;
}
int getAge() { // 주민등록번호를 입력받고 나이를 리턴하는 함수 
	
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	
	int currYear = tm.tm_year + 1900; 
	int currMonth = tm.tm_mon+1;
	int currDay = tm.tm_mday;
	
	while(1) {
		printf("주민번호를 입력하세요.\n");
		scanf("%lld", &address);
		
		if(address > 9999999999999 || address < 1000000000000) {
			printf("유효한 번호를 입력하세요.\n");
		}
		else break;
	}
	age = (currYear - (address/100000000000))%100;
	int month = ((address/10000000)%10000)/100;
	int day = (address/10000000)%100;
		
	if(currMonth - month < 0 || (currMonth - month == 0 && currDay - day < 0)) age--; // 생일이 안 지났으면 한 살을 뺴준다. 
		
	return age;
	
}

int getNum() { // 구매 개수를 입력받고 그 값을 리턴하는 함수 
	
	while(1) {
		
		printf("몇 개를 주문하시겠습니까? (최대 10개)\n");
		scanf("%d", &num);
		
		if(num > 10 || num <1) {
			printf("유효한 값을 입력하세요.\n");
			continue;
		}
		break;
	}
	return num;
}

int getPrefer() { // 우대사항을 입력받고 그 값을 리턴하는 함수 
	while(1) {
		printf("우대사항을 선택하세요.\n1. 없음 (나이 우대는 자동처리)\n2. 장애인\n3. 국가유공자\n4. 다자녀\n5. 임산부\n");
		scanf("%d", &prefer);
		if(prefer < 1 || prefer > 5) {
			printf("유효한 숫자를 입력하세요.\n");	
		}
		else break;
	}
	
	return prefer;
}

int getPrice() { // 티켓 가격을 계산하는 함수 
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

void getTotal(int i) { // i번째 거래의 정보 저장 
	total[i][0] = type; 
	total[i][1] = age;
	total[i][2] = num;
	total[i][3] = prefer;
	total[i][4] = getPrice();
} 

void printPrice(int i) { // 계산된 가격을 출력하는 함수
	int totalPrice = 0;
	char* ttype[2] = {"주간권", "야간권"};
	char* pprefer[5] = {"없음","장애인","국가유공자","다자녀","임산부"};
	
	for(int j=0; j<=i; j++) {
		printf("%d번째 거래- 권종:%s, 나이:%d, 구매 장수:%d, 우대사항:%s, 가격:%d \n", j+1, ttype[total[j][0]-1], total[j][1],total[j][2],pprefer[total[j][3]-1],total[j][4]);
		totalPrice+=total[j][4];
	}
	
	printf("총 가격은 %d원 입니다.", totalPrice);
	printf("\n감사합니다.\n");
}

int ifRepeat() { // 반복 여부를 입력받고 그대로 리턴하는 함수 
	while(1) {
		printf("한 번 더 진행하시겠습니까? (yes: 1, no: 0)");
		scanf("%d", &go);
		if(go!=1 && go!=0) printf("유효한 값을 입력하세요.");
		else break;
	}
	return go;
}


