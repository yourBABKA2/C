#include<stdlib.h>
#include<stdio.h>

int gcd(int a, int b)
{
    if (a < b)
    {
        int c = a;
        a = b;
        b = c;
    }

    int rem = a % b;

    if (rem != 0) return gcd(b, rem);
    return b;
}

int main()
{
    int a, b; // 10 2
    scanf("%d %d", &a, &b);

    printf("%d %d\n", a, b);

    float f = (float) a / (float) b;
    printf("%.3f\n", f);

    int g = gcd(a, b);
    printf("%d\n", g);

    int a1, b1;

    a1 = a / g;
    b1 = b / g;

    printf("%d %d\n", a1, b1);

    f = (float) a1 / (float) b1;
    printf("%.3f\n", f);
/////////////////////////////////
    int c, d;  // 5 10
    scanf("%d %d\n", &c, &d);
    printf("%d %d\n", c, d);

    f = (float) c / (float) d;
    printf("%.3f\n", f);

    g = gcd(c, d);
    printf("%d\n", g);
    
    int c1, d1;

    c1 = c / g;
    d1 = d / g;

    printf("%d %d\n", c1, d1);

    f = (float) c1 / (float) d1;
    printf("%.3f\n", f);
//////////////////////////////////
    int am, bm, cm, dm, st, sb, st1, sb1;

    am = a * d;
    cm = c * b;
    bm = d * b;
    st = am + cm;
    sb = bm;

    printf("%d %d\n", am, bm);
    printf("%d %d\n", cm, bm);
    printf("%d %d\n", st, sb);

    f = (float) st / (float) sb;
    printf("%.3f\n", f);

    g = gcd(st, sb);
    printf("%d\n", g);

    st1 =st / g;
    sb1 = sb / g;

    printf("%d %d\n", st1, sb1);

    f = (float) st1 / (float) sb1;
    printf("%.3f\n", f);

 /////////////////////////////////////
    int mt, mb, mt1, mb1;

    mt = a * c;
    mb = b * d;
    printf("%d %d\n", mt, mb);

    f = (float) mt / (float) mb;
    printf("%.3f\n", f);

    g = gcd(mt, mb);
    printf("%d\n", g);

    mt1 = mt / g;
    mb1 = mb / g;
    printf("%d %d\n", mt1, mb1);

    f = (float) mt1 / (float) mb1;
    printf("%.3f\n", f);
    
 ////////////////////////////////// 
    int dt, db, dt1, db1;

    dt = a * d;
    db = b * c;
    printf("%d %d\n", dt, db);

    f = (float) dt / (float) db;
    printf("%.3f\n", f);

    g = gcd(dt, db);
    printf("%d\n", g);

    dt1 = dt / g;
    db1 = db / g;
    printf("%d %d\n", dt1, db1);

    f = (float) dt1 / (float) db1;
    printf("%.3f\n", dt1, db1);
    return 0;
}