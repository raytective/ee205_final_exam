///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Rectangle.h
/// @version 1.0
///
/// @author Rachel Watanabe <rkwatana@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#include "Shape.h"

class Rectangle: public Shape {
public:
    /// check if width/length >= 0; throw exception
    Rectangle( double newLength, double newWidth );

    double getLength() const noexcept;
    double getWidth() const noexcept;

    /// returns length * width (as a double)
    double compute_area() override;

protected:
    double length;
    double width;

};


