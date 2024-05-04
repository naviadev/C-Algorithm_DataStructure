#ifndef BubbleSort_h
void BubbleSort(int * arr, int leng){
    int temp;
    for(int i = 0; i < leng - 1; i++){
        for (int j = 0; j < leng - 1 - i; j++){
            if(arr[j] > arr [j + 1 ])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return;
}
#define BubbleSort_h
#endif
