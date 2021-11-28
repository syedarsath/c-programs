/*
Read ten num and find pos of the given big num in the given array
*/

#include<stdio.h>
int main(){
int i,big,pos,a[10];


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
pos=i;
i++;

}
}
printf("%d",pos);
}