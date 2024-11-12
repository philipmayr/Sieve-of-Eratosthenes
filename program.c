// Sieve of Eratosthenes

#include <stdio.h>
#include <string.h>

int main()
{
    int upper_bound = 100;
    int lower_bound = 2;
    
    int sieve[upper_bound];
    
    memset(sieve, 0, sizeof sieve);
    
    for (int index = lower_bound; index <= upper_bound; index++)
    {
        if (sieve[index]) continue;
        
        for (int multiple = index * 2; multiple <= upper_bound; multiple += index)
            sieve[multiple] = 1;
    }
    
    // primes are indicated by 0's, composites by 1's
    for (int index = lower_bound; index <= upper_bound; index++)
        printf("%d ", sieve[index]);
    
    return 0;
}