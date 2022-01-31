/*
Prog:124
*/

#include<stdio.h>
int main(){
int i,j;

for(scanf("%d",&i),scanf("%d",&j);i<=j;i++){

if(i%4==0){

printf("%d is leap year\n",i);

}else{

printf("%d is not leap year\n",i);

}
}
}

