#include <iostream>

using namespace std;

int main()
{
    int a = 1;

    do
    {
        cout << "hai ";
        cout << a << endl;
        a++;
    } while (a <= 10);

    cout << "selesai" << endl;
    cin.get();
    return 0;
}