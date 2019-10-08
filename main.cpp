#include <iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<string>

using namespace std;

bool more(){
    int replay = 0;
    cout << "还要继续玩么？ 0表示不玩了" << endl;
    cin >> replay;
    return (replay == 0) ? false : true;
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

    delete iptr;
    delete vptr;

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

    delete [] aptr;

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

    // pointer's pointer
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
    cout << "&ptr1 = " << &ptr1 << "\t" << "ptr2 = " << ptr2 << endl;

    delete ptr2, ptr1;


    return 0;
}

