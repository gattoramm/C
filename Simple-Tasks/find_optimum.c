#include <stdio.h>
#include <stdbool.h>
#include <math.h>

double f(double x, double y){
    return (x - 3)*(x - 3) + 10 * sin(x) + (y + 2)*(y + 2);
}

int main()
{
    double x0 = 0.;double y0 = 0.;
    double step = 0.1;
    double dx[] = {step, -step, 0 , 0};
    double dy[] = {0, 0, step, -step};
    double newx, newy;
    bool bestfound = false;
    double maxf = f(x0, y0);

    while(!bestfound){
        bestfound = true;
        for (int i = 0; i < 4; i++) {
            double newf = f(x0 + dx[i], y0 + dy[i]);
            if (newf < maxf) {
                maxf = newf;
                bestfound = false;
                newx = x0 + dx[i];
                newy = y0 + dy[i];
            }
        }
        if (!bestfound) {
            x0 = newx;
            y0 = newy;
        }
    }

    printf("Best f(%.1f, %.1f) = %.2f\n", x0, y0, maxf);

    return 0;
}
