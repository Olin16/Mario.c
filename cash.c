#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    //promts user for some input, in this case the change the cashier owes to customer
    float owe;
    int cents = 0;
    int q;
    int d;
    int n;
    int p;
    int coins = 0;
    int x;
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
    
    do
    {
        owe = get_float("Enter amount you owe to customer: ");
    }
    while (owe < 0);
    
    printf("Change owed: $%.2f\n", owe);
    
    cents = round(owe * 100);
   
    for (q = 0; cents >= 25; q++)
    {
        quarters = cents / 25;
            
        cents = cents - (25 * quarters);
    }
        
    for (d = 0; cents >= 10; d++)
    {
        dimes = cents / 10;
            
        cents = cents - (10 * dimes);
    }
        
    for (n = 0; cents >= 5; n++)
    {
        nickels = cents / 5;
            
        cents = cents - (5 * nickels);
    }
        
    for (p = 0; cents >= 1; p++)
    {
        pennies = cents / 1;
            
        cents = cents - (1 * pennies);
    }
    coins = quarters + dimes + nickels + pennies;
    x = q + d + n + p;
        
   
    printf("%i\n", coins);
    
    
    
}

/*Steps
1. promt user for input. (The input has to be a positive integer)

2. try to run the loop until the change amount equals 0

3. the loop will go from quarters to pennies

4. as we go through the loop take the biggest coin possible maybe use integers and divide(EX: 61/quarters(25)=2.44 or for int 
it will be 2 take the 2 multiply by quarter(25) and subtract it to 61 to get 11, then to dimes and so on, if there is 1 cent left 
then divided by nickel(5) it would be 0.5 or 0 for int which we don't want so we skip and go to penny

5. try to keep up with how many coins are needed*/