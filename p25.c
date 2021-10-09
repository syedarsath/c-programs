/*
Program NO:25
Date:27/09/2021
Aim:Read a year and find the given year is leap year or not
*/
#include<stdio.h>
int main(){
int year;

scanf("%d",&year);

 if(year %4==0){
  
  printf("%d is a leap year",year);
  
 }else{
 
  printf("%d is not a leap year",year);
  
  }
 }