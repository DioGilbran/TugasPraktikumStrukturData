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

void binary_search(char data[], int n, char cari)
{
    int awal = 0, akhir = n - 1, tengah;
    bool found = false;
    while (awal <= akhir)
    {
        tengah = (awal + akhir) / 2;
        if (data[tengah] == cari)
        {
            found = true;
            break;
        }
        else if (data[tengah] < cari)
        {
            awal = tengah + 1;
        }
        else
        {
            akhir = tengah - 1;
        }
    }
    if (found)
    {
        cout << "\nData ditemukan pada index ke- " << tengah << endl;
    }
    else
    {
        cout << "\nData tidak ditemukan\n";
    }
}

int main()
{
    const int MAX_LENGTH = 100;
    char kalimat[MAX_LENGTH];
    char cari;

    cout << "\tPENCARIAN BINARY SEARCH" << endl;
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

    cout << "\nMasukkan karakter yang ingin Anda cari: ";
    cin >> cari;

    binary_search(kalimat, n, cari);

    return 0;
}
