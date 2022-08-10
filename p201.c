//197
#include<stdio.h>
int main(){
char ch;

FILE *fp;

fp=fopen("bio.txt","w");
if(fp==NULL){

printf("Error");
return 0;
}
for(scanf("%c",&ch);ch!='$';scanf("%c",&ch)){
fprintf(fp,"%c",ch);

}
fclose(fp);
}
