/*
prog:114
*/

#include<stdio.h>
int main(){
int i,j,k,flag;
char ch[100],b[100];

i=0;
scanf("%c",&ch[i]);

while(ch[i]!='$'){

i++;
scanf("%c",&ch[i]);

}

ch[i]='\0';

printf("pattern you wanna search:");

i=0;
scanf("%c",&b[i]);

while(b[i]!='$'){

i++;
scanf("%c",&b[i]);

}


b[i]='\0';
i=0;

while(ch[i]!='\0'){

k=i;
j=0;

 while(ch[k]==b[j] && b[j]!='\0'){
 
 k++;
 j++;
 
 }

if(b[j]=='\0'){

flag=1;
i=k;

}else{

i++;

}
}

if(flag==1){

printf("The pattern is exist");

}else{

printf("The patter does'nt exist");

}
}