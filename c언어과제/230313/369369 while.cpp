#include <stdio.h>

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
                printf("¦");
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



