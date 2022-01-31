/*
Prog:88
*/

#include<stdio.h>
int main(){
int i,j,num,flag,a[3][3];

i=0;
while(i<3){

j=0;

while(j<3){
 
scanf("%d",&a[i][j]);
j++;
}
i++;
}

printf("Enter a number you wanna search in the given matrix:");
scanf("%d",&num);

flag=0;

i=0;

while(i<3){

j=0;

while(j<3){
 
if(num==a[i][j]){

j++;
flag=1;

}else{

j++;
}
}
i++;
}

if(flag==1){

printf("%d is exixts",num);

}else{

printf("%d if not exists",num);
}
}
