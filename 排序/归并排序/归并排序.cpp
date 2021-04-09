#include <iostream>
#include<random>
using namespace std;

int main()
{
    srand((unsigned)time(NULL));
    int a[10];
    for (int i = 0; i < 10; i++) {
        a[i] = rand() % 50;
        cout << a[i]<<'\t';
    }
    cout << endl;

    return 0;
}

