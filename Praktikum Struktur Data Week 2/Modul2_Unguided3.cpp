#include <iostream>
using namespace std;

int minimal,maksimal;
double ratarata,jumlah;
int nilai[10];

int main (){
    int minimal,maksimal;
    double ratarata,jumlah;
    int nilai[10];

    cout<<"Masukkan 10 Nilai Array\n";
    for (int i = 0; i < 10; i++)
    {
        cout << "Nilai ke " << i+1 <<" : ";
        cin >> nilai[i];
    }
    cout << endl;

    cout << "Nilai Array: ";
    for (int i = 0; i < 10; i++)
    {
        cout << nilai[i]<<" ";
    }
    cout << endl;

    maksimal = nilai[0];
    for (int i = 0; i < 10; i++)
    {
        if (maksimal < nilai[i])
        {
            maksimal = nilai[i];
        }
    }
    cout << "Nilai Maksimum: "<< maksimal <<endl;
  
    minimal = nilai[0];
    for (int i = 0; i < 10; i++)
    {
        if (minimal > nilai[i])
        {
            minimal = nilai[i];
        }
    }
    cout << "Nilai Minimal: " << minimal <<endl;
    
    for (int i = 0; i < 10; i++)
    {
    jumlah += nilai[i];
    ratarata= jumlah/10;
    }
    cout << "Rata-rata: " << ratarata;
    return 0;
}
