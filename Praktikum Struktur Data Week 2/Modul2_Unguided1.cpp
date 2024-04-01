#include <iostream>
using namespace std;
int main()
{
    int maksimal = 10;
    int n[maksimal];
    cout << "Masukkan Data Array" << endl;
    for (int i = 0; i < maksimal; i++)
    {
        cout << "Angka ke-" << i + 1 << " : ";
        cin >> n[i];
    }
    cout << "\nData Array : ";
    for (int i = 0; i < maksimal; i++)
    {
        cout << n[i] << " ";
    }
    cout << "\nNomor Genap : ";
    for (int i = 0; i < maksimal; i++)
    {
        if (n[i] % 2 == 0)
        {
            cout << n[i] << ", ";
        }
    }
    cout << "\nNomor Ganjil : ";
    for (int i = 0; i < maksimal; i++)
    {
        if (n[i] % 2 == 1)
        {
            cout << n[i] << ", ";
        }
    }
}
