/*
Read ten number and find the biggest of numbers int given array
*/

#include<stdio.h>
int main(){
int i,a[10],big;


i=0;

while(i<10){

scanf("%d",&a[i]);
i++;
}

i=0;
big=a[0];

while(i<10){

if(big<a[i]){
big=a[i];
i++;

}else{
i++;
}
}
printf("%d",big);
}
