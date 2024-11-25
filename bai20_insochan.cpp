#include <iostream>
using namespace std;

int main() {
    int so, tongchan = 0, tongle = 0;

    cout << "Cac so chan tu 1 den 100 la: ";
    cout << "\nnhap so: "; cin >> so;
    for (int i = 1; i <= so; i++)
    {
        if (i % 2 == 0) {
            cout << "\n---------------\nso chan la: " << i << " ";
            tongchan += i;
        }
        else {
            cout << "\n---------------\nso le la: " << i << " ";
            tongle += i;
        }


    }
    cout << "\nTong cua cac so chan tu 1 den 100 la: " << tongchan << endl;
    cout << "\nTong cua cac so le tu 1 den 100 la: " << tongle << endl;
    return 0;
}
