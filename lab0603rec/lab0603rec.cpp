
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void Print(int a[], const int size, int i = 0);
void Inverse(int a[], const int size, int i = 0);


template <typename T>
void Print(T a[], const int size, int i = 0);

template <typename T>
void Inverse(T a[], const int size, int i = 0);

int main()
{
    const int n = 5;

    int a[n] = { 1, 2, 3, 4, 5 };

    cout << "Print(a, n):   ";
    Print(a, n, 0);

    Inverse(a, n, 0);
    cout << "Inverse(a, n): ";
    Print(a, n, 0);
    cout << endl;

    a[0] = 1; a[1] = 2; a[2] = 3; a[3] = 4; a[4] = 5;

    cout << "Print<int>(a, n):   ";
    Print<int>(a, n, 0);

    Inverse<int>(a, n, 0);
    cout << "Inverse<int>(a, n): ";
    Print<int>(a, n, 0);
    cout << endl;

    double b[n] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

    cout << "Print<double>(b, n):   ";
    Print<double>(b, n, 0);

    Inverse<double>(b, n, 0);
    cout << "Inverse<double>(b, n): ";
    Print<double>(b, n, 0);
    cout << endl;

    string c[n] = { "aa", "bb", "cc", "dd", "ee" };

    cout << "Print<string>(c, n):   ";
    Print<string>(c, n, 0);

    Inverse<string>(c, n, 0);
    cout << "Inverse<string>(c, n): ";
    Print<string>(c, n, 0);
    cout << endl;

    return 0;
}

void Print(int a[], const int size, int i)
{
    cout << setw(8) << a[i];
    if (i < size - 1)
        Print(a, size, i + 1);
    else
        cout << endl;
}

void Inverse(int a[], const int size, int i)
{
    int t = a[i];
    a[i] = a[size - 1 - i];
    a[size - 1 - i] = t;

    if (i < size / 2 - 1)
        Inverse(a, size, i + 1);
}

template <typename T>
void Print(T a[], const int size, int i)
{
    cout << setw(8) << a[i];
    if (i < size - 1)
        Print<T>(a, size, i + 1);
    else
        cout << endl;
}

template <typename T>
void Inverse(T a[], const int size, int i)
{
    T t = a[i];
    a[i] = a[size - 1 - i];
    a[size - 1 - i] = t;

    if (i < size / 2 - 1)
        Inverse<T>(a, size, i + 1);
}