#include <iostream>
using namespace std;
string arraybuku[5];
int maksimal = 5, top = 0;
bool isFull()
{
    return (top == maksimal);
}
bool isEmpty()
{
    return (top == 0);
}
void pushArrayBuku(string data)
{
    if (isFull())
    {
        cout << "Data telah penuh" << endl;
    }
    else
    {
        arraybuku[top] = data;
        top++;
    }
}
void poparraybuku()
{
    if (isEmpty())
    {
        cout << "Tidak ada data yang dihapus" << endl;
    }
    else
    {
        arraybuku[top - 1] = "";
        top--;
    }
}
void peekArrayBuku(int posisi)
{
    if (isEmpty())
    {
        cout << "tidak ada" << endl;
    }
    else
    {
        int index = top;
        for (int i = 1; i <= posisi; i++)
        {
            index--;
        }
        cout << "posisi ke " << posisi << " adalah" << arraybuku[index] << endl;
    }
}
void cetakArrayBuku()
{
    if (isEmpty())
    {
        cout << "tdk" << endl;
    }
    else
    {
        for (int i = top - 1; i >= 0; i--)
        {
            cout << arraybuku[i] << endl;
        }
    }
}

int main()
{
    pushArrayBuku("KALKULUS");
    pushArrayBuku("lalalal");
    cetakArrayBuku();
    poparraybuku();
}