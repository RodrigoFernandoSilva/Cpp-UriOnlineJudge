#include <iostream>

using namespace std;

int main() {

    bool found;
    double n;
    int line;

    cin >> n;

    found = false;
    for (line = 0; line < 4; line ++) {
        if (line == 0 && n >= (line * 25) && n <= (line + 1) * 25) {
            cout << "Intervalo [" << (line * 25) << "," << ((line + 1) * 25) << "]" << endl;
            found = true;
            break;
        } else if (n > (line * 25) && n <= (line + 1) * 25) {
            cout << "Intervalo (" << (line * 25) << "," << ((line + 1) * 25) << "]" << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Fora de intervalo" << endl;
    }

    return 0;
}
