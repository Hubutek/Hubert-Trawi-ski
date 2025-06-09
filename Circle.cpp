#include <iostream>
#include <cmath>
#include "Circle.h"

Circle::Circle(string name, float a,) : Figure(name)
{
    m_a = a;
}

float Circle::Area() const
{
    return m_a * m_a * M_PI;
}

float Circle::Perimeter() const
{
    return  2 * m_a * M_PI;
}

void Circle::Info() const
{
    cout << "Circle: " << Name() << endl;
    cout << "Dimensions: " << m_a << endl;
    cout << "Area: " << m_a * m_a * M_PI << endl;
    cout << "Perimeter: " <<  2 * m_a * M_PI << endl;
}