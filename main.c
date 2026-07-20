#include <stdio.h>

int main() {
    double t1, t2, t3;

    scanf("%lf %lf %lf", &t1, &t2, &t3);

    double time = 1.0 / (1.0 / t1 + 1.0 / t2 + 1.0 / t3);

    printf("%.2lf\n", time);

    return 0;
}