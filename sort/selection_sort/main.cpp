#include <iostream>
using namespace std;

void SelectionSort(int input[], int len){
    for(int i=0;i<len;i++){
        int min = i;
        for(int j=i+1;j<len;j++){
            if(input[j] < input[min]){
                min = j;
            }
        }
        if(i != min){
            int tmp;
            tmp = input[i];
            input[i] = input[min];
            input[min] = tmp;
        }
    }
}

int main() {
    int n=10;
    int input[10] = {5,2,3,1,8,4,6,9,7,0};
    SelectionSort(input, n);
    for(int i=0;i<n;i++){
        cout << input[i] << endl;
    }
    return 0;
}