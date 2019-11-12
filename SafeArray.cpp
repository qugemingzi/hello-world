#include "SafeArray.h"

// 动态配置阵列
SafeArray::SafeArray(int len){
    length = len;
    _array = new int[length];
}

// 测试是否超出阵列长度
bool SafeArray::isSafe(int i){
    if(i >= length || i < 0)
        return false;
    else
        return true;
}

// 取得阵列元素值
int SafeArray::get(int i){
    if(isSafe(i))
        return _array[i];

    return -1;
}

// 设定阵列元素值
void SafeArray::set(int i, int value){
    if(isSafe(i))
        _array[i] = value;
}

// 删除动态配置的资源
SafeArray::~SafeArray(){
    delete [] _array;
}
