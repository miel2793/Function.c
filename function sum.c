#include<stdio.h>
int sum(int a, int b);
int main(){
int a,b;
printf("Enter the value of a=");
scanf("%d",&a);
printf("Enter the value of b=");
scanf("%d",&b);

int s=sum(a,b);
printf("The value of a+b=%d\n",s);





}
int sum(int a,int b){
return a+b;
}

