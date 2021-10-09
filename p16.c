/*
Program no:16
Date:27/09/2021
Aim:Read a number and find the given number is positive or not
*/
#include<stdio.h>
int main(){
int number;

scanf("%d",&number);

if(number>=0){
printf("%d is positive",number);

}else{
printf("%d is not positive",number);
}
}