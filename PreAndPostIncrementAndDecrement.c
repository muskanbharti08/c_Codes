#include <stdio.h>
int main(){

// Post Increment
int i =0;
printf("Post increment\n");
printf("%d ",i++);  // print i value and then increment
printf("%d \n",i);  //  print i 



// Pre Increment
printf("Pre Increment\n");
int j =0;
printf("%d\n",++j); // increments the value of i first then print value of i




// Post Decrement
printf("Post Decrement \n");
 int k = 4;
 printf("%d ",k--);
 printf("%d \n",k);



 // Pre Increment
 printf("Pre decrement \n");
 int l = 8;
 printf("%d ",--l);
 
        return 0;
}