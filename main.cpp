#include <iostream>
#include <clocale>
#include "tree.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    char exit;
    do
    {
        int n;
        cout << "������� N: ";
        cin >> n;

        Tree tree;

        cout << "������� �������� ������: ";
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            tree.add(x);
        }
        tree.show();

        cout << "������� e ��� ������: ";
        cin >> exit;
    } while (exit != 'e');
    return 0;
}