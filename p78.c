/*
Prog 78
*/

#include<stdio.h>
int main(){
int i,flag,num,a[10];

i=0;

while(i<10){

scanf("%d",&a[i]);
i++;

}

i=0;
flag=0;

scanf("%d",&num);

while(i<10){

if(num==a[i]){

flag=1;
i++;

}else{

i++;

}
}

if(flag==1){

printf("%d is in the given array",num);

}else{

printf("%d is not in the given array",num);

}
}