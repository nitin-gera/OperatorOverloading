#include <QCoreApplication>
#include <set>
#include <QMap>
#include "ComplexNumbers.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Complex C1;
    cout << C1;
//    C1.Print();

    Complex C2(5, 4);
    cout << C2;
//    C2.Print();

    Complex C3(6, 3);
    cout << C3;
//    C3.Print();

    if(C2 < C3)
    {
        cout << "C2 is smaller" << endl;
    }
    else
    {
        cout << "C3 is smaller" << endl;
    }

    C3 = C3 + C2;

    cout << "After addition" << endl;
    cout << C3;

    QMap<Complex, string>    name_map;
    name_map.insert(C2, "Nitin");
    name_map.insert(C3, "Ram");
    name_map.insert(C1, "Rupesh");

    foreach(string str, name_map.values())
        cout << str << endl;

    set<Complex> comlex_number_set;

    comlex_number_set.insert(C1);
    comlex_number_set.insert(C2);
    comlex_number_set.insert(C3);

    return a.exec();
}
