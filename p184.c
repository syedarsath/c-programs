//p184

#include<stdio.h>
int main(){
int j,i;
scanf("%d",&i);
scanf("%d",&j);

do{

if(i%4==0){
printf("%d is leap year\n",i);

}else{

printf("%d is not leap year\n",i);

}
i++;
}while(i<=j);
}
