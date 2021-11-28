/*
Read 10 num and interchange the big and sml in given array
*/

#include<stdio.h>
int main(){
int i,temp,big,sml,bigPos,smlPos,a[10];

i=0;

while(i<10){

scanf("%d",&a[i]);
i++;
}

i=0;
big=a[i];
bigPos=0;

while(i<10){

if(big<a[i]){
big=a[i];
bigPos=i;
i++;

}else{
i++;
}
}

i=0;
sml=a[i];
smlPos=0;

while(i<10){

if(sml>a[i]){
sml=a[i];
smlPos=i;
i++;

}else{
i++;
}
}

temp=a[bigPos];
a[bigPos]=a[smlPos];
a[smlPos]=temp;

i=0;

while(i<10){

printf("%d\n",a[i]);
i++;
}
}