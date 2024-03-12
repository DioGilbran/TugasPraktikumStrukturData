#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> umur;

    umur["Dio"] = 11;
    umur["Gilbran"] = 12;
    umur["Pramana"] = 13;

    cout << "Umur Dio: " << umur["Dio"] << " tahun" << endl;
    cout << "Umur Gilbran: " << umur["Gilbran"] << " tahun" << endl;
    cout << "Umur Pramana: " << umur["Pramana"] << " tahun" << endl;

    return 0;
}
