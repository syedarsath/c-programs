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

fp=fopen("bio.txt","w");
if(fp==NULL){

printf("Error");
return;
}

scanf("%s %d %f",b.name,&b.age,&b.sal);
fprintf(fp,"%s %d %f",b.name,b.age,b.sal);

fclose(fp);
}