// lab6.3.1.cpp
// Кузьмінська Єлизавета
// Лабораторна робота № 6.3
// Опрацювання одновимірних масивів за допомогою звичайних функцій та шаблонів
// Варіант 10
#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int n, int Low, int High) {
    for (int i = 0; i < n; i++)
        a[i] = Low + rand() % (High - Low + 1);
}
template<typename T>
void Create(T* a, const int n, int Low, int High) {
    for (int i = 0; i < n; i++)
        a[i] = (T)Low + rand() % (High - Low + 1);
}
void Print(int* a, const int n) {
    for (int i = 0; i < n; i++)
        cout << setw(4) << a[i];
    cout << endl;
}
template <typename T>
void Print(T* a, const int n) {
    for (int i = 0; i < n; i++)
        cout << setw(4) << a[i];
    cout << endl;
}
int Min(int* a, const int n) {
    int min = a[0];
    for (int i = 0; i < n; i++)
        if (a[i] < min)
            min = a[i];
    return min;
}
template <typename T>
int Min(T* a, const int n) {
    int min = a[0];
    for (int i = 0; i < n; i++)
        if (a[i] < min)
            min = a[i];
    return min;
}
int main()
{
    srand((unsigned)time(NULL));
    int n;
    cout << "n="; cin >> n;
    int* a = new int[n];
    int Low;
    cout << "Low="; cin >> Low;
    int High;
    cout << "High="; cin >> High;
    Create(a, n, Low, High);
    Print(a, n);
    cout << " min = " << Min(a, n) << endl;
    return 0;
}
