/*
Prog:65
Aim:Find the mean of pos,neg numbers until -1000 if given
*/

#include<stdio.h>
int main(){
int number,sp,sn,np,nn;
float mp,mn;

scanf("%d",&number);
sp=0;
sn=0;
np=0;
nn=0;

while(number!=-1000){

if(number>0){

sp=sp+number;
np=np+1;

}else{

sn=sn+number;
nn=nn+1;
}
scanf("%d",&number);
}

mp=sp/np;
mn=sn/nn;

printf("mean of pos=%f\n",mp);
printf("mean of neg=%f\n",mn);
}