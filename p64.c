/*
prog:64
Aim:Find the sum of pos,neg num until -1000 is given
*/
#include<stdio.h>
int main(){
int number,sp,sn;

scanf("%d",&number);

sp=0;
sn=0;

while(number!=-1000){

if(number>0){

sp=sp+number;

}else{

sn=sn+number;

}
scanf("%d",&number);
}
printf("sum of pos=%d\n",sp);
printf("sum of neg=%d\n",sn);

}