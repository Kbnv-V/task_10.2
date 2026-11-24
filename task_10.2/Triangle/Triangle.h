#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "TriangleShapeTemplate.h"

class Triangle : public TriangleShapeTemplate //произвольный треугольник
{
private:
    void PrintNameFigure() override;

public:
    Triangle() = default;
    Triangle(int sda, int sdb, int sdc, int crna, int crnb, int crnc);
};

#endif