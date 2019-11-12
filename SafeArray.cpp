#include "SafeArray.h"

// ��̬��������
SafeArray::SafeArray(int len){
    length = len;
    _array = new int[length];
}

// �����Ƿ񳬳����г���
bool SafeArray::isSafe(int i){
    if(i >= length || i < 0)
        return false;
    else
        return true;
}

// ȡ������Ԫ��ֵ
int SafeArray::get(int i){
    if(isSafe(i))
        return _array[i];

    return -1;
}

// �趨����Ԫ��ֵ
void SafeArray::set(int i, int value){
    if(isSafe(i))
        _array[i] = value;
}

// ɾ����̬���õ���Դ
SafeArray::~SafeArray(){
    delete [] _array;
}
