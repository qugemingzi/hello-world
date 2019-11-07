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
    cout << "��Ҫ������ô�� 0��ʾ������" << endl;
    cin >> replay;
    return (replay == 0) ? false : true;
}

// ת�Ƶ�math.h��math.cpp�ļ�����
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
    ���Ԥ�����ʱ��Ԥ������ұ߱���Ԥ�������ע�����˳��
    e.g.
    TRUE: double volumn(double l, double w = 1.0, double h = 1.0);
    FALSE: double volumn(double h = 1.0, double w = 1.0, double l);
    �������ж��Ԥ�����ʱ������ʱ��Ҫע�⣬Ԥ��������Բ���˳����е�
    e.g.
    bool setScreen(int width = 80, int height = 24, char bkcolor = '');
    ������ǵ���setScreen('R');���൱��setScreen('R', 24, '');
    ������setScreen(80, 24, 'R');��setScreen(,,'R')�Ǵ���ġ�
*/

void showpara(int x){
    cout << "int ������" << x << endl;
}

void showpara(int x, int y){
    cout << "int ������" << x << "\t" << y << endl;
}

void showpara(double x){
    cout << "double ������" << x << endl;
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

// ��ֵ
int increment(int n){
    return ++n;
}

// ������
int increment(int *n){
    return ++*n;
}


// ���ؽ��������е�ַ
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
    cout << "����\"pray chow!\"\n" << endl;

    cout << "��̬\t��С(bytes)\n";
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

    cout << 26 << "\n"; // ʮ����
    cout << 032 << "\n"; // �˽���
    cout << 0x1A << "\n"; // ʮ������

    int ageForStudent;
    double scoreForStudent;
    char levelForStudent;

    cout << "�꼶\t�÷�\t�ȼ�\n";
    cout << ageForStudent << "\t"
         << scoreForStudent << "\t"
         << levelForStudent << "\n";

    ageForStudent = 5;
    scoreForStudent = 80.0;
    levelForStudent = 'B';

    cout << "�꼶\t�÷�\t�ȼ�\n";
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
    cout << "����������: ";
    cin >> input;
    cout << "���������: " << input << endl;
    cout << "����Ϊ����ô����ȡ�ࣩ" << (input%2 ? 'Y':'N') << endl;
    // λԪ�ڱΣ�����Ч��
    cout << "����Ϊ����ô����λ�룩" << (input&1 ? 'Y':'N') << endl;

    cout << "AND���㣺" << endl;
    cout << "0 AND 0\t\t" << (0 & 0) << endl;
    cout << "0 AND 1\t\t" << (0 & 1) << endl;
    cout << "1 AND 0\t\t" << (1 & 0) << endl;
    cout << "1 AND 1\t\t" << (1 & 1) << endl;

    cout << "OR���㣺" << endl;
    cout << "0 OR 0\t\t" << (0 | 0) << endl;
    cout << "0 OR 1\t\t" << (0 | 1) << endl;
    cout << "1 OR 0\t\t" << (1 | 0) << endl;
    cout << "1 OR 1\t\t" << (1 | 1) << endl;

    cout << "XOR���㣺" << endl;
    cout << "0 XOR 0\t\t" << (0 ^ 0) << endl;
    cout << "0 XOR 1\t\t" << (0 ^ 1) << endl;
    cout << "1 XOR 0\t\t" << (1 ^ 0) << endl;
    cout << "1 XOR 1\t\t" << (1 ^ 1) << endl;

    cout << "NOT���㣺" << endl;
    cout << "NOT 0\t\t" << (!0) << endl;
    cout << "NOT 1\t\t" << (!1) << endl;

    char num = 200;
    cout << static_cast<int>(~num) << endl;

    int level = (input % 101) / 10;
    switch(level){
    case 10:
        cout << "����" << endl;
    case 9:
        cout << "��A" << endl;
        break;
    case 8:
        cout << "��B" << endl;
        break;
    case 7:
        cout << "��C" << endl;
        break;
    case 6:
        cout << "��D" << endl;
        break;
    default:
        cout << "��E(������)" << endl;
    }

    do {
        cout << "������������";
        cin >> input;
        cout << "����Ϊ������" << ((input % 2) ? 'Y': 'N') << "\n";
    } while(more());

    // array 2 vector
    int iarr[] = {1, 2, 3, 4, 5};
    vector<int> ivector(iarr + 1, iarr + 4);
    for(int i = 0; i < ivector.size(); i++){
        cout << ivector[i] << " ";
    }cout << endl;

    // vector 2 vector
    vector<int> ivector1(5, 1);
    vector<int> ivector2;// ����һ���յ�vector

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

    // vector��������
    // ��ֵ
    for(int i = 90; i < 100; i++){
        ivector.push_back(190 - i);
    }

    // iterator ����
    for(vector<int>::iterator it = ivector.begin();
        it != ivector.end();
        it++){
            cout << *it << " ";
    }cout << endl;

    cout << "capacity: " << ivector.capacity() << endl;
    cout << "size: " << ivector.size() << endl;

    // sort ����
    sort(ivector.begin(), ivector.end());

    for(vector<int>::iterator it = ivector.begin();
        it != ivector.end();
        it++){
            cout << *it << " ";
    }cout << endl;

    // find ����
    int isearch = 0;
    int bsearch = 1;
    while(bsearch != 0){
        cout << "��������Ѱֵ��";
        cin >> isearch;

        vector<int>::iterator it = find(ivector.begin(), ivector.end(), isearch);
        if(it != ivector.end()){
            cout << "�ҵ�����ֵ��" << endl;
        }else{
            cout << "�Ҳ�������ֵ��" << endl;
        }

        cout << "����������ô�� 0��ʾ������" << endl;
        cin >> bsearch;
    }

    // reverse ��ת
    reverse(ivector.begin(), ivector.end());
    for(vector<int>::iterator it = ivector.begin();
        it != ivector.end();
        it++){
            cout << *it << " ";
    }cout << endl;

    // cstring ʹ��
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

    // ��str2���Ƹ�str1
    strcpy(cstr1, cstr2);
    cout << "cstr1: " << cstr1 << endl
         << "cstr2: " << cstr2 << endl
         << endl;

    // ��str2����str1��
    strcat(cstr1, cstr2);
    cout << "cstr1: " << cstr1 << endl
         << "cstr2: " << cstr2 << endl
         << endl;

    cout << "cstr1���ȣ�" << strlen(cstr1) << endl
         << "cstr2���ȣ�" << strlen(cstr2) << endl
         << endl;

    cout << "cstr1��cstr2�Ƚϣ�" << strcmp(cstr1, cstr2) << endl
         << endl;

    // string Ӧ��
    string str1;
    string str2("caterpillar");
    string str3(str2);

    if(str1.empty()){
        cout << "str1 Ϊ���ִ�" << endl;
    }

    cout << "str1 ����: " << str1.size() << endl;
    cout << "str2 ����: " << str2.size() << endl;
    cout << "str3 ����: " << str3.size() << endl;

    if(str1 == str2) {
        cout << "str1 �� str2 ������ͬ" << endl;
    }

    if(str3 == str2) {
        cout << "str3 �� str2 ������ͬ" << endl;
    }

    str1 = cstr1; // okay
    cout << "str1: " << str1 << endl;
//    cstr1 = str1 // error

    // assign: ָ���ִ�
    str1 = str1.assign(str2, 0, 5);
    cout << "str1: " << str1 << endl;
    str1 = str1.assign("caterpillar", 5, 6);
    cout << "str1: " << str1 << endl;

    str1 = "";

    // append: �ִ�����
    str1 = str1.append(str2, 0, 5);
    str1 = str1.append(str3, 5, 6);
    cout << "str1: " << str1 << endl;

    // find: Ѱ���ִ�λ��
    cout << "Ѱ��str1�еĵ�һ��pill: "
         << str1.find("pill", 0) << endl;

    // insert: �����ִ�
    cout << "��str1�����ִ�***: "
         << str1.insert(5, "***") << endl;

    cout << "str1����: " << str1.length() << endl;

    // pointer
    int var = 10;
    int *iptr = &var;

    cout << "����var��ֵ��" << var << endl;
    cout << "����var��λ��ַ��" << &var << endl;
    cout << "ָ��iptrָ��ĵ�ַ��" << iptr << endl;
    cout << "ȡ��iptrָ��ĵ�ַ��ֵ��" << *iptr << endl;

    *iptr = 20;

    cout << "����var��ֵ��" << var << endl;
    cout << "ȡ��iptrָ��ĵ�ַ��ֵ��" << *iptr << endl;

    void *vptr = &var;

    // �������ᱨ��void����ָ�벻��ȡֵ
    // cout << *vptr << endl;

    // ת��Ϊint����ָ�벢ָ�������ָ��iptr
    iptr = reinterpret_cast<int*>(vptr);
    cout << "ȡ��iptrָ��ĵ�ַ��ֵ��" << *iptr << endl;

//    delete vptr;
//    delete iptr;

    // const�����ı���һ����ָ���Ͳ��ɸı�
    // const�����ı�������ʹ�ö�Ӧ��const����ָ�룬ͬ��ָ��ֵ���ɸı�
    // constָ��Ҳ�����Ը�ֵ�µ�λ��

    // ָ������
    int *ipt = 0;
    cout << "iptλ�ã�" << ipt << endl;
    cout << "ipt + 1��" << ipt+1 << endl;
    cout << "ipt + 2��" << ipt+2 << endl;

    delete ipt;

    double *dpt = 0;
    cout << "dptλ�ã�" << dpt << endl;
    cout << "dpt + 1��" << dpt+1 << endl;
    cout << "dpt + 2��" << dpt+2 << endl;

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

    // pointer ��ָ������д�ȡ����
    for(int i = 0; i < length; i++){
        cout << "*(aptr+" << i << "): " << *(aptr+i);
        cout << "\taptr[" << i << "]: " << aptr[i] << endl;
    }cout << endl;

    // array ��ָ��������ȡ����
    for(int i = 0; i < length; i++){
        cout << "*(arr+" << i << "): " << *(arr+i);
        cout << "\tarr[" << i << "]: " << arr[i] << endl;
    }cout << endl;

//    delete [] aptr;

    // pointer's new & delete
    int *niptr = new int(100);

    cout << "�ռ�λ�ã�" << niptr << endl;
    cout << "�ռ䴢��ֵ��" << *niptr << endl;

    *niptr = 200;

    cout << "�ռ�λ�ã�" << niptr << endl;
    cout << "�ռ䴢��ֵ��" << *niptr << endl;

    delete niptr;

    // array's pointer new & delete
    int size = 0;

    cout << "���������г��ȣ�";
    cin >> size;
    int *arptr = new int[size];

    cout << "ָ��Ԫ��ֵ��" << endl;
    for(int i = 0;i < size; i++){
        cout << "arr[" << i << "] = ";
        cin >> *(arptr+i);
    }

    cout << "��ʾԪ��ֵ��" << endl;
    for(int i = 0; i < size; i++){
        cout << "arr[" << i << "] = " << *(arptr+i) << endl;
    }

    delete [] arptr;

    // 2 dimension array's pointer new & delete
    int row = 0;
    int col = 0;

    cout << "�����ά����ά�ȣ�";
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

    // pointer's pointerǣ˿
    int p = 10;
    int *ptr1 = &p;
    int **ptr2 = &ptr1;

    cout << "p��ֵ��" << p << endl;
    cout << "p�ļ�����λַ��" << &p << endl << endl;

    cout << "*ptr1 = " << *ptr1 << endl;
    cout << "ptr1 = " << ptr1 << endl;
    cout << "ptr1�ļ�����λ�ã�" << &ptr1 << endl << endl;

    cout << "**ptr2 = " << **ptr2 << endl;
    cout << "*ptr2 = " << *ptr2 << endl;
    cout << "ptr2 = " << ptr2 << endl << endl;

    cout << "����˭������˭������" << endl;
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
        ���߲�ͬ����һ����ָ�����У�ÿһ��ָ��ָ��һ���ַ�����ֻҪ����ָ��
        �ַ�����ֵ��ĳ��ָ�룬���ָ��ָ���λַ�Ͳ�ͬ�ˡ�
        �ڶ���������3x10�����пռ䣬�ַ���ֱ�Ӵ�������ռ䣬ÿ���ַ�����
        λַ�̶����ռ�Ҳ�̶���
    */

    // reference ��ʾ������һ������(Alias)���ο���̬����ֱ��ȡ�ñ�����λַ
    // �����ͨ���ο���̬����������������������ָ�룬��ȴ����ʹ��ָ���﷨��

    int iref = 10;
    // �ο���̬�����ʼ������Ϊ��ʼ��֮��Ͳ��ܸı���������ı�����
    int &ref = iref;

    cout << "iref: " << iref << endl;
    cout << "ref: " << ref << endl;

    ref = 20;// ���������Զ�ַ����ʵΪ�ı�irefֵ
    // const int &ref = iref �Ļ���������ָ��ֵ��ref

    cout << "iref: " << iref << endl;
    cout << "ref: " << ref << endl;

    /*
        ָ���͵Ĳο��½�
        int var = 10;
        int *ptr = &var;
        int *&ref = ptr;
        ���溯�����ܴ��ο�(pass by reference)
    */

    // function
    int fnum = 0;
    int fpower = 0;

    cout << "������ֵ��";
    cin >> fnum;
    cout << "����ƽ����";
    cin >> fpower;

    cout << fnum << " ƽ����" << pow2(fnum) << endl;
    cout << fnum << " ��" << fpower << "�η���" << pow(fnum, fpower) << endl;

    // Ԥ�����
    double r, pi;

    cout << "����뾶��PI:";
    cin >> r >> pi;

    cout << "���(�Զ�PI): " << area(r, pi) << endl;
    cout << "���(default); " << area(r) << endl;

    // ����
    showpara(10);
    showpara(20, 30);
    showpara(10.0);

    // �������ӷ�Χ
    i = 100;
    for(int i = 0;i < 10; i++){
        // static����һ�����ɣ���һֱ�����ڼ�������
        count();
    }
    // �����i����forѭ���������¸�ֵΪ100
    cout << i << endl;

    /*
        extern����������������λ�ñ����壬��������ͬһ���ļ��У�Ҳ�����������ļ���
        FALSE:
        extern double someVar = 2000; // error, 'someVar' has both 'extern' and initializer
        TRUE:
        extern double someVar;
        someVar = 2000;
    */

    // �ݹ�Recursion
    int gcd_m = 0;
    int gcd_n = 0;

    cout << "�������������Լ����";
    cin >> gcd_m >> gcd_n;

    cout << "GCD using Recursion: "
         << gcd_r(gcd_m, gcd_n) << endl;
    cout << "GCD without Recursion: "
         << gcd(gcd_m, gcd_n) << endl;

    // ��ֵ���Ǵ�����
    int x = 10;

    cout << increment(x) << endl;
    cout << x << endl;
    cout << increment(&x) << endl;
    cout << x << endl;

    // return �Ĵ�ֵ�����ο�
    int return_m = 0;
    cout  << "���д�С��";
    cin >> return_m;

    int *return_arr = createArray(return_m);
    for(int i = 0; i < return_m; i++){
        return_arr[i] = i;
    }

    for(int i = 0; i < return_m; i++){
        cout << "arr[" << i << "] = " << return_arr[i] << endl;
    }
    deleteArray(return_arr);

    // return ��������ַ���
    string return_str = foo();// ����return_strʱ���շ���ֵ��ָ��ͬһ����ַ

    cout << "address: " << &return_str << endl << return_str << endl;

    return_str = foo();// ָ�����ַ������Ḵ��һ��

    cout << "address: " << &return_str << endl << return_str << endl;

    string &return_str1 = foo1();

    cout << "address: " << &return_str1 << endl << return_str1 << endl;
    delete &return_str1;

    // �������Ȳ���

    return 0;
}

