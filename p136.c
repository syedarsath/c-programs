/*
Prrog:136
*/


#include<stdio.h>
int main(){
int i,big,a[100];

for(i=0;i<10;i++){

scanf("%d",&a[i]);

}

for(i=0,big=a[i];i<10;i++){

if(big<a[i]){

big=a[i];
i++;

}else{

i++;

}
}
printf("The biggest of ten numbers=%d",big);
}