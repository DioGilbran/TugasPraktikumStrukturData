#include <iostream>
using namespace std;

int main (){
    int x,y,z;
    
    cout<<"Masukkan Jumlah Elemen Pertama: ";
    cin>>x;
    cout<<"Masukkan Jumlah Elemen Kedua: ";
    cin>>y;
    cout<<"Masukkan Jumlah Elemen Ketiga: ";
    cin>>z;
    int nilai[x][y][z];
    cout<<"Input Nilai Array: \n";
    for (int a = 0; a < x; a++)
    {
        for (int b = 0; b < y; b++)
        {
            for (int c = 0; c < z; c++)
            {
                cout<<"["<<a<<"]"<<"["<<b<<"]"<<"["<<c<<"] : ";
                cin>> nilai[a][b][c]; 
            }
        
        }
        cout<<endl;
    }
    for (int a = 0; a < x; a++)
    {
        for (int b = 0; b < y; b++)
        {
            for (int c = 0; c < z; c++)
            {
                cout<<"Nilai Array"<<"["<<a<<"]"<<"["<<b<<"]"<<"["<<c<<"]"<<nilai[a][b][c]<<endl;
            }  
        }
    }
    for (int a = 0; a < x; a++)
    {
        for (int b = 0; b < y; b++)
        {
            for (int c = 0; c < z; c++)
            {
                cout<<nilai[a][b][c];
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
