#include<stdio.h>
int main(){
char ch;

FILE *fp;

fp=fopen("bio.txt","w");
if(fp==NULL){

printf("Error");
return 0;
}
while((ch=getchar())!='$'){
putc(ch,fp);
}
fclose(fp);
}