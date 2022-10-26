#include<stdio.h>
int main(argc,argv)
int argc;
char *argv[];
{
union biodata
{
struct bio
{
char name[100];
int age;
float sal;
}a;
char b[sizeof(struct bio)];
};
union biodata m;

FILE *fp;

fp=fopen(argv[1],"w");

if(argc<2){
printf("Wrong Usage");
return 0;
}

if(fp==NULL){

printf("Error");
return 0;
}
scanf("%s %d %f",m.a.name,&m.a.age,m.a.sal);
for(int i=0;i<sizeof(struct bio);i++){
putc(m.b[i],fp);
}
fclose(fp);
}