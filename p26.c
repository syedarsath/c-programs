/*
Program no:26
Date:27/09/2021
Aim:Read a number and find the given number is single digit or not
*/
#include<stdio.h>
int main(){
int number;

 scanf("%d",&number);
 
 if(number>=0 && number<=9){
 
  printf("%d is single digit",number);
  
 }else{
 
  printf("%d is not a single digit",number); 
 }
}  
