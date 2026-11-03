#include <iostream>
using namespace std;

int ticketsCost(int price, int tickets) {
    return price * tickets;
}

int main() {
    setlocale(LC_ALL, "Russian");

    cout << "Стоимость 1: " << ticketsCost(150, 4) << endl;
    cout << "Стоимость 2: " << ticketsCost(200, 2) << endl;

    return 0;
}
