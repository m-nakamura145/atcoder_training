#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int max_count = 0;
    int max = 0;
    for(int i=n;i>0;i--){
        int count = 0;
        int temp = i;
        while(temp % 2 == 0){
            count++;
            temp /= 2;
        }
        if(count > max_count){
            max = i;
            max_count = count;
        }
    }
    if(n == 1){
        cout << 1 << endl;
    }else{
        cout << max << endl;
    }
    return 0;
}