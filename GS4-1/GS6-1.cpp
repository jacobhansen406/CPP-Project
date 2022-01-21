//jacob hansen
//fraction reduser 

#include <iostream>
#include <stdlib.h> 
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <vector>
using namespace std;

int GCF(int num, int den)
{
	int gcf = 1;
	for (int i = den; 0 < i; i--)
	{
		if (num % i == 0 && den % i == 0)
		{
			gcf = i;
			break;
		}
	}
	return gcf;
}

int main()
{
	int num;
	int den;

	printf("enter the numerator:\n");
	cin >> num;
	system("CLS");
	printf("enter the denomenator\n");
	cin >> den;
	int gcf = GCF(num, den);
	num /= gcf;
	den /= gcf;
	system("CLS");
	printf("your fraction is %i / %i\n", num, den);
}
