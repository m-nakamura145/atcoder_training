#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    double x[110];
    double y[110];
    double result[110][110];
    for(int i=0;i<n;i++){
        cin >> x[i] >> y[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            result[i][j] = sqrt(pow(x[i]-x[j],2) + pow(y[i]-y[j],2));
        }
    }
    double max = 0.0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(max < result[i][j]){
                max = result[i][j];
            }
        }
    }
    cout << max << endl;
    return 0;
}