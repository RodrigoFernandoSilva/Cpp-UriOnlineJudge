#include <iostream>
#include <iomanip>

#define PESO1 3.5
#define PESO2 7.5

using namespace std;

int main(){

    double nota1;
    double nota2;
    double MEDIA;

    cin >> nota1;
    cin >> nota2;

    MEDIA = (nota1 * PESO1);
    MEDIA += (nota2 * PESO2);
    MEDIA /= (PESO1 + PESO2);
    cout << fixed << setprecision(5) << "MEDIA = " << MEDIA << endl;

    return 0;
}
