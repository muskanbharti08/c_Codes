#include <stdio.h>
void printHellow();  // function declaration or prototype
void func1();
int func2();


int main(){

        //  There are3 things in the function
        // 1.  function declaration  /  prototype
        // 2.  function definition
        // 3. function call

        printHellow();  // function call 
        func1();
     int c = func2();
     printf("%d\n",c);

        return 0;
}
 

//   Function Definition
void printHellow(){
        printf("Hellow \n");
}

void func1(){
        printf("I am function 1\n");
}

int func2(){
        int a =4;
        int b = 1;
        return a+b;
}


