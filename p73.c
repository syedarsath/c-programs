/*
Read 10 num and find the sml of ten num in given array
*/

#include<stdio.h>
int main(){
int i,sml,a[10];

i=0;

while(i<10){

scanf("%d",&a[i]);
i++;
}

i=0;
sml=a[0];

while(i<10){

if(sml>a[i]){

sml=a[i];
i++;


}else{

i++;
}
}
printf("%d",sml);
}
