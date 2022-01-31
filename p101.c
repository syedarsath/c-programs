/*
Prog:101
*/

#include<stdio.h>
int main(){
int i,j,l,m,n;
char ch[100],b[100];

i=0;
scanf("%c",&ch[i]);

while(ch[i]!='$'){

i++;
scanf("%c",&ch[i]);

}

ch[i]='\0';
i=0;

while(ch[i]!='\0'){

l=i+1;
i++;

}
printf("Print last n characters,n=");
scanf("%d",&n);


j=0;
i=l-n;

while(ch[i]!='\0'){

b[j]=ch[i];
i++;
j++;
}

b[j]='\0';
j=0;

while(b[j]!='\0'){

printf("%c",b[j]);
j++;
}
}