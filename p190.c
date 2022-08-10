//190

#include<stdio.h>
int main(){

typedef struct bio{

char name[100];
int age;
float sal;
}bio;

bio b;


scanf("%s %d %f",b.name,&b.age,&b.sal);

printf("%s %d %f",b.name,b.age,b.sal);
}