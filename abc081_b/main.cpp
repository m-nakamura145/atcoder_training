#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[201];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int count =0;
    while(true){
        bool all_even = true;
        for(int i=0;i<n;i++){
            if(a[i] % 2 != 0){
                all_even = false;
            }
        }
        if(all_even){
            for(int i=0;i<n;i++){
                a[i] = a[i] >> 1;
            }
            count++;
        }else{
            break;
        }
    }
    cout << count << endl;
    return 0;
}