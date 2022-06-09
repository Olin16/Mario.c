#include <cs50.h>
#include <stdio.h>

void Addition(void);
void Subtraction(void);
void Division(void);
void Multiplication(void);

int main(void)
{
    char symbol = get_char("What would you like to do?  \n");   //user types in a math symbol of what they would like to do, ex: +, -, /, then gets stored into the variable, symbol 
    
    if (symbol == '+')      //if user typed + then that means they would like to do addit
    {
        printf("Addition\n");
        
        Addition();         //own made function
    }
    else if (symbol == '-')
    {
        printf("Subtraction\n");
        
        Subtraction();
    }
    else if (symbol == '/')
    {
        printf("Division\n");
        
        Division();
    }
    else if (symbol == '*')
    {
        printf("Multiplication\n");
        
        Multiplication();
    }
}

void Addition(void)         //created own function called Addition. This function adds x and y then stores it into z then prints out z
{
    int x = get_int("x: ");     //gets a number from user then stores it into x
    int y = get_int("y: ");     // gets a number form user then stores it into y
    
    float z = (float)x + (float)y;  //turns x and y to float then the numbers get added together and stored into z
    
    printf("Answer = %f\n", z);     //z(the answer) gets printed out for user to see 
}

void Subtraction(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    
    float z = (float)x - (float)y;
    
    printf("Answer = %f\n", z);
}

void Division(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    
    float z = (float)x / (float)y;
    
    printf("Answer = %f\n", z);
}

void Multiplication(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    
    float z = (float)x * (float)y;
    
    printf("Answer = %f\n", z);
}