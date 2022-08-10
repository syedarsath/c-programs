//191

#include<stdio.h>
int main(){


typedef struct bios{

char name[100];
int age;
float sal;
}bio;

typedef struct adrs{

char srt[100];
char city[100];
int pincode;
bio b;
}ads;

ads a;

scanf("%s %s %d",a.srt,a.city,&a.pincode);

scanf("%s %d %f",a.b.name,&a.b.age,&a.b.sal);

printf("Str:%s\nCity:%s\nPincode:%d\nName:%s\nAge:%d\nSalary:%f\n",a.srt,a.city,a.pincode,a.b.name,a.b.age,a.b.sal);

}