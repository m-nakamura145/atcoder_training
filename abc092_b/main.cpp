#include <iostream>
using namespace std;

int main() {
    int n;
    int d,x;
    int a[110];
    cin >> n;
    cin >> d >> x;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int result =0;
    result += x;
    for(int i=0;i<n;i++){
        int count =0;
        for(int j=1;j<=d;j=(count*a[i])+1){
            count++;
        }
        result += count;
    }

    cout << result << endl;
    return 0;
}