/*
prog:60
Aim:Find the given year is leap year or not betweeen two limit
*/

#include<stdio.h>
int main(){
int year,i;

scanf("%d",&year);

i=1000;

while(i<=year){

if(i%4==0){

printf("%d is an leap year\n",i);


}else{

printf("%d is not an leap year\n",i);

}
i=i+1;
}
}