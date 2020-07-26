//Write a C program to find the area of a Triangle if its three sides are given also a flowchart
//formula: area= root[s(s-a)(s-b)(s-c)]
//program:-
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){

float area, s , a ,b ,c;
printf("Enter Triange sides \n");
printf("Enter A \n");
scanf("%f",&a);
printf("Enter B \n");
scanf("%f",&b);
printf("Enter C \n");
scanf("%f",&c);
s =(a+b+c)/2;
area = sqrt(s*(s-a)*(s-b)*(s-c));
printf("\nArea of Triangle is %f ",area);
}



