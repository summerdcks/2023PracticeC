#include <stdio.h>
#include <math.h>
#include <unistd.h>
int main()
{
	int maxNumber;
	printf("�� �� ���� �����ұ��? ");
	scanf("%d", &maxNumber);

	int digit = 1;	
	for(int index = 1; index <= maxNumber; index++){
		bool is369 = false;
		if(index % (int)pow(10, digit) == 0) {
			digit++;
		}
		int currentValue = index; 
		for(int k = digit - 1; k >= 0; k--){
			int n = (int)pow(10, k);
			int oneDigit = currentValue / n;
			if(oneDigit == 3 || oneDigit == 6 || oneDigit == 9) {
				printf("¦\a");
				is369 = true;
			} 
			currentValue -= oneDigit * n;						
		}
		if(is369 == false) {
			printf("%d", index);
								
		}
		printf("\n");
	}
	return 0;
}


