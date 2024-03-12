#include <iostream>
using namespace std;

int hitungLuasPersegi(int sisi) {
    return sisi * sisi;
}

double konversiCelsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
 
    int sisiPersegi = 5;
    double suhuCelsius = 25.5;

    int luasPersegi = hitungLuasPersegi(sisiPersegi);
    cout << "Luas persegi dengan sisi " << sisiPersegi << " adalah: " << luasPersegi << endl;

    double suhuFahrenheit = konversiCelsiusToFahrenheit(suhuCelsius);
    cout << "Suhu " << suhuCelsius << " derajat Celsius setara dengan " << suhuFahrenheit << " derajat Fahrenheit" << endl;

    return 0;
}
