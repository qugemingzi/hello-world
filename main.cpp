#include <iostream>

using namespace std;

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

    return 0;
}
