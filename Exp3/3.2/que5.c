#include <stdio.h>

int main()
 {
    int limit = 20; 

    printf("Ramanujan numbers using pairs 1 to %d:\n\n", limit);

    // Loop for first pair (a,b)
    for (int a = 1; a <= limit; a++)
     {
        for (int b = a; b <= limit; b++)
         {
            int sum1 = a*a*a + b*b*b;

            // Loop for second pair (c,d)
            for (int c = a; c <= limit; c++) 
            {
                for (int d = c; d <= limit; d++) 
                {
                    // Ensure second pair is "after" first to avoid duplicates
                    if ((c > a) || (c == a && d > b))
                     {
                        if (sum1 == c*c*c + d*d*d)
                         {
                            printf("%d^3 + %d^3 = %d\n", a, b, sum1);
                            printf("%d^3 + %d^3 = %d\n\n", c, d, sum1);
                        }
                    }
                }
            }
        }
    }

    return 0;
}
