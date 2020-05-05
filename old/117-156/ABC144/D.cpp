#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a, b, x, area, ans;
    cin >> a >> b >> x;
    area = x / a;

    if(area >= a * b / 2){
        ans = 90 - atan2(a*a, 2*(a*b - area)) * 180 / M_PI;
    }else{
        ans = atan2(b*b, 2 * area) * 180 / M_PI;
    }
    printf("%.10f\n", ans);
    return 0;
}