#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int c =0;
    while(n>2){
        n -= 3;
        c++;
    }
    cout << c << endl;

    return 0;
}