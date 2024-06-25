// #include <iostream>
// #include <stack>
// using namespace std;

// int main()
// {
//     stack<string> myStack;
//     myStack.push("jaaj");
//     myStack.push("kaka");
//     myStack.push("gkkgk");

//     while (!myStack.empty())
//     {
//         cout << myStack.top() << " ";
//         myStack.pop();
//     }
//     return 0;
// }

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> myStack;
    myStack.push("jaaj");
    myStack.push("kaka");
    myStack.push("gkkgk");

    // Menghapus elemen teratas dari stack
    cout << "Sebelum pop: " << endl;
    stack<string> tempStack = myStack;
    while (!tempStack.empty())
    {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;

    myStack.pop(); // Menghapus elemen teratas

    cout << "Setelah pop: " << endl;
    tempStack = myStack;
    while (!tempStack.empty())
    {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;

    return 0;
}
