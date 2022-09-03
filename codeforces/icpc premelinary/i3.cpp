#include <bits/stdc++.h>

int main()
{
    int l, w;
    float f, h;

   while(scanf("%d%d", &l, &w))
   {
        if (l == 0 && w == 0)
            return 0;

        h = l * .53033;

        f = sqrt(2 * h * h);

        printf("%.4f\n", f + w);
    }
 
    return 0;
}
