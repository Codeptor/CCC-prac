//iterations = 0
//number = input()
//while iterations < 5:
//    number = number + number.reverse()
//    if number is palindrome : 
//        print number
//        print "YES"
//    iterations++;
//print "NO"

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int iterations = 0;
    int number;
    scanf("%d", &number);
    while(iterations < 5){
        int temp = number;
        int reverse = 0;
        while(temp != 0){
            reverse = reverse * 10 + temp % 10;
            temp = temp / 10;
        }
        number = number + reverse;
        int temp2 = number;
        int reverse2 = 0;
        while(temp2 != 0){
            reverse2 = reverse2 * 10 + temp2 % 10;
            temp2 = temp2 / 10;
        }
        if(reverse2 == number){
            printf("YES \n");
            printf("%d", number);
            return 0;
        }
        iterations++;
    }
    printf("NO");
    return 0;
}
