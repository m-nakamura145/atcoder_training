#include <iostream>
using namespace std;
#define SIZE 20

int data[SIZE] = {99,73,20,32,34,5,64,97,25,12,83,9,21,40,3,44,69,15,58,75};

void quicksort(int list[], int left, int right){
    int last,temp;
    if (left >= right){
        return;
    }

    last = left;
    for(int i=left;i<=right;i++){
        if(list[i] < list[left]){
            last++;
            temp = list[last];
            list[last] = list[i];
            list[i] = temp;
        }
    }

    temp = list[left];
    list[left] = list[last];
    list[last] = temp;

    quicksort(list, left, last-1);
    quicksort(list, last+1, right);
}

int main() {
    quicksort(data, 0, SIZE - 1);
    for(int i=0; i<SIZE; i++){
        cout << data[i] << endl;
    }
    return 0;
}