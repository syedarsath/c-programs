/*
Program no:39
Date:09/10/2021
Aim:read three numbers and find the smallest of three numbers using nested ternary operator
*/

#include<stdio.h>
int main(){
int firstNumber,secondNumber,thirdNumber,sml;

scanf("%d",&firstNumber);
scanf("%d",&secondNumber);
scanf("%d",&thirdNumber);

sml=(firstNumber<secondNumber)?(firstNumber<thirdNumber)?firstNumber:thirdNumber:(secondNumber<thirdNumber)?secondNumber:thirdNumber;

printf("%d is sml",sml);

}

