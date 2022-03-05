/*
Prog:178
*/
#include<stdio.h>
int main(){
int i,j,k,flag;
char ch[100],b[100];

printf("Pattern 1:\n");
for(i=0;(ch[i]=getchar())!='$';i++);

ch[i]='\0';

printf("Pattern 2:\n");
for(i=0;(b[i]=getchar())!='$';i++);
printf("_____________________________________\n");
b[i]='\0';

for(i=0;ch[i]!='\0';i++){

for(j=0,k=i;ch[k]==b[j] && b[j]!='\0';j++,k++);


if(b[j]=='\0'){
flag=1;
break;
//i++;
}else{
flag=0;
//i=k;
}
}

if(flag==1){
printf("Pattern Exists\n");
}else{
printf("Pattern Does'nt Exists\n");
}
}
