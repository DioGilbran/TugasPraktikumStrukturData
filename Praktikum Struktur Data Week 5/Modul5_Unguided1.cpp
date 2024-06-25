#include <iostream>
#include <iomanip>
using namespace std;
const int MAX_SIZE = 10;

struct mahasiswa
{
    string nama;
    long long NIM;
    int nilai;
    mahasiswa *next;
    mahasiswa(string nama, long long NIM, int nilai) : nama(nama), NIM(NIM), nilai(nilai), next(nullptr) {}
};

class HashTable
{
private:
    mahasiswa **table;
    int
    hash_func(long long key)
    {
        return key % MAX_SIZE;
    }

public:
    HashTable()
    {
        table = new mahasiswa *[MAX_SIZE]();
    }

    ~HashTable()
    {
        for (int i = 0; i < MAX_SIZE; ++i)
        {
            mahasiswa *current = table[i];
            while (current != nullptr)
            {
                mahasiswa *temp = current;
                current = current->next;
                delete temp;
            }
        }
        delete[] table;
    }

    void insert(string nama, long long NIM, int nilai)
    {
        int index = hash_func(NIM);
        mahasiswa *new_mahasiswa = new mahasiswa(nama, NIM, nilai);
        new_mahasiswa->next = table[index];
        table[index] = new_mahasiswa;
    }

    void remove(long long NIM)
    {
        int index = hash_func(NIM);
        mahasiswa *current = table[index];
        mahasiswa *prev = nullptr;
        while (current != nullptr)
        {
            if (current->NIM == NIM)
            {
                if (prev == nullptr)
                {
                    table[index] = current->next;
                }
                else
                {
                    prev->next = current->next;
                }
                delete current;
                cout << "Mahasiswa dengan NIM " << NIM << " telah dihapus." << endl;
                return;
            }
            prev = current;
            current = current->next;
        }
        cout << "Mahasiswa dengan NIM " << NIM << " tidak  ditemukan." << endl;
    }

    mahasiswa *cari_NIM(long long NIM)
    {
        long long index = hash_func(NIM);
        mahasiswa *current = table[index];
        while (current != nullptr)
        {
            if (current->NIM == NIM)
            {
                return current;
            }
            current = current->next;
        }
        return nullptr;
    }

    void cari_nilai(int awalnya, int akhirnya)
    {

        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "| Nama Mahasiswa | NIM | Nilai | " << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        for (int i = 0; i < MAX_SIZE; ++i)
        {
            mahasiswa *current = table[i];
            while (current != nullptr)
            {
                if (current->nilai >= awalnya && current->nilai <= akhirnya)
                {
                    string namaSingkat = current->nama.substr(0, 30);
                    cout << "| " << setw(30) << left << namaSingkat << " | ";
                    cout << setw(20) << current->NIM << " | ";
                    cout << setw(10) << fixed << setprecision(2) << current->nilai << " |" << endl;
                }
                current = current->next;
            }
        }
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    }

    void traverse()
    {
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "| Nama Mahasiswa | NIM | Nilai | " << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        for (int i = 0; i < MAX_SIZE; ++i)
        {
            mahasiswa *current = table[i];
            while (current != nullptr)
            {
                string namaSingkat = current->nama.substr(0, 30);
                cout << "| " << setw(30) << left << namaSingkat << " | ";
                cout << setw(20) << current->NIM << " | ";
                cout << setw(10) << current->nilai << " |" << endl;
                current = current->next;
            }
        }
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    }
};

int main()
{
    HashTable ht;
    int pilih, nilai, awalnya, akhirnya;
    string nama;
    long long NIM;
    do
    {
        cout << endl;
        cout << " MENU: " << endl
             << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "1. Tambah Data Mahasiswa" << endl;
        cout << "2. Hapus Data Mahasiswa" << endl;
        cout << "3. Cari berdasarkan NIM" << endl;
        cout << "4. Cari berdasarkan Rentang Nilai" << endl;
        cout << "5. Tampilkan Semua Data" << endl;
        cout << "6. Keluar" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl
             << endl;
        cout << "Pilih menu : ";
        cin >> pilih;
        cout << endl;
        switch (pilih)
        {
        case 1:
            cout << "Masukan Nama: ";
            cin.ignore();
            getline(cin, nama);
            cout << "Masukan NIM: ";
            cin >> NIM;
            cout << "Masukan Nilai: ";
            cin >> nilai;
            ht.insert(nama, NIM, nilai);
            cout << "Data berhasil ditambahkan" << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl
                 << endl;
            break;
        case 2:
            cout << "Masukan NIM yang ingin dihapus: ";
            cin >> NIM;
            ht.remove(NIM);
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl
                 << endl;
            break;
        case 3:
            cout << "Masukan NIM yang ingin dicari : ";
            cin >> NIM;
            {
                mahasiswa *mahasiswa_ptr = ht.cari_NIM(NIM);
                if (mahasiswa_ptr)
                {
                    cout << "Ditemukan mahasiswa dengan NIM " << NIM << " bernama " << mahasiswa_ptr->nama << " dan memiliki nilai" << mahasiswa_ptr->nilai << endl;
                }
                else
                {
                    cout << "mahasiswa dengan NIM " << NIM << " tidak ditemukan " << endl;
                }
            }
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl
                 << endl;
            break;
        case 4:
            cout << "masukan nilai awal: ";
            cin >> awalnya;
            cout << "masukan nilai akhir: ";
            cin >> akhirnya;
            ht.cari_nilai(awalnya, akhirnya);
            break;
        case 5:
            ht.traverse();
            break;
        case 6:
            cout << "Sampai jumpa" << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl
                 << endl;
            break;
        default:
            cout << "Pilihan anda tidak ada" << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl
                 << endl;
        }
    } while (pilih != 6);
    return 0;
}