#include<stdio.h>
 float d( float n);
float c( float n);
 float a( float n);
int main(){

float n;
printf("Enter the value of n=");
scanf("%f",&n);

/*float d( n);
float c( n);
float a( n);*/

float s=d(n);
float p=c(n);
float v=a(n);
printf("the diameter is %0.2f\nthe curcenceis%0.2f\nthe area is %0.2f\n ",s,p,v);








}
float d(float n){

return 2*n;

}
float c(float n){
return 2*3.1416*n;
}
float a(float n){

return 3.1416*n*n;

}
