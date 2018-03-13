#include <iostream>
using namespace std;

int main() {
    int n,k;
    int count = 0;
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        if(i >=k) {
            for (int j = 1; j <= n; j++) {
                if (i % j >= k) {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}