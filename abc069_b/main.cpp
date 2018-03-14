#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int size = s.size();
    cout << s[0] << size-2 << s[size-1] << endl;
    return 0;
}