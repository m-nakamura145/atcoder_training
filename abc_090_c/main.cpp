#include <iostream>
using namespace std;

int main(void) {
    long long N, M;
    cin >> N >> M;
    if (N >= 2 && M >= 2) {
        cout << (N - 2) * (M - 2) << endl;
    } else if (N >= 2 || M >= 2) {
        cout << -(N - 2) * (M - 2) << endl;
    } else {
        cout << 1 << endl;
    }
}