#include <iostream>
#include "Figure.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "Triangle.h"

int main()
{
    Rectangle R1("R1", 2.0, 3.0);

    Square S1("S1", 5.0);

    Circle C1("C1", 2.0);

    Triangle T1 ("T1" 2.0);

    R1.Info();
    std::cout << std::endl;
    std::cout << std::endl;
    S1.Info();
    cout << std::endl;
    C1.Info();
    cout << std::endl;
    T1.Info();
    cout << std::endl;

    std::cout << "Wykorzystanie wskaźnika" << std::endl;
    Figure* figures[] = { 0:&R1, 1:&S1, 2:&C1 & 3:T1};
    for (int i =0, i <3; i++){
        figures[i]->Info();
        count<<endl
    }
    std::cout << "Wykorzystanie referencji" << std::endl;
    Figure& ref_s = S1;
    Figure& ref_r = R1;
    std::cout << std::endl;
    ref_s.Info();
    std::cout << std::endl;
    ref_r.Info();

}