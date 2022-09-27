#include <iostream>

typedef unsigned long long ull;

ull power(__int128 a, __int128 b, __int128 mod){
    __int128 ret = 1;
    while(b > 0)
    {
        if(b & 1ULL)
            ret = (ret * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return (ull)ret;
}

bool millerRabin(ull n, ull a)
{
    if(a % n == 0) 
        return true;
    ull k = n - 1;
    while(true)
    {
        ull tmp = power(a, k, n);
        if(tmp == n - 1)
            return true;
        if(k & 1ULL)
            return (tmp == 1 || tmp == n - 1);
        k >>= 1;
    }
}

bool isPrime(ull n)
{
    static ull base[12] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
    if(n == 2)
        return true;
    else if(!(n & 1ULL))
        return false;
    else
    {
        for(int i = 0; i < 12; i++)
        {
            if(n == base[i])
                return true;
            if(!millerRabin(n, base[i]))
                return false;
        }
        return true;
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    ull n, m;
    std::cin >> n >> m;
    if(!(n & 1ULL))
        n++;
    for(ull i = n; i <= m; i += 2)
    {
        if(isPrime(i) || i == 9)
            std::cout << i << ' ';
    }
}