/*
Prog:131
*/

#include<stdio.h>
int main(){
int i;
char ch[100];

for(i=0,scanf("%c",&ch[i]);ch[i]!='$';scanf("%c",&ch[i])){

if(ch[i]>=65 && ch[i]<=90){

printf("%c is uppercase\n",ch[i]);

}else if(ch[i]>=97 && ch[i]<=122){

printf("%c is lowercase\n",ch[i]);


}else if(ch[i]>=48 && ch[i]<=57){

printf("%c is single digit\n",ch[i]);

}else if(ch[i]!='\n'){

printf("%c is special char\n",ch[i]);

}
}
}