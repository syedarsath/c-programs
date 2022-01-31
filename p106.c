/*
Prpg:106
*/

#include<stdio.h>
int main(){
int i,j;
char ch[100],b[100],c[100];

i=0;
scanf("%c",&ch[i]);

while(ch[i]!='$'){

i++;
scanf("%c",&ch[i]);

}


ch[i]='\0';
i=0;

scanf("%c",&b[i]);

while(b[i]!='$'){

i++;
scanf("%c",&b[i]);

}
b[i]='\0';

i=0;
j=0;

while(ch[i]!='\0'){

c[j]=ch[i];
i++;
j++;
}

i=0;

while(b[i]!='\0'){

c[j]=b[i];
i++;
j++;
}

c[j]='\0';
j=0;

while(c[j]!='\0'){

printf("%c",c[j]);
j++;

}
}



