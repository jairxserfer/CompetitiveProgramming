#include <cstdio>
#include <iostream>

int cycleLength(long long int);

int cycleLengthResult[1000001];

int main(int argc, char *argv[])
{
    int i = 0, j = 0, cur = 0, max = 0, k = 0, s = 0;
    for (i = 1 ; i < 1000001 ; ++ i ) cycleLength(i);

    while ( scanf("%d%d", &i, &j) != EOF )
    {
        printf("%d %d ", i, j);
        if ( i > j )
        {
            s = i;
            i = j;
            j = s;
        }
        max = 0;
        for ( k = i ; k <= j ; ++ k )
        {
            cur = cycleLengthResult[k];
            if (cur > max) max = cur;
        }
        printf("%d\n", max);
    }

    return 0;
}

int cycleLength(long long int arg)
{
    if ( arg > 1000000 )
    {
        if (!(arg & 1))
            return 1 + cycleLength(arg/2);
        else
            return 1 + cycleLength(arg*3+1);
    }
    if (!cycleLengthResult[arg])
    {
        int valueForArg = 0;
        if (arg == 1)
            valueForArg = 1;
        else if (!(arg & 1))
            valueForArg = 1 + cycleLength(arg/2);
        else
            valueForArg = 1 + cycleLength(arg*3+1);

        cycleLengthResult[arg] = valueForArg;
    }
    return cycleLengthResult[arg];
}