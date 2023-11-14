#include<stdio.h>
void func1();
void func2();

// function -> library and user defined function
// Library Functions -> scanf and printf
//  user defined function -> jo user defined kr raha hai


void main(){
        char ch;
        printf("Enter b for Bihar and u for UP\n");
        scanf("%c",&ch);

        if(ch=='b'){
                func1();
        }
        else if(ch=='u'){
                func2();
        }
        else{
                printf("You are not from Bihar and Up");
        }
}

void func1(){
        printf("Namste\n");
}

void func2(){
        printf("Pranam");
}