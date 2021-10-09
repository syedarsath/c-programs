/*
Program no:38
Date:09/10/2021
Aim:reac three numbers and find the biggest of three numbers using nested ternary operator
*/

#include<stdio.h>
int main(){
int firstNumber,secondNumber,thirdNumber,big;

scanf("%d",&firstNumber);
scanf("%d",&secondNumber);
scanf("%d",&thirdNumber);

big=(firstNumber>secondNumber)?(firstNumber>thirdNumber)?firstNumber:thirdNumber:(secondNumber>thirdNumber)?secondNumber:thirdNumber;

printf("%d is big",big);

}

