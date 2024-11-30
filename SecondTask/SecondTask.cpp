#include <cstdlib> 

#include <ctime> 

#include <algorithm>

#include <array>

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU"); // cout на русском


    srand((unsigned)time(0)); // зерно рандома

    int massive[11];

    for (int i = 1; i <= 10; ++i)
    {
        int random = (rand() % 100) + 1;
        massive[i] = random;
    }

    cout << "Элементы массива: ";

    for (int i = 1; i <= 10; ++i)
    {
        cout << massive[i] << " ";
    }

    sort(begin(massive), end(massive));

    cout << "\n\nСортировка массива: ";

    for (int i = 1; i <= 10; ++i)
    {
        cout << massive[i] << " ";
    }

    int a;
    cin >> a;

    return 0;
}