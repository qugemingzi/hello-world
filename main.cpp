#include <iostream>

using namespace std;

bool more(){
    bool replay = false;
    cout << "��Ҫ������ô��" << endl;
    cin >> replay;
    return replay;
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
        cout << rand() % 100 << endl;
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

    return 0;
}
