/*
Read and display ten number(using arayy)
*/

#include<stdio.h>
int main(){
int i,a[10];

i=0;

while(i<10){

scanf("%d",&a[i]);

i=i+1;
}
i=0;

while(i<10){

printf("%d",a[i]);

i=i+1;

}
}