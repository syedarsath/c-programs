//p188

#include<stdio.h>
int main(){


struct bio{

char name[100];
int age;
float sal;
};


struct ads{

char srt[100];
char city[100];
int pincode;
struct bio b;
};

struct ads a;

scanf("%s %d %f",a.b.name,&a.b.age,&a.b.sal);
scanf("%s %s %d",a.srt,a.city,&a.pincode);


printf("Name:%s\nAge:%d\nSalary:%f\nStreet:%s\nCity:%s\nPincode:%d",a.b.name,a.b.age,a.b.sal,a.srt,a.city,a.pincode);
}