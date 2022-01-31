/*
Prog:128
*/

#include<stdio.h>
int main(){
int i,sp,sn;


sp=0;
sn=0;

for(scanf("%d",&i);i!=-1000;scanf("%d",&i)){


if(i>0){

sp=sp+i;

}else{

sn=sn+i;

}
}

printf("sp=%d \n sn=%d",sp,sn);
}


