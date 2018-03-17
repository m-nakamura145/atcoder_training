#include <iostream>
using namespace std;

void BubbleSort(int input[], int len){
    for(int i=0; i<len; i++){
        for(int j=len-1; j>i; j--){
            if(input[j] < input[j-1]){
                int temp = input[j];
                input[j] = input[j-1];
                input[j-1] = temp;
            }
        }
    }
}

int main() {
    int n=10;
    int input[10] = {5,2,3,1,8,4,6,9,7,0};
    BubbleSort(input, n);
    for(int i=0;i<n;i++){
        cout << input[i] << endl;
    }
    return 0;
}