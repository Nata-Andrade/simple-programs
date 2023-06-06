#include <stdio.h>

int main(void){

    unsigned int fib1 = 1, fib2 = 1, temp, num;

    printf("Please, insert a natural number so I can check if it belongs to the Fibonacci sequence: ");
    scanf("%u", &num);
    if (!num){
        printf("Your input ISN\'T part of the Fibonacci sequence\n");
        return 0;
    }

    printf("1");
    while(num > fib1){
        printf(", %u", fib1);
        temp = fib1;
        fib1 += fib2;
        fib2 = temp;
    }

    if(num == fib1){
        printf(", %u", fib1);
        printf("\nYour input IS part of the Fibonacci sequence, which is printed above (up until that number)\n");
    }
    else printf("\nYour input ISN\'T part of the Fibonacci sequence, which was printed above (up until that number)\n");

    return 0;
}