/*
Prog:142
*/
#include<stdio.h>
int main(){
int i,num,a[10],flag;

for(i=0;i<10;i++){

scanf("%d",&a[i]);

}

printf("______________________________\n");
printf("Search Number:");
scanf("%d",&num);
printf("______________________________\n");

flag=0;

for(i=0;i<10;i++){

if(num==a[i]){

flag=1;

}
}

if(flag==1){

printf("%d is exits in the array",num);

}else{

printf("%d is does'n exits in the array",num);

}
}