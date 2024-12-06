#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int ScreenCountSQ = 0;

        if (y > 0 && y % 2 == 0)
        {
            ScreenCountSQ = y / 2;
        }
        else if (y > 0 && y % 2 == 1)
        {
            ScreenCountSQ = (y / 2) + 1;
        }
 
        int GridsCountSQ = ScreenCountSQ * 15;
        int GridsRemaining = GridsCountSQ - (y * 4);

        int ScreenCoundCells = 0;
        x = x - GridsRemaining;
        if (x > 0 && x < 15)
        {
            ScreenCoundCells = 1;
        }
        else if (x > 0 && x % 15 == 0)
        {
            ScreenCoundCells = (x / 15);
        }
        else if (x % 15 != 0 && x > 0)
        {
            ScreenCoundCells = (x / 15) + 1;
        }

        int screenCount = ScreenCountSQ + ScreenCoundCells;
        cout << screenCount << endl;
    }

    return 0;
}