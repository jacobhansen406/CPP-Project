// jacob hansen


#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <windows.h>
#include <math.h>
using namespace std;

//distance = sqrt ((y2-y1)^2 + (x2 - x1)^2)

struct Point
{
    float x, y;
};


float distance(Point p1, Point p2)
{
    float dist;
    float changex;
    float changey;
    float changex_;
    float changey_;
    float changexy;

    changey = p2.y - p1.y;
    changex = p2.x - p1.x;
    changex_ = changex * changex;
    changey_ = changey * changey;
    changexy = changey_ + changex_;
    dist = sqrt(changexy);

    return dist;
}

int main()
{
    Point p1, p2;

    printf("This program will calculate the distance between two points on a graph\n");

    printf("\nPlease input x-coordinate of Point 1\n");
    printf(">");
    scanf_s("%f", &p1.x);
    fseek(stdin, 0, SEEK_END);

    printf("\nPlease input y-coordinate of Point 1\n");
    printf(">");
    scanf_s("%f", &p1.y);
    fseek(stdin, 0, SEEK_END);

    printf("\nPlease input x-coordinate of Point 2\n");
    printf(">");
    scanf_s("%f", &p2.x);
    fseek(stdin, 0, SEEK_END);

    printf("\nPlease input y-coordinate of Point 2\n");
    printf(">");
    scanf_s("%f", &p2.y);
    fseek(stdin, 0, SEEK_END);

    printf("\nYour point values:\n\tPoint 1\n\tx: %f\n\ty: %f\n\tPoint 2\n\tx: %f\n\ty: %f\n", p1.x, p1.y, p2.x, p2.y);

    float d = distance(p1, p2);
    printf("\nDistance: %.3f\n", d);

    _getch();
    return 0;
}

