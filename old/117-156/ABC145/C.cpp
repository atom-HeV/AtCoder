#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> x(N), y(N);

    for(int i=0; i<N; i++){
        cin >> x[i] >> y[i];
    }

    double sum=0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            sum += sqrt((x[i] - x[j])*(x[i] - x[j]) + (y[i] - y[j])*(y[i] - y[j]));
        }
    }
    printf("%.10f\n", sum/N);
    return 0;
}