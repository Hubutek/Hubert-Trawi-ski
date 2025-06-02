#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
    //Point p1, p2, p3;
    Point p1;
    Point p2("P2", 30, 40);
    Point p3 = Point("P3");
    Point p4 = { "P4", 30, 40 };
    Point p5 {};

    p1.setName("P1");
    p1.setXY(10, 20);
    p2.setXY(30, 40);

    p1.show();
    p2.show();
    p3.show();
    p4.show();
#include <iostream>
#include "Point.h"
    using namespace std;

    int main()
    {
        //Point p1, p2, p3;
        Point p1("P1", 0, 0);
        Point p2("P2", 30, 40);

        p1.show();
        p2.show();

        cout << "Odleglosc pomiedzy punktami wynosi " << p1.distance(p2) << endl;
        const Point& p = p1.distant(p2);
        cout << "Punkt bardziej oddalonny od poczatku ukladu wspolrzednych to: " << endl;
        p.show();

    }
    p5.show();

    p2 = p1;
    p2.show();
}