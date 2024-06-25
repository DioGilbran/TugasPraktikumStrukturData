#include <iostream>
using namespace std;
struct Node
{
    string data;
    Node *next;
};
Node *front = nullptr;
Node *back = nullptr;

bool isEmpty()
{
    return front == nullptr;
}

void enqueueAntrian(string data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    if (isEmpty())
    {
        front = back = newNode;
    }
    else
    {
        back->next = newNode;
        back = newNode;
    }
    cout << "Data " << data << " berhasil ditambahkan ke antrian." << endl;
}

void dequeueAntrian()
{
    if (isEmpty())
    {
        cout << "Antrian kosong" << endl;
    }
    else
    {
        Node *temp = front;
        front = front->next;
        if (front == nullptr)
        {
            back = nullptr;
        }
        cout << "Data " << temp->data << " berhasil dihapus  dari antrian." << endl;
        delete temp;
    }
}

int countQueue()
{
    int count = 0;
    Node *temp = front;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void clearQueue()
{
    while (!isEmpty())
    {
        dequeueAntrian();
    }
    cout << "Antrian berhasil dikosongkan." << endl;
}

void viewQueue()
{
    cout << "Data antrian teller:" << endl;
    Node *temp = front;
    int index = 1;
    while (temp != nullptr)
    {
        cout << index << ". " << temp->data << endl;
        temp = temp->next;
        index++;
    }
    if (isEmpty())
    {
        cout << "(kosong)" << endl;
    }
}
void tampilkanMenu()
{
    cout << "~~ Pengelola Antrian ~~" << endl;
    cout << "1. Menambah Antrian" << endl;
    cout << "2. Menghapus Antrian" << endl;
    cout << "3. Melihat Antrian" << endl;
    cout << "4. Menghitung Jumlah Antrian" << endl;
    cout << "5. Mengosongkan Antrian" << endl;
    cout << "6. Keluar" << endl;
    cout << "Pilih opsi: ";
}
int main()
{
    int choice;
    string data;
    do
    {
        tampilkanMenu();
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Masukkan nama: ";
            cin >> data;
            enqueueAntrian(data);
            break;
        case 2:
            dequeueAntrian();
            break;
        case 3:
            viewQueue();
            break;
        case 4:
            cout << "Jumlah antrian = " << countQueue() << endl;
            break;
        case 5:
            clearQueue();
            break;
        case 6:
            cout << "Berhasil keluar dari program." << endl;
            break;
        default:
            cout << "Pilihan salah" << endl;
        }
        cout << endl;
    } while (choice != 6);
    return 0;
}