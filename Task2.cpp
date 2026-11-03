
#include <iostream>
using namespace std;

void sellTicket(int& seats) {
    if (seats > 0) {
        seats = seats - 1;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    int freeSeats;

    cout << "Введите количество свободных мест: ";
    cin >> freeSeats;

    cout << "До: " << freeSeats << endl;

    sellTicket(freeSeats);

    cout << "После: " << freeSeats << endl;

    return 0;
}
