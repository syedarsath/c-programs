/*
count the num of upp,low,single,special char until '$' is given
*/

#include<stdio.h>
int main(){
int cu,cl,cs,csp;
char ch;

scanf("%c",&ch);

cu=0;
cl=0;
cs=0;
csp=0;

while(ch!='$'){

if(ch>=65 && ch<=90){

cu=cu+1;

}else if(ch>=97 && ch<=122){

cl=cl+1;


}else if(ch>=48 && ch<=57){

cs=cs+1;

}else{

csp=csp+1;

}
scanf("%c",&ch);

}
printf("cu=%d""cl=%d""cs=%d""csp=%d",cu,cl,cs,csp);
}