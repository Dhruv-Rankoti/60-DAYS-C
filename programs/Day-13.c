// Write a Program to calculate area of circle, triangle, square, rectangle or parallelogram based on user's choice.

#include<stdio.h>
#include<math.h>

int main(){
    int choice;
    float r,b,h,area;
    float pi = 3.14;
    printf("Enter 1 for circle\n\t2 for triangle\n\t3 for square\n\t4 for rectangle\n\t5 for parallelogram : ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            printf("Enter the radius of a circle : ");
            scanf("%f", &r);
            area =  pi * r * r;
            printf("Area of circle : %.2f", area);
            break;
        case 2:
            printf("Enter the base and height of a triangle seperated by a space : ");
            scanf("%f %f", &b, &h);
            area = 0.5 * b * h;
            printf("Area of triangle : %.2f", area);
            break;
        case 3:
            printf("Enter the side of a square : ");
            scanf("%f", &r);
            area = r * r;
            printf("Area of square : %.2f", area);
            break;
        case 4:
            printf("Enter the length and breadth of a rectangle seperated by a space : ");
            scanf("%f %f", &h, &b);
            area = h * b;
            printf("Area of rectangle : %.2f", area);
            break;
        case 5:
            printf("Enter the base and height of a parallelogram seperated by a space : ");
            scanf("%f %f", &b, &h);
            area = b * h;
            printf("Area of parallelogram : %.2f", area);
            break;
        default:
            printf("Wrong input");
            break;
    } 
    return 0;
}

// DAY-14 Problem
// Write a Program to design a simple calculator.