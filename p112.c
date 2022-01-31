/*
Prog:112
*/

#include<stdio.h>
int main(){
int i,j,k,n,m,l,b[100];
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

printf("How many lines you wanna print,n=");
scanf("%d",&n);
printf("From which line,m=");
scanf("%d",&m);
b[j]=i;
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
  
l=b[n+m-1];
i=b[m-1];
k=0;

while(i<l){

c[k]=ch[i];
k++;
i++;

}


if(m==1){

printf("%d lines from %dst is printed here:\n",n,m);


}else if(m==2){

printf("%d lines from %dnd is printed here:\n",n,m);


}else if(m==3){

printf("%d lines from %drd is printed here:\n",n,m);

}else{

printf("%d lines from %dth is printed herek:\n",n,m);

}

c[k]='\0';
k=0;


while(c[k]!='\0'){

printf("%c",c[k]);
k++;

}
}
