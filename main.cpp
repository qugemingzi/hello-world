#include <iostream>
#include<vector>
#include<algorithm>

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

    return 0;
}
