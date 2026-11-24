#include <iostream>
#include <exception>
#include "Triangle/Triangle.h"
#include "Triangle/RightTriangle.h"
#include "Triangle/IsoscelesTriangle.h"
#include "Triangle/EquilateralTriangle.h"
#include "Quadrilateral/Quadrilateral.h"
#include "Quadrilateral/Rectangle.h"
#include "Quadrilateral/Square.h"
#include "Quadrilateral/Parallelogram.h"
#include "Quadrilateral/Rhomb.h"
#include <Windows.h>


int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    try
    {
        Triangle t(10, 20, 30, 60, 50, 60);
        RightTriangle rt(10, 20, 30, 40, 60, 80);
        IsoscelesTriangle it(10, 20, 10, 50, 60, 50);
        EquilateralTriangle et(30, 30, 30, 60, 60, 60);

        quadr::Quadrilateral q(10, 20, 30, 40, 50, 60, 70, 80);
        quadr::Rectangle r(10, 20, 10, 20, 90, 90, 90, 90);
        r.CheckSides();
        r.CheckCorners();

        quadr::Square s(20, 20, 20, 20, 90, 90, 90, 90);
        s.CheckSides();
        s.CheckCorners();

        quadr::Parallelogram p(20, 30, 20, 30, 30, 40, 30, 40);
        p.CheckSides();
        p.CheckCorners();

        quadr::Rhomb rh(30, 30, 30, 30, 30, 40, 30, 40);

        t.PrintInfo();
        rt.PrintInfo();
        it.PrintInfo();
        et.PrintInfo();

        q.PrintInfo();
        r.PrintInfo();
        s.PrintInfo();
        p.PrintInfo();
        rh.PrintInfo();
    }
    catch (ShapeException& exp)
    {
        std::cerr << "Читаем ошибку в catch (type ShapeException)" << std::endl;
        std::cerr << exp.what() << std::endl;
    }
    catch (std::exception& exp)
    {
        std::cerr << "Читаем ошибку в catch (type Exception)" << std::endl;
        std::cerr << exp.what() << std::endl;
    }
    catch (...)
    {
        std::cerr << "Неизвестная ошибка в выполнении программы!" << std::endl;
    }
}
