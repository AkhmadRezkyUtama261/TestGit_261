#include <iostream>
using namespace std;

class bangunDatar
{
public: // akses modifier
    int panjang, lebar;

public:
    void input()
    {
        cout << "Masukkan Panjang : ";
        cin >> panjang;
        cout << "masukkan lebar : ";
        cin >> lebar;
    }
    int luasPp(int a, int b)
    {
        return a * b;
    }