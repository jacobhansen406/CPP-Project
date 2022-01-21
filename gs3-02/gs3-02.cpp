#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
	string name;
	int score = 0;
	int input;
	int input2;
	int input3;

	printf("welcome to my Science Test.\n");
	printf("please input your name:\n");
	cin >> name;

	system("CLS");

	printf("-press any button to start the quiz-\n");
	_getch();
	system("CLS;");

	printf("What is the universe made of?\n");
	printf("1. stuff\n");
	printf("2. dogs\n");
	printf("3. Atoms\n");
	printf("4. me\n");
	cin >> input;
	if (input == 1)
	{
		score = score - 1;
	}
	else if (input == 2)
	{
		score = score - 1;
	}
	else if (input == 3)
	{
		score = score + 4;
	}
	else
	{
		score = score - 1;
	}
	system("CLS");

	printf("What makes us human\n");
	printf("1. money\n");
	printf("2. friends\n");
	printf("3. love\n");
	printf("4. monkey\n");
	cin >> input2;
	if (input2 == 1)
	{
		score = score - 1;
	}
	else if (input2 == 2)
	{
		score = score - 1;
	}
	else if (input2 == 3)
	{
		score = score - 1;
	}
	else if (input2 == 4)
	{
		score = score + 4;
	}
	system("CLS");

	printf("if you for some reason mix ammonia and bleach, what does you get\n");
	printf("1. mustard gas\n");
	printf("2. mustard\n");
	printf("3. mustard seeds\n");
	printf("4. ketchup\n");
	cin >> input3;
	if (input3 == 1)
	{
		score = score + 4;
	}
	else if (input3 == 2)
	{
		score = score - 1;
	}
	else if (input3 == 3)
	{
		score = score - 1;
	}
	else
	{
		score = score - 1;
	}
	system("CLS");

	if (score < 0)
	{
		printf("great job dummy you got %i points.\n", score);
		printf("try again next year %s.", name.c_str());// jacob hansen 
// date 1/12/22
// Science Quiz using if

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <string>
#include <stdio.h>
		using namespace std;

		int main()
		{
			string name;
			int score = 0;
			int input;
			int input2;
			int input3;

			printf("welcome to my Science Test.\n");
			printf("please input your name:\n");
			cin >> name;

			system("CLS");

			printf("-press any button to start the quiz-\n");
			_getch();
			system("CLS;");

			printf("What is the universe made of?\n");
			printf("1. stuff\n");
			printf("2. dogs\n");
			printf("3. Atoms\n");
			printf("4. me\n");
			cin >> input;
			if (input == 1)
			{
				score = score - 1;
			}
			else if (input == 2)
			{
				score = score - 1;
			}
			else if (input == 3)
			{
				score = score + 4;
			}
			else
			{
				score = score - 1;
			}
			system("CLS");

			printf("What makes us human\n");
			printf("1. money\n");
			printf("2. friends\n");
			printf("3. love\n");
			printf("4. monkey\n");
			cin >> input2;
			if (input2 == 1)
			{
				score = score - 1;
			}
			else if (input2 == 2)
			{
				score = score - 1;
			}
			else if (input2 == 3)
			{
				score = score - 1;
			}
			else if (input2 == 4)
			{
				score = score + 4;
			}
			system("CLS");

			printf("if you for some reason mix ammonia and bleach, what does you get\n");
			printf("1. mustard gas\n");
			printf("2. mustard\n");
			printf("3. mustard seeds\n");
			printf("4. ketchup\n");
			cin >> input3;
			if (input3 == 1)
			{
				score = score + 4;
			}
			else if (input3 == 2)
			{
				score = score - 1;
			}
			else if (input3 == 3)
			{
				score = score - 1;
			}
			else
			{
				score = score - 1;
			}
			system("CLS");

			if (score < 0)
			{
				printf("great job dummy you got %i points.\n", score);
				printf("try again next year %s.", name.c_str());
			}
			else if (score > 0)
			{
				printf("you got %i points.\n", score);
				printf("good job %s", name.c_str());
			}
			else
			{
				printf("how\n");
			}
			return 0;
		}
	}
	else if (score > 0)
	{
		printf("you got %i points.\n", score);
		printf("good job %s", name.c_str());
	}
	else
	{
		printf("how\n");
	}
	return 0;
}
