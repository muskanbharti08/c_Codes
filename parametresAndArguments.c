#include <stdio.h>
int sum(int a, int b);

int main(){

// parameters - > formal parameters
// Arguments -> Actual parameters

int a,b;
printf("Enter first number\n");
scanf("%d",&a);
printf("Enter second number\n");
scanf("%d",&b);
int c = sum(a,b);
printf("The sum of %d and %d is %d",a,b,c);
return 0;
}

int sum(int a, int b){
        int sum = a+b;
        return sum;
}