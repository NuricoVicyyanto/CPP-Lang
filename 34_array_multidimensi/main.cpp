#include <iostream>

using namespace std;

void cetak(int *ptrArr, int baris, int kolom)
{
    int index = 0;
    for (int i = 0; i < baris; i++)
    {
        cout << "[";
        for (int j = 0; j < kolom; j++)
        {
            cout << *(ptrArr + index) << " ";
            index++;
        }
        cout << "]" << endl;
    }
}

int main()
{
    const int baris = 2;
    const int kolom = 2;

    int arrMd[baris][kolom] = {1, 2, 3, 4};

    cetak(*arrMd, baris, kolom);
}