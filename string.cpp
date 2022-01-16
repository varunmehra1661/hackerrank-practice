#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b, c, temp;
    cin >> a >> b;
    int len1 = 0;
    int len2 = 0;
    len1 = a.length();
    len2 = b.length();
    c = a + b;
    temp = a;
    a[0] = b[0];
    b[0] = temp[0];
    cout << len1 << " " << len2 << endl;
    cout << c << endl;
    cout << a << " " << b << endl;

    return 0;
}