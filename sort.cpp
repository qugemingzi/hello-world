#include "sort.h"

void swap(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}

bool larger(int a, int b){
    return a > b;
}

bool smaller(int a, int b){
    return a < b;
}

void sort(int* arr, int length, CMP compare){
    int flag = 1;

    for(int i = 0; i < length - 1 && flag == 1; i++){
        flag = 0;
        for(int j = 0; j < length-i-1; j++){
            if(compare(arr[j+1], arr[j])){
                swap(arr[j+1], arr[j]);
                flag = 1;
            }
        }
    }
}
