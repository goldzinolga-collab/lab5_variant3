#include <iostream>
using namespace std;

void printHall(int hall, int floor = 1) {
    cout << "Зал: " << hall << ", Этаж: " << floor << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");

    printHall(10);
    printHall(10, 2);

    return 0;
}
