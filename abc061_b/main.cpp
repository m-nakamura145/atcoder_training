#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int a[50],b[50];
    int result[50] = {0};
    for(int i=0;i<m;i++){
        cin >> a[i] >> b[i];
    }
    for(int i=0;i<m;i++){
        result[a[i]]++;
        result[b[i]]++;
    }
    for(int i=1;i<=n;i++){
        cout << result[i] << endl;
    }
    return 0;
}