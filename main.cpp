#include <iostream>
using namespace std;

int main() {

    int primo, secondo, somma;
    int n;
    primo = 1;
    secondo=0;
    cin >> n;
    if (n >= 2) {
        for (int i = 0; i < n ; i++)
        { somma = primo + secondo,
            primo = secondo;
            secondo = somma;
            cout << somma << endl;}

        } else {
            cout << "errore" << endl;
        }
        return 0;
}
