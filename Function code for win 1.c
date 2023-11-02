#include<stdio.h>
int Cube(int n);
int main(){
    int n;

printf("Enter the number form= ");
scanf("%d",&n);
int s=cube(n);
printf("The cube of %d is %d",n,s);



}
int cube(int n){
return n*n*n;


}
