#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int user = 0;
    int comp = 0;
    cout << "1) Rock \n2) Paper\n3) Scissors" << endl;
    cin >> user;

    if (user == 1) {
        cout << "You chose Rock" << endl;
    } else if (user == 2) {
        cout << "You chose Paper" << endl;
    } else if (user == 3) {
        cout << "You chose Scissors" << endl;
    } else {
        cout << "Wrong input" << endl;
        return 1;
    }
    comp = rand() % 3 + 1;
    if (comp == 1) {
        cout << "Computer chose Rock" << endl;
    } else if (comp == 2) {
        cout << "Computer chose Paper" << endl;
    } else {
        cout << "Computer chose Scissors" << endl;
    }
    // WIN / LOSE / DRAW logic
    if (user == comp) {
        cout << "Draw" << endl;
    } else if ((user == 1 && comp == 3) ||
               (user == 2 && comp == 1) ||
               (user == 3 && comp == 2)) {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }
    return 0;
}
