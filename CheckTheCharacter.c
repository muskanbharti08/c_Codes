# include <stdio.h>
void main(){

char x = '*';

// A = 65  B = 66  C =67      Z =90
// a= 97 b =98 c = 99 d = 100     z= 122

if (x>='A' && x<='Z')
{
        printf("Upper case \n");
        
}
else if (x>='a' && x<='z')
{
        printf("Lower Case \n");
}
else{
        printf("Not an alphabet");
}









}