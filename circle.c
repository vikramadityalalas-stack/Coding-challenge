#include<stdio.h>
int main(){
    float pi = 3.14;
    float r;
    printf("enter the value of radius");
    scanf("%f" , &r);
    float area = pi*r*r;
    printf("The value of the area is %f\n", area);
    return 0;
}