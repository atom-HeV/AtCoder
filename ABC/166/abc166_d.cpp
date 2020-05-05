#include <bits/stdc++.h>

using namespace std;

int main() {
    long long X;
    cin >> X;
    for (long long a = 0; a <= 200; a++)
    {
        for (long long b = -200; b <= 200; b++)
        {
            if(pow(a, 5) - pow(b, 5) == X){
                cout << a << " " << b << endl;
                return 0;
            }
        }
        
    }
    return 0;
}