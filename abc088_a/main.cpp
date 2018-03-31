#include <iostream>
using namespace std;

int main() {
    int n;
    int a;
    cin >> n;
    cin >> a;
    while(n>=500){
        n -= 500;
    }
    if(n <= a){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }

    return 0;
}