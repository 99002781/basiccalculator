
#include<stdlib.h>
#include <stdio.h>
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
int factorial();
 
void main()
{
   char operator;
 
    printf("Simulation of a Simple Calculator\n");
    printf("\n");
    printf("Enter the operator  \n");
    scanf("%s", &operator);
    switch(operator)
    {
       
            case '+': addition();
                      break;
 
            case '-': subtraction();
                      break;
 
            case '*': multiplication();
                      break;
 
            case '/': division();
                      break;
 
            case '?': modulus();
                      break;
 
            case '!': factorial();
                      break;
 
            case '^': power();
                      break;
 
            case 'Q':
            case 'q': exit(0);
                      break;
    default : printf("Error in operation");
        break;
    }
}
