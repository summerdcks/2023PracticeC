#include <stdio.h>
#include <unistd.h>

int main()
{
    int number, i;
    printf("���� �� ���� �ұ��? : ");
    scanf("%d", &number);
    
    for(i = 1; i <= number; i++)
    {
        int temp = i;
        int count = 0;
        while(temp != 0)
        {
            int digit = temp % 10;
            if(digit == 3 || digit == 6 || digit == 9)
            {
                count++;
            }
            temp /= 10;
        }
        if(count > 0)
        {
            for(int j = 0; j < count; j++)
            {
                printf("¦\a");
                   sleep(1);
            }
        }
        else
        {
            printf("%d", i);
        }
        printf("\n");
    }
    
    return 0;
}


						//pow(10, n) = 10�� n�� 
						
