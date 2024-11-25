#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;


void init_mas_recursive(int a[], const int k, int i = 0);
void print_recursive(int a[], int size, int i = 0);
int sum_elements_recursive(int mas[], const int n, int i = 0);


template <typename T>
T sum_elements_template_recursive(T mas[], const int n, int i);
template <typename T>
void init_mas_template_recursive(T a[], const int k, int i);
template <typename T>
void print_recursive_template_recursive(T a[], const int size, int i);

int main() {

    srand((unsigned)time(NULL));
    const int k = 24;
    int a[k];

    cout << "\n<Recursive method>" << endl;
    init_mas_recursive(a, k);
    print_recursive(a, k);
    cout << "\nSum: " << sum_elements_recursive(a, k) << endl;

    cout << "\n<Template function>" << endl;
    init_mas_template_recursive(a, k, 0);
    print_recursive_template_recursive(a, k, 0);
    cout << "Sum: " << sum_elements_template_recursive(a, k, 0) << endl;

    return 0;
}

void init_mas_recursive(int a[], const int k, int i) {
    if (i < k) {
        a[i] = -50 + rand() % (65 + 1);
        init_mas_recursive(a, k, i + 1);
    }
}

void print_recursive(int a[], int size, int i) {
    if (i < size) {
        cout << setw(4) << a[i];
        print_recursive(a, size, i + 1);
    }
    else {
        cout << endl;
    }
}

int sum_elements_recursive(int mas[], const int n, int i) {
    if (i >= n)
        return 0;
    return pow(mas[i], 2) + sum_elements_recursive(mas, n, i + 1);
}


template <typename T>
void init_mas_template_recursive(T a[], const int k, int i) {
    if (i < k) {
        a[i] = -50 + rand() % (65 + 1);
        init_mas_template_recursive(a, k, i + 1);
    }
}

template <typename T>
void print_recursive_template_recursive(T a[], const int size, int i) {
    if (i < size) {
        cout << setw(4) << a[i];
        print_recursive_template_recursive(a, size, i + 1);
    }
    else {
        cout << endl;
    }
}

template <typename T>
T sum_elements_template_recursive(T mas[], const int n, int i) {
    if (i >= n)
        return 0;
    return pow(mas[i], 2) + sum_elements_template_recursive(mas, n, i + 1);
}

