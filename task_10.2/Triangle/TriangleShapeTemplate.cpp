#include "TriangleShapeTemplate.h"
#include <iostream>

void TriangleShapeTemplate::PrintInfo()
{
    PrintNameFigure();
    std::cout << "(cтороны " << sideA << ", " << sideB << ", " << sideC << "; ";
    std::cout << "углы " << cornerA << ", " << cornerB << ", " << cornerC << ")";
    std::cout << " создан" << std::endl;
}