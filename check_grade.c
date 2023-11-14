# include <stdio.h>
void main(){

int marks = 60;

if (marks<40)
{

printf("You are fail\n");

}
else if (marks>=40 && marks<60)
{
        printf("Grade C\n");
}

else if (marks>=60 && marks<80)
{
        printf("Grade B\n");
}

else if (marks>=80 && marks<=100 )
{
        printf("Grade A\n");
}

else{
        printf("Invalid Marks");
}




}