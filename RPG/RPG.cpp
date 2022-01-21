// jacob hansen

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <stdio.h>
#include <conio.h>

using namespace std;

struct Has {
    string j1;
    char j2;
    char dog;
    char j4;
    char j5;
};

void doo(int dooo)

{
    cout << "what is your name?\n";
    Has has;
    cin >> has.j1;
    fseek(stdin, 0, SEEK_END);
    cout << "Hi" << has.j1 << "Welcome to the puzzler!\n";
    cout << "welcome to the first room. find a way to get out!\n";
    cout << "what do you want? axe or a pice of wood?\n";
    cin >> has.j2;
    cout << "you take it and you through it at the floor and the floor busts open and you fall through.\n";
    cout << "you land in another floor with a dog? what would you like to name the dog?\n";
    cin >> has.dog;
    system("CLS");
    cout << "Thats a great name.\n";
    cout << "your new dog sniffs a flore board that seems to wet?\n";
    cout << "the floor starts to rise and the condensation builds up so much you through yourself against the wall and you\n";
    cout << "break through. you are entered into another room, and there is chocolate you have to eat through.\n";
    cout << "you deside to eat through and into another room\n";
    cout << "once you get through you are aproached with a giant squid lookin thing?\n";
    cout << "It starts shooting ink at you! what way do you dodge? left 1 or 2 right\n";

    int has.j4;

    cin >> has.j4;
    system("CLS");
    switch (has.j4)
    {
    case 1:
        cout << "you dodged it!\n";
        break;

    case 2:
        cout << "You dodged right into it.\n";
        return 0;
    }
    cout << "Your dog Bites it on one of the tenticles and it just poofs into nothingness.\n";
    cout << "a door pops open in \n";
    cout << "you exit and you find yourself in a room with multiple doors.\n";
    cout << "the dog some how sniffs one door and when you open it you find youself in a room of bacon?\n";
    cout << "Bacon Yum. you sit down on a pile of bacon and start munching then all of a sudden the floor starts to shake.\n";
    cout << "The bacon starts Moving!!\n";
    cout << "It hops up and down and all 3 of you fall through A hole in the floor\n";
    cout << "you emerge In another room?\n";
    cout << "The giant piece of bacon takes a swing. Do you dodge left or right? 1 or 2\n";
    cin >> has.j5;
    system("CLS");
    switch (has.j5)
    {
    case 1:
        cout << "You dodge left and get your face caved into a wall by a giant piece of bacon.\n";
        return 0;

    case 2:
        cout << "You dodge right and smack him right in the face\n";
        break;
    }
    cout << "The giant piece of bacon falls over and when it does you fall through not only the floor your standing on\n";
    cout << "But 2 other floors with it! like a chain reaction.\n";


    cout << "you take a really hard hit when you land.\n";
    cout << "Once you land you see three items, a picket knife a candy cane and a strip of bacon that fell with you.\n";
    int doo;
    cin >> doo;
    cout << "Great choice! you pick it up and through it at a wall and it slices a little hole in it. you peek through and you\n";
    cout << "see a giant tellatubby!!\n";
    cout << "it runs through the wall!\n";
    cout << "the giant telletubby is taking swing do you dodge left or right?\n";
    int doo2;
    cin >> doo2;
    system("CLS");
    switch (doo)
    {
    case 1:
        cout << "you dodge left and run as fast as you can into the next room and the telletubby chases after you!\n";
        break;

    case 2:
        cout << "you dodge right into its massive colorfull body.\n";
    }
    cout << "you dodge right out of the way and the telletubby smashes through another wall! It falls over after\n";
    cout << "it tumbles and rolls into another wall and breaks it too. man it seems like there are alot of walls being broken.\n";
    cout << "when it does you and your dog climb through\n";
    cout << "when you emerge you are faced with another room. but this time it has a coffee machien and couch\n";
    cout << "and once youv stayed there for a door openes\n";
    cout << "you go into another room and there is just a white room. nothing special too it.\n";
    cout << "then all of a sudden the door closes behind of you and parts of the wall start to like come in\n";
    cout << "you star to climb ontop of them and parkour your way to the top of the room and you notice that there is a button on\n";
    cout << "the top of the door\n";
    cout << "you push it and the other door opens. but its not the same room. its reversed?\n";
    cout << "you enter the other room and there is someone running at you with a knife\n";
    cout << "do you dodge left or right?\n";
    int dsa;
    switch (dsa)
    {
    case 1:
        cout << "you dodge!\n";
        break;

    case 2:
        cout << "you dodge right into the man knife\n";
        return 0;
    }

    cout << "you spin quickly and choke him to death.\n";
    cout << "after that you grab the knife and carve the wall untill you emerge into another room.\n";
    cout << "and when you get there there is a living airpod pro case blinks at me and I start running.\n";
    cout << "you dodge right out of the way and the case tumbles through 4 walls!\n";

}

using namespace std;

int main()
{

    int dooo = 1;
    bool dooooooo = true;
    while (dooooooo)
    {
        doo(dooo);

        cout << "Would you like to play again? type 1 for yes and n for no\n";
        int doooooo;
        cin >> doooooo;

        if (doooooo != 1)
        {
            dooooooo = false;
        }
    }
    cout << "thanks for playing1\n";
    return 0;
}