#include <stdio.h>
void printTable(int a);  // function declaration or prototype


void main(){
while(1)  {
        int a;
printf("Enter a number\n");
scanf("%d",&a);

printTable(a);
        } 
}


// Function definition
void printTable(int a){
        for(int i = 1; i<=10; i++){
                
         printf("%d X %d = %d \n",a,i,i*a);
        }
}
