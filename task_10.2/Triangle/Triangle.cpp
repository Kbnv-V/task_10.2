#include "Triangle.h"
#include <iostream>
#include "ShapeException.h"

Triangle::Triangle(int sda, int sdb, int sdc, int crna, int crnb, int crnc)
{
    if ((crna + crnb + crnc) != 180)
    {
        std::cout << "Triangle: бросаем исключение" << std::endl;
        throw ShapeException("Ошибка создания треугольника! Сумма углов не равна 180");
    }

    sideA = sda;
    sideB = sdb;
    sideC = sdc;
    cornerA = crna;
    cornerB = crnb;
    cornerC = crnc;

    PrintInfo();
};

void Triangle::PrintNameFigure()
{
    std::cout << "Треугольник ";
}