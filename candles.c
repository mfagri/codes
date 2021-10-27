#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int birthdayCakeCandles(int candles_count, int* candles)
{
    int i,j,p;
    i = 0;
    while(i < candles_count )
    {
        j = i +1;
        while(j < candles_count)
        {
            int tmp;
            if(candles[i] < candles[j])
            {
                tmp = candles[i];
                candles[i] = candles[j];
                candles[j] = tmp;
            }
            j++;
        }
        i++;
    }
    p = 1;
    i = 0;
    j = i + 1;
    while(j < candles_count)
    {
        if(candles[i] == candles[j])
        {
            p++;
        }
        j++;
    }
    return p;
}
int main()
{
	int b[4] = {3,3,4,3};
	int a = birthdayCakeCandles(4,b);
	printf("%d\n",a);
}
