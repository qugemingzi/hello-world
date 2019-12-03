#include <stdio.h>
#include <math.h>

// 10 -> 2,8,16
void d_z(int a, int data){
    if(a == 10){
        printf("转换结果 %d\n", data);
    }else if(a != 16){
        int k = 1, result = 0, rest;
        while(data > 0){
            rest = data % a;
            result += k * rest;
            k *= 10;
            data /= a;
        }
        printf("转换结果 %d\n", result);
    }else{
        int i = 0, rest;
        int a[100];
        char hex[16] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
        while(data > 0){
            rest = data % 16;
            a[i++] = rest;
            data /= 16;
        }
        printf("转换结果 ");
        for(i = i -1; i >= 0; i--){
            printf("%c", hex[a[i]]);
        }
        printf("\n");
    }
}

// 2,8,16 -> 10
int z_d(int b, int data){
    int result = 0;
    if(b == 2 || b == 8){
        int i = 0, rest;
        while(data > 0){
            rest = data % 10;
            data /= 10;
            result += rest*pow(b, i);
            ++i;
        }
    }else if(b == 16 || b == 10){
        result = data;
    }

    return result;
}

// b进制 -> a进制
// b,a为2,8,10,16
void converse(int b, int a){
    printf("请输入%d进制数：", b);
    int data;
    if(b != 16)
        scanf("%d", &data);
    else
        scanf("%x", &data);
    int d_data = z_d(b, data);
    printf("%d", d_data);
    d_z(a, d_data);
}

void start(){
    printf("请输入原始数据进制：");
    int b;
    scanf("%d", &b);
    printf("请输入转化数据进制：");
    int a;
    scanf("%d", &a);

    converse(b, a);
}

int main(){
    start();
    return 0;
}
