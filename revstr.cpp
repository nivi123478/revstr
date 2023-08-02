#include <iostream>
using namespace std;
void reverseStr(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    reverseStr(str);
    cout << "Reversed string: " << str;
    return 0;
}