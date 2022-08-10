//197
#include<stdio.h>
int main(){
typedef struct bio{
char name[100];
int age;
float sal;
}BIO;

BIO b;
FILE *fp;

fp=fopen("bio.txt","r");
if(fp==NULL){

printf("Error");
return 0;
}
while(feof(fp)==0){
fscanf(fp,"%s %d %f",b.name,&b.age,&b.sal);
printf("%s %d %f",b.name,b.age,b.sal);
}
fclose(fp);
}
