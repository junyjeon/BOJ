#include <bits/stdc++.h>

int main(void)
{
    int n;
    std::cin >> n;

    int count = 0;
    for (int i = 5; i <= n; i *= 5)
        count += n / i;

    std::cout << count << std::endl;
    return 0;
}
