#ifndef TRIANGLESHAPETEMPLATE_H
#define TRIANGLESHAPETEMPLATE_H

class TriangleShapeTemplate
{
protected:
    int sideA{}; //значения сторон
    int sideB{};
    int sideC{};

    int cornerA{}; //значения углов
    int cornerB{};
    int cornerC{};

    virtual void PrintNameFigure() {};

public:
    TriangleShapeTemplate() = default;
    ~TriangleShapeTemplate() = default;
    void PrintInfo();
};

#endif