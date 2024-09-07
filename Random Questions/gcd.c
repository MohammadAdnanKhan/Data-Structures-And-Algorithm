/*This is a code to calculate the Greatest Common Divisor of two numbers*/

#include <stdio.h>
int main()
{
    int m, n, r;
    printf("Enter first number\n");
    scanf("%d", &n);
    printf("Enter second number\n");
    scanf("%d", &m);
    {
        if (m == 0 || n == 0)
        {
            if (m != 0 && n == 0)
            {
                int t;
                t = m, m = n, n = t;
                r = m % n;
                while (r != 0)
                {
                    m = n;
                    n = r;
                    r = m % n;
                }
                printf("The GCD of the two numbers is %d", n);
            }
            else if (m == 0 && n == 0)
            {
                printf("INVALID INPUT!!!\n Plz enter a non zero positive integer\n");
            }
        }
        else
        {
            r = m % n;
            while (r != 0)
            {
                m = n;
                n = r;
                r = m % n;
            }
            printf("The GCD of the two numbers is %d", n);
        }
    }

    return 0;
}