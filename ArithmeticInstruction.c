# include <stdio.h>
# include <math.h>
void main(){

// precedence Rule
//   /,*,% --> Having same precedence
//   +,- 
//    =

// associativity rule  -> Left to Right


// Question 1.
int x = (4+9*10);
printf("%d\n",x);



// Q2.
 int y = 4*3/6*2;
 printf("%d\n",y);


int a1= 5*(2/2)*3, b1 = 5+2*2-2*3, c1=5*2/2*3, d1 = 5*2/2*3;
printf("\n%d,%d,%d,%d\n",a1,b1,c1,d1);





int p =5,q=6;
int r = p+q;
// int p+q =r;    invalid


int w =7,x1 =5,t=w+x1;
printf("%d\n",t);

int power = pow(2,3);
printf("%d",power);

}