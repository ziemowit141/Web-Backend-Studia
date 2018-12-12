#include <iostream>

using namespace std;

int main()
{
    int val = 12;
    int val2 = 10;

    int& ref;
    int* pnt = &val;

    cout << &val << " " << val << endl;
    // cout << &ref << " " << ref << endl;
    cout << pnt << " " << *pnt << endl;

    pnt = &val2;

    cout << &val2 << " " << val2 << endl;
    // cout << &ref << " " << ref << endl;
    cout << pnt << " " << *pnt << endl;

    //referencja raz stworzona nie może zostać skierowana na inny obiekt
    //nie ma czegoś takiego jak arytmetyka referencji
    //tyle, te dwie różnice

    //referencja musi być zainicjalizowana w momencie deklaracji,
    //wskaźnik możesz np zinkrementować(pointer arithmetics)

    return 0;
}