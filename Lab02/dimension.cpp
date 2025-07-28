#include <iostream>
#include <vector>
using namespace std;

int main() {
    int dimensionY;
    scanf("%d", &dimensionY);

    vector<double> x1(dimensionY), y1(dimensionY), x2(dimensionY), y2(dimensionY);

    for (int i = 0; i < dimensionY; i++) {
        scanf("%lf %lf %lf %lf", &x1[i], &y1[i], &x2[i], &y2[i]);

        if (x1[i] > x2[i]) swap(x1[i], x2[i]);
        if (y1[i] > y2[i]) swap(y1[i], y2[i]);
    }

    double storeShiftedArea = 0.0;

    for (int i = 0; i < dimensionY; i++) {
        for (int j = i + 1; j < dimensionY; j++) {

            double shiftedX = min(x2[i], x2[j]) - max(x1[i], x1[j]);
            double shiftedY = min(y2[i], y2[j]) - max(y1[i], y1[j]);

            if (shiftedX > 0 && shiftedY > 0) {
                double shiftedArea = shiftedX * shiftedY;
                if (shiftedArea > storeShiftedArea) {
                    storeShiftedArea = shiftedArea;
                }
            }
        }
    }

    printf("%.6lf\n", storeShiftedArea);

    return 0;
}
