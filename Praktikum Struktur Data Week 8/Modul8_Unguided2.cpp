#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

void selection_sort(char data[], int n)
{
    int min, i, j;
    char temp;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (data[j] < data[min])
            {
                min = j;
            }
        }
        temp = data[i];
        data[i] = data[min];
        data[min] = temp;
    }
}

int hitung_vokal(const char kalimat[], int n)
{
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (kalimat[i] == 'a' || kalimat[i] == 'e' ||
            kalimat[i] == 'i' || kalimat[i] == 'o' || kalimat[i] == 'u' ||
            kalimat[i] == 'A' || kalimat[i] == 'E' ||
            kalimat[i] == 'I' || kalimat[i] == 'O' || kalimat[i] == 'U')
        {
            ++count;
        }
    }
    return count;
}

int main()
{
    const int MAX_LENGTH = 100;
    char kalimat[MAX_LENGTH];

    cout << "\tPROGRAM MENGHITUNG HURUF VOKAL" << endl;
    cout << "\nMasukkan sebuah kalimat: ";
    cin.getline(kalimat, MAX_LENGTH);

    int n = strlen(kalimat);

    cout << "\nData diurutkan: ";
    selection_sort(kalimat, n);

    // Tampilkan data setelah diurutkan
    for (int x = 0; x < n; x++)
    {
        cout << setw(3) << kalimat[x];
    }
    cout << endl;

    int jumlah_vokal = hitung_vokal(kalimat, n);
    cout << "\nJumlah huruf vokal dalam kalimat adalah: " << jumlah_vokal << endl;

    return 0;
}
