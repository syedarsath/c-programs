/*
Prog:129
*/

#include<stdio.h>
int main(){
int i,cp,cn,sp,sn;
float mp,mn;

cp=0;
cn=0;
sp=0;
sn=0;

for(scanf("%d",&i);i!=-1000;scanf("%d",&i)){

if(i>0){

cp=cp+1;
sp=sp+i;

}else{

cn=cn+1;
sn=sn+i;

}
}

mp=sp/cp;
mn=sn/cn;

printf("mp=%f \n mn=%f",mp,mn);

}