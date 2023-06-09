//
// Created by Paul on 2023/6/8.
//

#include <iostream>

using namespace std;
using wage = double;


void swap(int arr[], int i, int j);

int getInt();

int main() {
    cout << "Hello, World!";
    long double ld = 3.141551231;
//    int a {ld}, b = {ld}; // 非法
    int c(ld), d = ld;
    int arr[] = {1, 2, 3};
    int a = 4.2;
    double salary, eage = 1.11;
    swap(arr, 1, 2);
//    extern int i; // 声明而不是定义
    int j; // 定义
    int _v1 = 1;
//    int _V2 = 3; // 变量定义不能两个连续的下划线或下划线接大写字母开头
    int _ = 1;
    cout << _ << endl;
    int t = 100, sum = 0;
    for (int t = 0; t != 10; ++t) {
        sum += t;
        cout << t << ":" << sum << endl;
    }

    int zero = 0;

    int *ptr = &zero;

    int *&ptr_ref = ptr;

    cout << "*ptr = " << *ptr << "ptr = " << ptr << endl << "&ptr = " << &ptr << endl;
    cout << "*&ptr_ref = " << *&ptr_ref << "ptr_ref = " << ptr_ref << "*prt_ref = " << *ptr_ref << "&ptr_ref = "
         << &ptr_ref << endl;


    int aa = 42;
    int *ap = &aa;
    *ap = *ap * *ap;

    cout << 42 * 42 << endl;
    cout << *ap << ":" << aa << endl;

    int err_num = 10;

    // 常量指针， 指针是个常量，指针存放的是地址， 那么常量指针就不能修改地址，即重新赋予地址值
    // 指针常量， 表示所指的对象是个常量， 则原对象值不能被修改， 指针的值可以修改
    int *const err = &err_num;
    int erra = 1;
    *err = 1;
    int errb = 2;
    int const *errap = &erra;

    errap = &errb;

    constexpr int ef = 1;

    constexpr int ea = 1 + 1;

//    constexpr int eb = getInt();

    wage dd = 1.11;
    cout << dd << endl;


    auto sz = 1.1, ba = 1.1;
//    auto  as = 1, *p = &i;
    return 0;
    const int saa = 1;

}

void swap(int arr[], int i, int j) {
    int temp;
    cout << temp << endl;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] =  temp;
}


int getInt() {
    return 1;
}
