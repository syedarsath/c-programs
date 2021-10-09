/*
Program no:34
Date:03/10/2021
Aim:read an year and find the given year is leap year or not
*/
#include<stdio.h>
int main(){
int year,x;

scanf("%d",&year);

x=year%4;

if(!x){

printf("%d is leap year",year);


}else{

printf("%d is not leap year",year);

}
}
