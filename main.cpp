#include <iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<string>
#include "math.h"
#include<cstdarg>

using namespace std;

bool more(){
    int replay = 0;
    cout << "还要继续玩么？ 0表示不玩了" << endl;
    cin >> replay;
    return (replay == 0) ? false : true;
}

// 转移到math.h和math.cpp文件中了
//int pow2(int num){
//    return num*num;
//}
//
//int pow(int num, int p){
//    int r = 1;
//    for(int i = 0; i < p; i++)
//        r *= num;
//    return r;
//}

double area(double r, double pi = 3.14){
    return r*r*pi;
}

/*
    多个预设参数时，预设参数右边必须预设参数，注意参数顺序
    e.g.
    TRUE: double volumn(double l, double w = 1.0, double h = 1.0);
    FALSE: double volumn(double h = 1.0, double w = 1.0, double l);
    函数中有多个预设参数时，调用时需要注意，预设参数是以参数顺序进行的
    e.g.
    bool setScreen(int width = 80, int height = 24, char bkcolor = '');
    如果我们调用setScreen('R');则相当于setScreen('R', 24, '');
    而不是setScreen(80, 24, 'R');且setScreen(,,'R')是错误的。
*/

void showpara(int x){
    cout << "int 参数：" << x << endl;
}

void showpara(int x, int y){
    cout << "int 参数：" << x << "\t" << y << endl;
}

void showpara(double x){
    cout << "double 参数：" << x << endl;
}

void count(){
    static int c = 1;
    int d = 1;
    cout << c << "\t" << d << endl;
    c++; d++;
}

int gcd_r(int m, int n){
    if(n == 0)
        return m;
    else
        return gcd_r(n, m % n);
}

int gcd(int m, int n){
    int r = 0;
    while(n != 0){
        r = m % n;
        m = n;
        n = r;
    }
    return m;
}

// 传值
int increment(int n){
    return ++n;
}

// 传引用
int increment(int *n){
    return ++*n;
}


// 传回建立的阵列地址
int* createArray(int m){
    int *a = new int[m];
    for(int i = 0; i < m; i++){
        a[i] = 0;
    }

    return a;
}

void deleteArray(int * arr){
    delete [] arr;
}

string foo(){
    string s = "This is pray chow speaking.";
    cout << "address: " << &s << endl << s << endl;

    return s;
}

string& foo1(){
    string *s = new string("This is pray chow speaking.");
    cout << "address: " << s << endl << *s << endl;

    return *s;
}


