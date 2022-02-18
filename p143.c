/*
Prog:142
*/

#include<stdio.h>
int main(){
int i,num,c,a[10];

for(i=0;i<10;i++){

scanf("%d",&a[i]);

}
printf("__________________\n");
printf("Search Number:");
scanf("%d",&num);
printf("__________________\n");

c=0;

for(i=0;i<10;i++){

if(num==a[i]){

c=c+1;

}
}

printf("The given number '%d' exits %d times",num,c);
}
