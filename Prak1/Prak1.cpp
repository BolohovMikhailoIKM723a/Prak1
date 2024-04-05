#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int number;
    int* ptr;   
    cout << "введіть число: ";
    cin >> number;
    ptr = &number; 
    cout << "значення числа: " << *ptr << endl;
    *ptr = 100;
    cout << "нове значення числа: " << *ptr << endl;
    return 0;
}