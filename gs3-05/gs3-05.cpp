#include <iostream>
#include <stdlib.h> 
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <windows.h>
using namespace std;

int main()
{
	string art;


	printf("welcome to the art museum. we have like 3 pictures for you to look at\n");
	printf("which would you like to examine\n");
	printf("deer\ncat\ndog\n");
	cin >> art;
	if (art == "deer")
	{
		printf("\|/    \|/\n");
		printf("  \    /\n");
		printf("   \_/  ___   ___   \n");
		printf(   "o o-'   '''   '  \n");
		printf("    O -.         |\  \n");
		printf("       | |'''| |      \n");
		printf("        ||   | |       \n");
		printf("        ||    ||       \n");
		printf("        "     "        \n");
	}
	else if (art == "cat")
	{

		printf("      |\      _,,,---,,_         \n");
		printf("ZZZzz /,`.-'`'    -.  ;-;;,_       \n");
		printf("     |,4-  ) )-,_. ,\ (  `'-'\n");
		printf("    '---''(_/--'  `-'\_)\n");
	}
	else if (art == "dog")
	{

		printf("             .--~~,__      \n");
		printf(":-....,-------`~~'._.'    \n");
		printf(" `-,,,  ,_      ;'~U'    \n");
		printf("  _,-' ,'`-__; '--.      \n");
		printf(" (_/'~~      ''''(;     \n");
	}
	_getch();

	return 0;
}