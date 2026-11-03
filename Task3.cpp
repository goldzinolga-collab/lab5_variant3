#include <iostream>
using namespace std;

int tickets(int adult, int child) {
    return adult + child;
}

int tickets(int adult, int child, int student) {
    return adult + child + student;
}

int main() {
    setlocale(LC_ALL, "Russian");

    cout << "Взрослый и ребенок: " << tickets(2, 1) << endl;
    cout << "Взрослый, ребенок и студент: " << tickets(2, 1, 3) << endl;

    return 0;
}
