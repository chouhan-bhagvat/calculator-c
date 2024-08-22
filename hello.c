#include<stdio.h>

int main () {



    char operator;            // Variable to store the operator
    double first, second;    // Variables to store the two numbers

    // Prompt the user to enter the operator
    printf("Enter the operator (+, -, *, / ) : ");
    scanf("%c", &operator);
    printf("enter the two numbers one by one : ");
    scanf("%lf %lf", &first,&second);


    switch (operator)
    {
    case '+' :
        // Perform addition and display result
        printf("%lf + %lf = %lf", first,second,(first+second));
        break;
        
    case '-' :
        // Perform subtraction and display result
        printf("%lf - %lf = %lf", first,second,(first-second));
        break;  

    case '*' :
        // Perform multiplication and display result
        printf("%lf * %lf = %lf", first,second,(first*second));
        break;

    case '/' :
        if(second!=0.0)

        // Perform division if second number is not zero
          printf("%lf / %lf = %lf", first,second,(first/second));
        else
          printf("Divide by zero situation.");

    default:
        // Handle invalid operator input
        printf("%c is not valid operator",operator);
        break;
    }
   
    return 0; 

}   
    
