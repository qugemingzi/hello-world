#ifndef SAFEARRAY_H_INCLUDED
#define SAFEARRAY_H_INCLUDED
class SafeArray{
public:
    // 构造函数
    SafeArray(int);
    // 解构函数
    ~SafeArray();

    int get(int);
    void set(int, int);

    int length;
private:
    int *_array;

    bool isSafe(int i);
};


#endif // SAFEARRAY_H_INCLUDED
