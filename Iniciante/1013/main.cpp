#include <iostream>

using namespace std;

int main() {

    int a;
    int b;
    int c;

    cin >> a;

    cin >> b;

    cin >> c;

    int maior;
    maior = (a + b + abs(a - b)) / 2;
    maior = (maior + c + abs(maior - c)) / 2;
    cout << maior << " eh o maior" << endl;

    return 0;
}
