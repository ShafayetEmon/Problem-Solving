#include <bits/stdc++.h>
using namespace std;

double AB, AC, BC, r;

double test_ratio(double AD)
{
    double AE, DE;
    AE = (AD / AB) * AC;
    DE = (AD / AB) * BC;

    double s_ADE = (AD + AE + DE) / 2.0;
    double ADE = sqrt(s_ADE * (s_ADE - AD) * (s_ADE - AE) * (s_ADE - DE));

    double s_ABC = (AB + AC + BC) / 2.0;
    double ABC = sqrt(s_ABC * (s_ABC - AB) * (s_ABC - AC) * (s_ABC - BC));

    double BDEC = ABC - ADE;

    return ADE / BDEC;
}

double AD_search()
{
    double left = 0.0;
    double right = AB;
    double mid;
    double index = -1;

    int cnt = 70;
    while (cnt--)
    {
        mid = (left + right) / 2.0;
        index = mid;

        if (test_ratio(index) > r) right = mid;
        else left = mid;
    }
    return index;
}

int main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    int T;
    scanf("%d", &T);

    int cse = 1;
    while (T--)
    {
        scanf("%lf %lf %lf %lf", &AB, &AC, &BC, &r);

        printf("Case %d: %0.10lf\n", cse++, AD_search());
    }
    return 0;
}
