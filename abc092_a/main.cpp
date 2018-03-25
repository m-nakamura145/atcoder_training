#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    int result = 0;
    if (a>b){
        result += b;
    }else{
        result += a;
    }
    if (c>d){
        result += d;
    }else{
        result += c;
    }
    cout << result << endl;
    return 0;
}