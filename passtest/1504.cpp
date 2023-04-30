#include <bits/stdc++.h>
using namespace std;
double zg(double a, double b, double c)
{
    double deta = b * b - 4 * a * c;
    return (sqrt(deta) - b) / abs(2 * a);
}
double fg(double a, double b, double c)
{
    double deta = b * b - 4 * a * c;
    return (-sqrt(deta) - b) / abs(2 * a);
}
double deta(double a, double b, double c)
{
    return b * b - 4 * a * c;
}
int main()
{
    double Rr, R, r, x, y, vx, vy;
    while (cin >> Rr >> R >> r >> x >> y >> vx >> vy)
    {
        double v = sqrt(vx * vx + vy * vy);
        double dis;
        double b, k;
        if (vx == 0)
            dis = abs(x);
        else
        {
            k = vy / vx;
            b = y - k * x;
            dis = abs(b) / sqrt(1 + k * k);
        }
        if (dis >= R + r)
        {
            cout << "0.000\n";
        }
        else if (dis >= Rr + r)
        {
            if (x * vx + y * vy >= 0)
                cout << "0.000\n";
            else
            {
                if (vx == 0)
                    printf("%.3f\n", 2 * sqrt((R + r) * (R + r) - x * x) / v);
                else
                    printf("%.3f\n", sqrt(deta(k * k + 1, 2 * k * b, b * b - (R + r) * (R + r))) / sqrt(k * k + 1) / v);
            }
        }
        else
        {
            if (x * vx + y * vy >= 0)
                cout << "0.000\n";
            else
            {
                if (vx == 0)
                    printf("%.3f\n", 2 * (sqrt((R + r) * (R + r) - x * x) - sqrt((Rr + r) * (Rr + r) - x * x)) / v);
                else
                {
                    double d1 = min(abs(zg(k * k + 1, 2 * k * b, b * b - (R + r) * (R + r)) - x), abs(fg(k * k + 1, 2 * k * b, b * b - (R + r) * (R + r)) - x));
                    double d2 = min(abs(zg(k * k + 1, 2 * k * b, b * b - (Rr + r) * (Rr + r)) - x), abs(zg(k * k + 1, 2 * k * b, b * b - (Rr + r) * (Rr + r)) - x));
                    printf("%.3f\n", 2 * (d2 - d1) * sqrt(k * k + 1) / v);
                }
            }
        }
    }
}
