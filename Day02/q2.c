/*
 * Name : Manasvi
 * Roll : 590041297
 * Day : 02 Question: 2
 * Date : 03-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to calculate the area and circumference
 * of a circle given its radius.
 */

#include <stdio.h>

int main()
{
    float radius, area, circumference;

    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    printf("Area=%.2f, Circumference=%.2f\n",
           area, circumference);

    return 0;
}
