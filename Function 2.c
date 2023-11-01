

#include<stdio.h>
void Assalamualykum();
void Hello();
int main(){
char ch;
printf("Enter b for bangladesh & i for india= ");
scanf("%c",&ch);
if(ch=='b'){
    Assalamualykum();
}
else if(ch=='i'){
    Hello();
}



}
void Assalamualykum(){

printf("Assalamualykum");

}
void Hello(){
printf("Hello");


}
