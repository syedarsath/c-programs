/*
Prog:123
*/

#include<stdio.h>
int main(){
int i,j;

printf("i=");
scanf("%d",&i);

printf("j=");
scanf("%d",&j);


printf("_____________________________\n");

while(i<=j){

if(i%2==0){

printf("%d is even\n",i);

}else{

printf("%d is odd\n",i);

}
i++;
}
printf("_____________________________\n");
}


