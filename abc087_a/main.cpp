#include <iostream>
using namespace std;

int main() {
    int x,a,b;
    cin >> x;
    cin >> a;
    cin >> b;
    x -= a;
    while(x >= b){
        x -= b;
    }
    cout << x << endl;

    return 0;
}