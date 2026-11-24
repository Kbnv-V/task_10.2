# CMakeList.txt: проект CMake для task_10.2; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (task_10.2 
"task_10.2.cpp" 
"Triangle/Triangle.h"
"Triangle/Triangle.cpp"
"Triangle/RightTriangle.h"
"Triangle/RightTriangle.cpp"
"Triangle/IsoscelesTriangle.h"
"Triangle/IsoscelesTriangle.cpp"
"Triangle/EquilateralTriangle.h"
"Triangle/EquilateralTriangle.cpp"
"Quadrilateral/Quadrilateral.h"
"Quadrilateral/Quadrilateral.cpp"
"Quadrilateral/Rectangle.h"
"Quadrilateral/Rectangle.cpp"
"Quadrilateral/Square.h"
"Quadrilateral/Square.cpp"
"Quadrilateral/Parallelogram.h"
"Quadrilateral/Parallelogram.cpp"
"Quadrilateral/Rhomb.h"
"Quadrilateral/Rhomb.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET task_10.2 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
