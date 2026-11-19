#include <iostream>
using namespace std;

void sellTicket(int& seats) {
    if (seats > 0) {
        seats = seats - 1;
    }
}

int main() {
    int s1 = 3;
    cout << "До: " << s1 << endl;
    sellTicket(s1);
    cout << "После: " << s1 << endl;

    int s2 = 0;
    cout << "До: " << s2 << endl;
    sellTicket(s2);
    cout << "После: " << s2 << endl;
    return 0;
}
