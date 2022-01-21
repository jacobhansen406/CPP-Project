//jacob hansen

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <windows.h>
using namespace std;

string wordreverser(string word)
{
    string word_reversed = "";

    for (int i = word.length() - 1; i >= 0; i--)
    {
        word_reversed += word[i];
    }

    return word_reversed;
}

int main()
{
    string word = "";
    string word_reversed = "";

    printf("Welcome to my word reverser game!\n");
    printf("Please input a word to be reversed\n>");
    cin >> word;
    fseek(stdin, 0, SEEK_END);

    word_reversed = wordreverser(word);
    printf("\n\nYour word: %s", word.c_str());
    printf("\nReversed word: %s", word_reversed.c_str());
    _getch();

    return 0;
}
