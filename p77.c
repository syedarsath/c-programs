/*
Prog 77
*/

#include<stdio.h>
int main(){
int i,big,sml,bigPos,secondBig,smlPos,secondSml,temp,a[10];

i=0;
while(i<10){

scanf("%d",&a[i]);
i=i+1;
}

i=0;

big=a[0];
while(i<10){

if(big<a[i]){

big=a[i];
i=i+1;

}else{

i++;

}
}

i=0;
sml=a[0];

while(i<10){

if(sml>a[i]){

sml=a[i];
i=i+1;

}else{

i=i+1;

}
}

i=0;
secondBig=a[0];
bigPos=0;

while(i<10){

if(secondBig<a[i] && a[i]!=big){

secondBig=a[i];
bigPos=i;
i=i+1;


}else{

i++;

}
}

i=0;
secondSml=big;
smlPos=0;

while(i<10){

if(secondSml>a[i] && a[i]!=sml){

secondSml=a[i];
smlPos=i;
i=i+1;


}else{

i=i+1;

}
}

temp=a[bigPos];
a[bigPos]=a[smlPos];
a[smlPos]=temp;
i=0;

while(i<10){

printf("%d\n",a[i]);
i=i+1;
}
}