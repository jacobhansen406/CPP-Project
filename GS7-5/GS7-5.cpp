//jacob hansen

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <windows.h>
#include <math.h>
using namespace std;


struct Point
{
    float x, y;
};


float slopes(Point p1, Point p2)
{
    float slope;
    float changex;
    float changey;

    changey = p2.y - p1.y;
    changex = p2.x - p1.x;
    slope = changey / changex;

    return slope;
}

int main()
{
    Point p1, p2;

    printf("This program will calculate the slope of two points on a graph\n");

    printf("\nPlease input x-coordinate of Point 1\n");
    printf(">");
    scanf_s("%f", &p1.x);
    fseek(stdin, 0, SEEK_END);

    printf("\nPlease input y-coordinate of Point 1\n");
    printf(">");
    scanf_s("%f", &p1.y);
    fseek(stdin, 0, SEEK_END);

    do
    {
        printf("\nPlease input x-coordinate of Point 2\n");
        printf(">");
        scanf_s("%f", &p2.x);
        fseek(stdin, 0, SEEK_END);

        if (p2.x == p1.x)
        {
            printf("Equal x-coordinates create infinite slopes. Try again.\n");
        }
    } while (p2.x == p1.x);

    do
    {
        printf("\nPlease input y-coordinate of Point 2\n");
        printf(">");
        scanf_s("%f", &p2.y);
        fseek(stdin, 0, SEEK_END);

        if (p2.y == p1.y)
        {
            printf("Equal y-coordinates create a slope of 0, and that is boring. Try again.\n");
        }
    } while (p2.y == p1.y);

    printf("\nYour point values:\n\tPoint 1\n\tx: %f\n\ty: %f\n\tPoint 2\n\tx: %f\n\ty: %f\n", p1.x, p1.y, p2.x, p2.y);

    float s = slopes(p1, p2);
    printf("\nSlope: %.2f\n", s);

    _getch();
    return 0;
}
