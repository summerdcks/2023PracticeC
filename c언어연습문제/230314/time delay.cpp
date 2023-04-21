#include <stdio.h>
#include <unistd.h>

int main() {
   printf("지연 시작\n");
   sleep(1);
   printf("지연 종료\n");
   return 0;
}
