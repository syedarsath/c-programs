/*
Prog:63
Aim:Count num of pos,neg and zero umtil zero is given
*/

#include<stdio.h>
int main(){
int number,cp,cn,cz;

scanf("%d",&number);

cp=0;
cn=0;
cz=0;

while(number!=-1000){

if(number>0){

cp=cp+1;

}else if(number<0){

cn=cn+1;

}else{

cz=cz+1;
}
scanf("%d",&number);
}
printf("cp=%d\n""cn=%d\n""cz=%d\n",cp,cn,cz);
}