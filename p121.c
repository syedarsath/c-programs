/*
Prog:121
*/

#include<stdio.h>
int main(){
int i;

i=1000;

while(i<=2000){

if(i%4==0){

printf("%d is leap year\n",i);

}else{

printf("%d is not leap year\n",i);

}
i++;
}
}