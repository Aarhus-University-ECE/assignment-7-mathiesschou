#include "taylor_sine.h"  // OBS: Når jeg kører min program kan den ikke finde taylor.sine.h eller stack.h, så ingen testcases er lavet. Jeg spørger på torsdag.
#include "stack.h"
#include <stdio.h>

// Add your test cases for Exercise 1b,c) here
int main(int argc, char **argv)
{
    
    // testcases for x værdien in en array
    double x[9] = {0.2, 0.5, 0.7, 1.0, 3.0, 3.5, 4.0, 4.5, 5.0};

    // testcases for terms i en række
    // en factorial kan maximum være 12!, da int ikke kan holde mere data
    // var det factorial 13! > 2,147,483,647
    int n[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    //for-løkke til at udregne de forskellige værdier i x og n rækkerne med taylor sine funktionen
    for(int i = 0; i < 9; i++)
    {
        // printer værdien der viser hvilke værdier og resultatet
        printf("\nTaylor_sine.c function for værdien %lf, med %d termer: %lf\n", x[i], n[i], taylor_sine(x[i], n[i]));

        // printer ANSI C værdien for at sammenligne med resultatet
        printf("\nANSI C værdi for værdien %lf: %lf\n", x[i], sin(x[i]));
    }

    return 0;
}