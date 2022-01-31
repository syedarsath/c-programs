/*
Prog:117
*/

#include<stdio.h>
int main(){
int i,j,k,l,m,flag;
char ch[100],b[100],c[100],d[100];

i=0;
scanf("%c",&ch[i]);

while(ch[i]!='$'){

i++;
scanf("%c",&ch[i]);

}
ch[i]='\0';
i=0;
printf("\n");
printf("Search the pattern:");

scanf("%c",&b[i]);

while(b[i]!='$'){

i++;
scanf("%c",&b[i]);

}
printf("\n");
b[i]='\0';
l=0;

printf("Enter the pattern you wanna replace:");

scanf("%c",&c[l]);

while(c[l]!='$'){

l++;
scanf("%c",&c[l]);

}
printf("\n");
c[l]='\0';
i=0;
m=0;


while(ch[i]!='\0'){

k=i;
j=0;

while(ch[k]==b[j] && b[j]!='\0'){

j++;
k++;

}

if(b[j]=='\0'){

i=k;
l=0;

while(c[l]!='\0'){

d[m]=c[l];
l++;
m++;
flag=0;

}
}else{

d[m]=ch[i];
i++;
m++;

}
}
printf("\n");

d[m]='\0';
m=0;
if(flag==0){

printf("___________________________________\n");
printf("\n");

printf("Pattern replaced successfully below:\n");

while(d[m]!='\0'){

printf("%c",d[m]);
m++;

}
printf("\n");

}else{

printf("Error:Patter Not Found!\n");
printf("\n");
}

}