int main()
{
    cout << "Hello world!" << endl;
    cout << "我是\"pray chow!\"\n" << endl;

    cout << "形态\t大小(bytes)\n";
    cout << "int\t" << sizeof(int) << "\n";
    cout << "int16\t" << sizeof(int16_t) << "\n";
    cout << "int8\t" << sizeof(int8_t) << "\n";
    cout << "int32\t" << sizeof(int32_t) << "\n";
    cout << "int64\t" << sizeof(int64_t) << "\n";
    cout << "long\t" << sizeof(long) << "\n";
    cout << "float\t" << sizeof(float) << "\n";
    cout << "double\t" << sizeof(double) << "\n";
    cout << "char\t" << sizeof(char) << "\n" << endl;

    cout << "sizeof(bool)\t" << sizeof(bool) << endl;
    cout << "sizeof(true)\t" << sizeof(true) << endl;
    cout << "sizeof(false)\t" << sizeof(false) << endl;
    cout << "true\t" << static_cast<int>(true) << endl;
    cout << "false\t" << static_cast<int>(false) << "\n" << endl;

    cout << 26 << "\n"; // 十进制
    cout << 032 << "\n"; // 八进制
    cout << 0x1A << "\n"; // 十六进制

    int ageForStudent;
    double scoreForStudent;
    char levelForStudent;

    cout << "年级\t得分\t等级\n";
    cout << ageForStudent << "\t"
         << scoreForStudent << "\t"
         << levelForStudent << "\n";

    ageForStudent = 5;
    scoreForStudent = 80.0;
    levelForStudent = 'B';

    cout << "年级\t得分\t等级\n";
    cout << ageForStudent << "\t"
         << scoreForStudent << "\t"
         << levelForStudent << "\n";

    const int maxNum = 10;
//    maxNum = 20;
//    assignment of read-only variable `maxNum'
    unsigned int i = int();

    cout << "Hello world!" << endl;
    cerr << "Sorry world!" << endl;

    for(int i = 0; i < 10; i++){
        cout << rand() % 14 << endl;
    }

    cout << "10 > 5\t\t" << (10 > 5) << endl;
    cout << "10 >= 5\t\t" << (10 >= 5) << endl;
    cout << "10 < 5\t\t" << (10 < 5) << endl;
    cout << "10 <= 5\t\t" << (10 <= 5) << endl;
    cout << "10 == 5\t\t" << (10 == 5) << endl;
    cout << "10 != 5\t\t" << (10 != 5) << endl;

    int input;
    cout << "请输入整数: ";
    cin >> input;
    cout << "输入的数字: " << input << endl;
    cout << "该数为奇数么？（取余）" << (input%2 ? 'Y':'N') << endl;
    // 位元遮蔽，提升效率
    cout << "该数为奇数么？（位与）" << (input&1 ? 'Y':'N') << endl;

    cout << "AND运算：" << endl;
    cout << "0 AND 0\t\t" << (0 & 0) << endl;
    cout << "0 AND 1\t\t" << (0 & 1) << endl;
    cout << "1 AND 0\t\t" << (1 & 0) << endl;
    cout << "1 AND 1\t\t" << (1 & 1) << endl;

    cout << "OR运算：" << endl;
    cout << "0 OR 0\t\t" << (0 | 0) << endl;
    cout << "0 OR 1\t\t" << (0 | 1) << endl;
    cout << "1 OR 0\t\t" << (1 | 0) << endl;
    cout << "1 OR 1\t\t" << (1 | 1) << endl;

    cout << "XOR运算：" << endl;
    cout << "0 XOR 0\t\t" << (0 ^ 0) << endl;
    cout << "0 XOR 1\t\t" << (0 ^ 1) << endl;
    cout << "1 XOR 0\t\t" << (1 ^ 0) << endl;
    cout << "1 XOR 1\t\t" << (1 ^ 1) << endl;

    cout << "NOT运算：" << endl;
    cout << "NOT 0\t\t" << (!0) << endl;
    cout << "NOT 1\t\t" << (!1) << endl;

    char num = 200;
    cout << static_cast<int>(~num) << endl;

    int level = (input % 101) / 10;
    switch(level){
    case 10:
        cout << "满分" << endl;
    case 9:
        cout << "得A" << endl;
        break;
    case 8:
        cout << "得B" << endl;
        break;
    case 7:
        cout << "得C" << endl;
        break;
    case 6:
        cout << "得D" << endl;
        break;
    default:
        cout << "得E(不及格)" << endl;
    }

    do {
        cout << "请输入整数：";
        cin >> input;
        cout << "该数为奇数？" << ((input % 2) ? 'Y': 'N') << "\n";
    } while(more());

    // array 2 vector
    int iarr[] = {1, 2, 3, 4, 5};
    vector<int> ivector(iarr + 1, iarr + 4);
    for(int i = 0; i < ivector.size(); i++){
        cout << ivector[i] << " ";
    }cout << endl;

    // vector 2 vector
    vector<int> ivector1(5, 1);
    vector<int> ivector2;// 定义一个空的vector

    ivector2 = ivector1;

    for(int i = 0; i < ivector2.size(); i++){
        cout << ivector2[i] << " ";
    }cout << endl;

    ivector2[0] = 2;

    for(int i = 0; i < ivector2.size(); i++){
        cout << ivector2[i] << " ";
    }cout << endl;

    for(int i = 0; i < ivector1.size(); i++){
        cout << ivector1[i] << " ";
    }cout << endl;

    // vector基本操作
    // 赋值
    for(int i = 90; i < 100; i++){
        ivector.push_back(190 - i);
    }

    // iterator 遍历
    for(vector<int>::iterator it = ivector.begin();
        it != ivector.end();
        it++){
            cout << *it << " ";
    }cout << endl;

    cout << "capacity: " << ivector.capacity() << endl;
    cout << "size: " << ivector.size() << endl;

    // sort 排序
    sort(ivector.begin(), ivector.end());

    for(vector<int>::iterator it = ivector.begin();
        it != ivector.end();
        it++){
            cout << *it << " ";
    }cout << endl;

    // find 搜索
    int isearch = 0;
    int bsearch = 1;
    while(bsearch != 0){
        cout << "请输入搜寻值：";
        cin >> isearch;

        vector<int>::iterator it = find(ivector.begin(), ivector.end(), isearch);
        if(it != ivector.end()){
            cout << "找到搜索值！" << endl;
        }else{
            cout << "找不到搜索值！" << endl;
        }

        cout << "还继续搜索么？ 0表示不搜索" << endl;
        cin >> bsearch;
    }

    // reverse 翻转
    reverse(ivector.begin(), ivector.end());
    for(vector<int>::iterator it = ivector.begin();
        it != ivector.end();
        it++){
            cout << *it << " ";
    }cout << endl;

    // cstring 使用
    char cstr[] = "hello";

    for(int i = 0; i < (sizeof(cstr)/sizeof(cstr[0])); i++) {
        if(cstr[i] == '\0')
            cout << "null";
        else
            cout << cstr[i] << " ";
    }
    cout << endl;

    char cstr1[80] = {'\0'};
    char cstr2[] = "caterpillar";

    cout << "cstr1: " << cstr1 << endl
         << "cstr2: " << cstr2 << endl
         << endl;

    // 将str2复制给str1
    strcpy(cstr1, cstr2);
    cout << "cstr1: " << cstr1 << endl
         << "cstr2: " << cstr2 << endl
         << endl;

    // 将str2接在str1后
    strcat(cstr1, cstr2);
    cout << "cstr1: " << cstr1 << endl
         << "cstr2: " << cstr2 << endl
         << endl;

    cout << "cstr1长度：" << strlen(cstr1) << endl
         << "cstr2长度：" << strlen(cstr2) << endl
         << endl;

    cout << "cstr1与cstr2比较：" << strcmp(cstr1, cstr2) << endl
         << endl;

    // string 应用
    string str1;
    string str2("caterpillar");
    string str3(str2);

    if(str1.empty()){
        cout << "str1 为空字串" << endl;
    }

    cout << "str1 长度: " << str1.size() << endl;
    cout << "str2 长度: " << str2.size() << endl;
    cout << "str3 长度: " << str3.size() << endl;

    if(str1 == str2) {
        cout << "str1 与 str2 內容相同" << endl;
    }

    if(str3 == str2) {
        cout << "str3 与 str2 內容相同" << endl;
    }

    str1 = cstr1; // okay
    cout << "str1: " << str1 << endl;
//    cstr1 = str1 // error

    // assign: 指定字串
    str1 = str1.assign(str2, 0, 5);
    cout << "str1: " << str1 << endl;
    str1 = str1.assign("caterpillar", 5, 6);
    cout << "str1: " << str1 << endl;

    str1 = "";

    // append: 字串串接
    str1 = str1.append(str2, 0, 5);
    str1 = str1.append(str3, 5, 6);
    cout << "str1: " << str1 << endl;

    // find: 寻找字串位置
    cout << "寻找str1中的第一个pill: "
         << str1.find("pill", 0) << endl;

    // insert: 插入字串
    cout << "在str1插入字串***: "
         << str1.insert(5, "***") << endl;

    cout << "str1长度: " << str1.length() << endl;

    // pointer
    int var = 10;
    int *iptr = &var;

    cout << "变量var的值：" << var << endl;
    cout << "变量var的位地址：" << &var << endl;
    cout << "指针iptr指向的地址：" << iptr << endl;
    cout << "取出iptr指向的地址的值：" << *iptr << endl;

    *iptr = 20;

    cout << "变量var的值：" << var << endl;
    cout << "取出iptr指向的地址的值：" << *iptr << endl;

    void *vptr = &var;

    // 下面语句会报错，void类型指针不可取值
    // cout << *vptr << endl;

    // 转型为int类型指针并指定给另个指针iptr
    iptr = reinterpret_cast<int*>(vptr);
    cout << "取出iptr指向的地址的值：" << *iptr << endl;

//    delete vptr;
//    delete iptr;

    // const声明的变量一旦被指定就不可改变
    // const声明的变量必须使用对应的const类型指针，同样指针值不可改变
    // const指针也不可以赋值新的位置

    // 指针运算
    int *ipt = 0;
    cout << "ipt位置：" << ipt << endl;
    cout << "ipt + 1：" << ipt+1 << endl;
    cout << "ipt + 2：" << ipt+2 << endl;

    delete ipt;

    double *dpt = 0;
    cout << "dpt位置：" << dpt << endl;
    cout << "dpt + 1：" << dpt+1 << endl;
    cout << "dpt + 2：" << dpt+2 << endl;

    delete dpt;

    // pointer & array
    const int length = 5;
    int arr[length] = {10, 20, 30, 40, 50};
    int *aptr = arr;

    cout << "arr: \t\t" << arr << endl;
    cout << "&arr[0]: \t" << &arr[0] <<endl;

    for(int i = 0; i < length; i++){
        cout << "&arr[" << i << "]: " << &arr[i];
        cout << "\taptr+" << i << ": " << aptr+i << endl;
    }cout << endl;

    // pointer 以指针和阵列存取资料
    for(int i = 0; i < length; i++){
        cout << "*(aptr+" << i << "): " << *(aptr+i);
        cout << "\taptr[" << i << "]: " << aptr[i] << endl;
    }cout << endl;

    // array 以指针和数组存取资料
    for(int i = 0; i < length; i++){
        cout << "*(arr+" << i << "): " << *(arr+i);
        cout << "\tarr[" << i << "]: " << arr[i] << endl;
    }cout << endl;

//    delete [] aptr;

    // pointer's new & delete
    int *niptr = new int(100);

    cout << "空间位置：" << niptr << endl;
    cout << "空间储存值：" << *niptr << endl;

    *niptr = 200;

    cout << "空间位置：" << niptr << endl;
    cout << "空间储存值：" << *niptr << endl;

    delete niptr;

    // array's pointer new & delete
    int size = 0;

    cout << "请输入阵列长度：";
    cin >> size;
    int *arptr = new int[size];

    cout << "指定元素值：" << endl;
    for(int i = 0;i < size; i++){
        cout << "arr[" << i << "] = ";
        cin >> *(arptr+i);
    }

    cout << "显示元素值：" << endl;
    for(int i = 0; i < size; i++){
        cout << "arr[" << i << "] = " << *(arptr+i) << endl;
    }

    delete [] arptr;

    // 2 dimension array's pointer new & delete
    int row = 0;
    int col = 0;

    cout << "输入二维数组维度：";
    cin >> row >> col;

    int *twoarptr = new int[row*col];

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if((i+j) >= row)
                *(twoarptr + col*i + j) = (row+col-2) - (i+j);
            else
                *(twoarptr + col*i + j) = i + j;
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
                cout << *(twoarptr+col*i+j) << "\t";
        }cout << endl;
    }

    delete [] twoarptr;

    // pointer's pointer牵丝
    int p = 10;
    int *ptr1 = &p;
    int **ptr2 = &ptr1;

    cout << "p的值：" << p << endl;
    cout << "p的记忆体位址：" << &p << endl << endl;

    cout << "*ptr1 = " << *ptr1 << endl;
    cout << "ptr1 = " << ptr1 << endl;
    cout << "ptr1的记忆体位置：" << &ptr1 << endl << endl;

    cout << "**ptr2 = " << **ptr2 << endl;
    cout << "*ptr2 = " << *ptr2 << endl;
    cout << "ptr2 = " << ptr2 << endl << endl;

    cout << "整理（谁储存了谁？）：" << endl;
    cout << "&p = " << &p << "\t\t" << "ptr1 = " << ptr1 << endl;
    cout << "&ptr1 = " << &ptr1 << "\t" << "ptr2 = " << ptr2 << endl << endl;

