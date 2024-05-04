#include <iostream>

#include "BubbleSort.h"

using namespace std;

int main(void) {
    int leng;
    cout << "배열 길이 입력";
    cin >> leng;
    int* arr = new int[leng];
    for(int i = 0; i < leng; i++){
        arr[i] = 5 - i;
    }
    BubbleSort(arr, leng);
    for(int i = 0; i < leng; i++){
        cout << arr[i];
    }
    return 0;
}
