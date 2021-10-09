/*
Program no:22
Date:27/09/2021
Aim:Read three numbers and find the largest of three numbers
*/
#include<stdio.h>
int main(){
int firstNumber,secondNumber,thirdNumber;

scanf("%d",&firstNumber);
scanf("%d",&secondNumber);
scanf("%d",&thirdNumber);

if(firstNumber>secondNumber){
if(thirdNumber>thirdNumber){
printf("%d firstNumber is biggest",firstNumber);

}else{
printf("%d thirdNumber is biggest",thirdNumber);

}}else if(secondNumber>thirdNumber){
printf("%d secondNumber is biggest",secondNumber);

}else{
printf("%d thirdNumber is biggest",thirdNumber);
}
}