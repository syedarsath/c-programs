/*
Prog:111
*/

#include<stdio.h>
int main(){
int i,j,k,n,b[100];
char ch[100],c[100];

i=0;
scanf("%c",&ch[i]);

while(ch[i]!='$'){

i++;
scanf("%c",&ch[i]);

}
ch[i]='\0';
i=0;
j=0;
b[j]=0;
j++;

while(ch[i]!='\0'){

  if(ch[i]=='\n'){
  
  b[j]=i+1;
  i++;
  j++;
  
  }else{
  
  i++;
  
  }
 }
 
b[j]=-1;

printf("Which you wanna print,n="); 
scanf("%d",&n);
i=b[n-1];
k=0;

while(ch[i]!='\n'){

c[k]=ch[i];
i++;
k++;

}

c[k]='\0';
k=0;


printf("The %dnd line :",n);
while(c[k]!='\0'){

printf("%c",c[k]);
k++;

}
printf("\n");
}
  
  
  
  
