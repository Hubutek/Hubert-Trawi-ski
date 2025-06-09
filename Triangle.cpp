#include "Triangle.h"
#include <iostream>
#include <cmath>
Triangle::Triangle(string name, float a) : Figure(name)
{
    m_a = a;
    m_h = sqrt((a^2 - ((a/2)^2))
}

float Triangle::Area() const
{
    return 0,5 * m_a * m_h ;
}

float Triangle::Perimeter() const
{
    return  m_a * 3
}

void Triangle::Info() const
{
    cout << "Triangle: " << Name() << endl;
    cout << "Dimension: " << m_a << endl;
    cout << "Area: " << 0,5 * m_a * m_h << endl;
    cout << "Perimeter: " <<  m_a * 3 << endl;
}