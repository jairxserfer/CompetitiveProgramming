#include <bits/stdc++.h>
#define MAX 1000000

using namespace std; 

const int MAX_N = (int)1E5+1;
const int MAX_M = 1000001;
bool primes[MAX_M];
 
void getPrimes()
{
    memset(primes, 0, sizeof(bool)*MAX_M);
    primes[0] = primes[1] = 1;
    for (int i = 2; i < MAX_M; i++)
    {
        if (!primes[i])
        {
            for (int j = i<<1; j < MAX_M; j+=i)
            {
                primes[j] = true;
            }
        }
    }
}
 
int main()
{
    getPrimes();
    int n;
    long long num;
    while (scanf(%d, &n) != EOF)
    {
        for (int i = 0; i < n; i++)
        {
            scanf(%I64d, &num);
            long long t = (long long) sqrt((double)num);
            if (t * t == num && !primes[t]) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
