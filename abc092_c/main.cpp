#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100010];
    a[0] = 0;
    a[n+1] = 0;
    for(int i=1;i<=n;i++) cin >> a[i];

    int memo[100010]={0};
    int result[100010]={0};
    int sum_result[100010]={0};
    for(int i=0;i<=n;i++){
        memo[i] = abs(a[i+1] - a[i]);
    }
    for(int i=1;i<=n+1;i++){
        sum_result[i] = memo[i-1] + sum_result[i-1];
    }


    for(int i=0;i<=n;i++){
        result[i] = sum_result[n+1];
        result[i] -= memo[i];
        result[i] -= memo[i+1];
        result[i] += abs(a[i+2] - a[i]);
    }

    for(int i=0;i<n;i++){
        cout << result[i] << endl;
    }

    return 0;
}