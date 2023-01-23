#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

string WB[8] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
};
string BW[8] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
};
string board[50];

int WB_cnt(int x, int y)
{
    int cnt = 0;
    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            if (board[x + i][y + j] != WB[i][j])
                cnt++;
        }
    }
    return (cnt);
}

int BW_cnt(int x, int y)
{
    int cnt = 0;
    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            if (board[x + i][y + j] != BW[i][j])
                cnt++;
        }
    }
    return (cnt);
}

int main(void)
{
    fast_io;
    int min_cnt = 64;
    pair<int, int> p;
    cin >> p.first >> p.second;
    for(int i = 0; i < p.first; i++)
        cin >> board[i];
    for(int i = 0; i + 8 <= p.first; i++)
    {
        for(int j = 0; j + 8 <= p.second; j++)
        {
            int tmp;
            tmp = min(WB_cnt(i,j),BW_cnt(i,j));
            if(tmp < min_cnt) {
                min_cnt = tmp;
            }
        }
    }
    cout << min_cnt;
    return 0;
}