//    delete ptr2, ptr1;

    // pointer & string
    char *strptr = "hello";
    void *add = 0;

    add = strptr;
    cout << strptr << "\t" << add << endl;

    strptr = "world";
    add = strptr;
    cout << strptr << "\t" << add << endl;

    delete add, strptr;

    // pointer's array
    char *strarrptr[] = {"professor", "teacher", "student", "etc."};

    for(int i = 0; i < 4; i++){
        cout << strarrptr[i] << endl;
    }

//    delete [] strarrptr;

    // 2dimension pointer's array
    char *strtarrptr[][2] = {"professor", "Justin", "teacher", "Momor",
                            "student", "Caterpillar"};

    for(int i = 0; i < 3; i++){
        cout << strtarrptr[i][0] << ": " << strtarrptr[i][1] << endl;
    }

//    delete [] strtarrptr;

    /*
        char *str1[] = {"professor", "Justin", "etc."};
        char str2[3][10] = {"professor", "Justin", "etc."};
        二者不同，第一个是指针阵列，每一个指针指向一个字符串，只要另外指定
        字符串赋值给某个指针，则该指针指向的位址就不同了。
        第二个是连续3x10字阵列空间，字符串直接储存这个空间，每个字符串的
        位址固定，空间也固定。
    */

    // reference 表示变量的一个别名(Alias)，参考型态可以直接取得变量的位址
    // 并间接通过参考型态来操作变量，作用类似于指针，但却不必使用指针语法。

    int iref = 10;
    // 参考型态必须初始化，因为初始化之后就不能改变它所代表的变量。
    int &ref = iref;

    cout << "iref: " << iref << endl;
    cout << "ref: " << ref << endl;

    ref = 20;// 常量不可以定址，其实为改变iref值
    // const int &ref = iref 的话不可重新指定值给ref

    cout << "iref: " << iref << endl;
    cout << "ref: " << ref << endl;

    /*
        指针型的参考新建
        int var = 10;
        int *ptr = &var;
        int *&ref = ptr;
        后面函数介绍传参考(pass by reference)
    */

    // function
    int fnum = 0;
    int fpower = 0;

    cout << "输入数值：";
    cin >> fnum;
    cout << "输入平方：";
    cin >> fpower;

    cout << fnum << " 平方：" << pow2(fnum) << endl;
    cout << fnum << " 的" << fpower << "次方：" << pow(fnum, fpower) << endl;

    // 预设参数
    double r, pi;

    cout << "输入半径与PI:";
    cin >> r >> pi;

    cout << "面积(自定PI): " << area(r, pi) << endl;
    cout << "面积(default); " << area(r) << endl;

    // 重载
    showpara(10);
    showpara(20, 30);
    showpara(10.0);

    // 变量可视范围
    i = 100;
    for(int i = 0;i < 10; i++){
        // static参数一旦生成，会一直存在于记忆体中
        count();
    }
    // 这里的i随着for循环结束重新赋值为100
    cout << i << endl;

    /*
        extern声明参数在其他的位置被定义，可能是在同一个文件中，也可能在其他文件中
        FALSE:
        extern double someVar = 2000; // error, 'someVar' has both 'extern' and initializer
        TRUE:
        extern double someVar;
        someVar = 2000;
    */

    // 递归Recursion
    int gcd_m = 0;
    int gcd_n = 0;

    cout << "输入两数求最大公约数：";
    cin >> gcd_m >> gcd_n;

    cout << "GCD using Recursion: "
         << gcd_r(gcd_m, gcd_n) << endl;
    cout << "GCD without Recursion: "
         << gcd(gcd_m, gcd_n) << endl;

    // 传值还是传引用
    int x = 10;

    cout << increment(x) << endl;
    cout << x << endl;
    cout << increment(&x) << endl;
    cout << x << endl;

    // return 的传值、传参考
    int return_m = 0;
    cout  << "阵列大小：";
    cin >> return_m;

    int *return_arr = createArray(return_m);
    for(int i = 0; i < return_m; i++){
        return_arr[i] = i;
    }

    for(int i = 0; i < return_m; i++){
        cout << "arr[" << i << "] = " << return_arr[i] << endl;
    }
    deleteArray(return_arr);

    // return 传物件，字符串
    string return_str = foo();// 声明return_str时接收返回值，指向同一个地址

    cout << "address: " << &return_str << endl << return_str << endl;

    return_str = foo();// 指定新字符串，会复制一份

    cout << "address: " << &return_str << endl << return_str << endl;

    string &return_str1 = foo1();

    cout << "address: " << &return_str1 << endl << return_str1 << endl;
    delete &return_str1;

    // 不定长度参数

    return 0;
}

