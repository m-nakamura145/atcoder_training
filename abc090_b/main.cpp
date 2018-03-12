#include <iostream>
using namespace std;

int main() {
    int a,b;
    int count = 0;
    cin >> a >> b;
    for(int i=0;i<=b - a;i++){
        int temp = a+i;
        int c[5];
        for(int j=0;j<5;j++){
            c[j] = temp % 10;
            temp /= 10;
        }
        if(c[0] == c[4] && c[1] == c[3]){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}