#include <stdio.h>
#include <math.h>

int sizeOfNumber(int value);

int main()
{
    int number;
    printf("Enter a number to check:");
    scanf("%d", &number);
    int temp = number;
    int d = sizeOfNumber(number);
    
    int result = 0;
    int reminder = 0;
    while (number != 0)
    {
        reminder = number % 10;
        // result = (result * 10) + reminder;
        double power = pow(reminder, d);
        result = result + power;
        number /= 10;
    }
    if (result == temp)
    {
        printf("amrystrong");
    }
    else
    {
        printf("not amrystrong");
    }

    return 0;
}

int sizeOfNumber(int value){
    int looped = 0;
     while (value != 0)
    {
        looped++;
        value /= 10;
    }
    return looped;
}