#include <iostream>

using namespace std;

bool more(){
    bool replay = false;
    cout << "还要继续玩么？" << endl;
    cin >> replay;
    return replay;
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
        cout << rand() % 100 << endl;
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

    return 0;
}
