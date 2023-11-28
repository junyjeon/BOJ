#include <bits/stdc++.h>

int main(void)
{
    int t, w, h;
    std::cin >> t;
    while (t--)
    {
        int H, W, n;
        std::cin >> H >> W >> n;
        int x = n / H;
        int y = n % H;
        if (y == 0)
        {
            y = H;
            x--;
        }
        std::cout << y;
        if (x < 9)
            std::cout << 0;
        std::cout << x + 1 << std::endl;
    }
    return 0;
}
