//jacob hansen
//fraction reducer

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
using namespace std;


int GCF(int num, int denom)
{
    num;
    denom;
    int gcf = 1;
    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0 && denom % i == 0)
        {
            gcf = i;
        }
    }

    return gcf;
}

int main()
{
    printf("Welcome to my Fraction Reducer program!\n");

    int num;
    printf("Please enter a numerator\n");
    printf(">");
    scanf_s("%i", &num);
    fseek(stdin, 0, SEEK_END);

    int denom;
    printf("\nPlease enter a denominator\n");
    printf(">");
    scanf_s("%i", &denom);
    fseek(stdin, 0, SEEK_END);

    int gcf = GCF(num, denom); 
    printf("\nYour GCF (greatest common factor):\n");
    printf("%i\n", gcf);

    printf("Your reduced fraction:\n");
    num = num / gcf;
    denom = denom / gcf;
    printf("%i/%i\n", num, denom);

    return 0;
}
