/*
Prog:127
*/
#include<stdio.h>
int main(){
int i,p,n,z;

p=0;
n=0;
z=0;

for(scanf("%d",&i);i!=-1000;scanf("%d",&i)){

if(i>0){

p=p+1;

}

else if(i<0){

n=n+1;

}else{

z=z+1;

}
}
printf("p=%d,n=%d,z=%d",p,n,z);
}
