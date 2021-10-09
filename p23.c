/*
Program no:23
Date:27/09/2021
Aim:Read three number and find the smallest of three number
*/
#include<stdio.h>
int main(){
int firstNumber,secondNumber,thirdNumber;

scanf("%d",&firstNumber);
scanf("%d",&secondNumber);
scanf("%d",&thirdNumber);

if(firstNumber<secondNumber){
if(firstNumber<thirdNumber){
printf("%d is smallest",firstNumber);
}else{
printf("%d is smallest",thirdNumber);

}}else if(secondNumber<thirdNumber){
printf("%d is smallest",secondNumber);

}else{
printf("%d is smallest",thirdNumber);
}
}


