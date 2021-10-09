/*
Program no:23
Date:03/10/2021
Aim:Read an yesr and fid the given year is leap year or not by implict check
*/

#include<stdio.h>
int main(){
int year,x;

scanf("%d",&year);

x=year%4;

if(x){

printf("%d is not leap year",year);


}else{

printf("%d is leap year",year);

}
}