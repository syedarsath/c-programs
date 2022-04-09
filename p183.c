//p183

#include<stdio.h>
int main(){
int i,j;
scanf("%d",&i);
scanf("%d",&j);

do{

if(i%2==0){

printf("%d is even\n",i);

}else{

printf("%d is odd\n",i);
}
i++;
}while(i<=j);
}