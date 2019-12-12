#include <iostream>
using namespace std;

int main() {
    int money;

    do {
        cout << "請輸入金額:";
        cin >> money;

    } while (money < 0);
        if (money >= 1000) {
            cout << money / 1000  << "張一千元" << "\n";
            money -= 1000 * (money / 1000);
        } else if (money >= 500) {
            cout << money / 500  << "張五百元" << "\n";
            money -= 500 * (money / 500);  
        } else if (money >= 100) {
            cout << money / 100  << "張一百元" << "\n";
            money -= 100 * (money / 100);
        } else if (money >= 50) {
            cout << money / 50  << "個五十元" << "\n";
            money -= 50 * (money / 50);
        } else if (money >= 10) {
            cout << money / 10  << "個十元" << "\n";
            money -= 10 * (money / 10);
        } else if (money >= 5) {
            cout << money / 5  << "個五元" << "\n";
            money -= 5 * (money / 5);
        } else {
            cout << money / 1 << "個一元" << "\n";
            money -= 1 * (money / 1);
        } 
    
}
