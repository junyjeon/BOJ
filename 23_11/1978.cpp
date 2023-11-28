#include <bits/stdc++.h>

bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i <= std::sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

int main(void)
{
    int n;
    std::cin >> n;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        std::cin >> num;
        if (isPrime(num))
            count++;
    }
    std::cout << count;
    return 0;
}
