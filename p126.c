/*
Prog:126
*/
#include<stdio.h>
int main(){
int i;

for(scanf("%d",&i);i!=-1000;scanf("%d",&i)){

if(i>0){

printf("%d is Pos\n",i);

}else if(i<0){

printf("%d is Neg\n",i);

}else{

printf("%d is Zero",i);

}
}
}