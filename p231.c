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
float pf,hra;
FILE *fp;

fp=fopen(argv[1],"r");

if(argc<2){
printf("Wrong Usage");
return 0;
}

if(fp==NULL){

printf("Error");
return 0;
}

while(feof(fp)==0){

for(int i=0;i<sizeof(struct bio);i++){
m.b[i]=getc(fp);
}
printf("Name:%s\nAge:%d\nSalary:%f\n",m.a.name,m.a.age,m.a.sal);
pf=m.a.sal*0.12;
hra=m.a.sal*0.4;
printf("PF:%f\nHRA:%f\n",pf,hra);
}

fclose(fp);

}
