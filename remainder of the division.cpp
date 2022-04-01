#include <stdio.h> 
#include <iostream> 
#include <locale.h> 
#include <windows.h> 
using namespace std;

int main(int argc, char* argv[])
{
    setlocale(LC_CTYPE,"Russian");
    double mod;
    double a; 
    double b; 
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "a mod b  = " << a % b  << endl; 
    system("pause");
    return 0;
}