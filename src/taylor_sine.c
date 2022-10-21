#include "assert.h"
#include "math.h"
#include "stdio.h"

double taylor_sine(double x, int n)
{
    /* implement your function here */
    
    /* pre: n > 0 */
    assert(n > 0);

    double sum = x; // vores sin(x) resultat, der er summen af udregningen
    double value = x; //vores værdi der udregner taylor sine udregningen
    double fact = 1; // vores factorialværdi til nævneren
    

    /* laver en for-løkke til at udregne summen */
    for(int i = 0; i < n; i++)
    {
        fact += 2; // factorial der øges ved 2 hver gang i vores taylor sine 

        value = -value * x * x / fact / (fact - 1); 
        // for-løkke udregningen der udregner vores taylor sine udregning
        
        sum += value; //vores sum er lig med værdien
    }
    

    /* post: returner summen af taylor series ligningen = sin(x) */
    return sum;
}
