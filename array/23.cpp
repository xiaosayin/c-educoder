#include <iostream>
using namespace std;

int main() {
    int N;
    long long L;
    long long T1 = -1, T2 = -1;
    cin >> N >> L;
    bool left = false;
    for (int i = 0; i < N; i++) {
        long long T;
        cin >> T;
        if (!left) T = L - T;
        left = !left;
        if (T1 == -1 || T < T1) T1 = T;
        if (T2 == -1 || T > T2) T2 = T;
    }
    cout << T1 << " " << T2 << endl;
    return 0;
}

