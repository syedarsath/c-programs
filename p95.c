/*
Prog:05
*/

#include<stdio.h>
int main(){
int i;
char ch[i];

i=0;
scanf("%c",&ch[i]);

while(ch[i]!='$'){

if(ch[i]>=65 && ch[i]<=90){
printf("Upper Case");
}

else if(ch[i]>=97 && ch[i]<=122){
printf("Lower Case");
}

else if(ch[i]>=48 && ch[i]<=57){
printf("Singe Digit");
}

else{
printf("Special Char");
}
i++;
scanf("%c",&ch[i]);
}
}

