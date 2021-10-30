/*
Prog no:57
Aim:Find the year is leap or not between 1000-3000
*/

#include<stdio.h>
int main(){
int year;

year=1000;

while(year<=3000){

if(year%4==0){

printf("%d is an leap year\n",year);


}else{

printf("%d is not an leap year\n",year);
}

year=year+1;
}
}
