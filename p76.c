 /*
prog 76
*/

#include<stdio.h>
int main(){
int i,big,sml,secondBig,a[10];

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

i=i+1;
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
secondBig=sml;

while(i<10){


if(secondBig<a[i] && a[i]!=big){

secondBig=a[i];
i=i+1;

}else{

i=i+1;

}
}
printf("%d",secondBig);
}
