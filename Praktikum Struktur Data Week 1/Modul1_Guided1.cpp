#include <iostream> 
using namespace std; 
// Main program 
int main() 
{ 
char op; 
float num1, num2; 
// It allows user to enter operator i.e. +, -, *, / 
cout<<"Masukan Operator (+,-,*,/): "; 
cin >> op; 
// It allow user to enter the operands 
cout<<"Masukan dua angka: "; 
cin >> num1 >> num2; 
// Switch statement begins 
switch (op) 
{ 
// If user enter + 
case '+': 
cout <<"Hasil Penjumlahan:"<< num1 + num2; 
break; 
// If user enter - 
case '-': 
cout <<"Hasil Pengurangan: "<< num1 - num2; 
break; 
// If user enter * 
case '*': 
cout <<"Hasil Perkalian: " <<num1 * num2; 
break; 
// If user enter / 
case '/': 
cout <<"Hasil Pembagian: "<< num1 / num2; 
break; 
// If the operator is other than +, -, * or /, 
// error message will display 
default: 
cout << "Error! operator is not correct"; 
} // switch statement ends 
return 0; 
}