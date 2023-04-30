#include <bits/stdc++.h>
    using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double x, y;
        cin >> x >> y;
        double r = sqrt(x * x + y * y);
        double cos = sqrt(x * x / (x * x + y * y));
        double sin = sqrt(y * y / (x * x + y * y));
        if (x * y > 0)
            sin = -sin;
        double x0 = -x / 2;
        double y0 = -y / 2;
        double x1 = x0 + r * sin / 2 * sqrt(3), x2 = x0 - r * sin / 2 * sqrt(3);
        double y1 = y0 + r * cos / 2 * sqrt(3), y2 = y0 - r * cos / 2 * sqrt(3);
        if (y1 < y2)
            printf("%.3f %.3f %.3f %.3f\n", x1, y1, x2, y2);
        else
            printf("%.3f %.3f %.3f %.3f\n", x2, y2, x1, y1);
    }
}
 

