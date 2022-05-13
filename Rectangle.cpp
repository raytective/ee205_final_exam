///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Rectangle.cpp
/// @version 1.0
///
/// @author Rachel Watanabe <rkwatana@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#include "Rectangle.h"
#include <stdexcept>

Rectangle::Rectangle(double newLength, double newWidth) {
    if( newLength <= 0 or newWidth <= 0 ) {
        throw std::invalid_argument("Length and width must be > 0");
    }

    Rectangle::width = newWidth;
    Rectangle::length = newLength;
}

double Rectangle::getLength() const noexcept {
    return Rectangle::length;
}

double Rectangle::getWidth() const noexcept {
    return Rectangle::width;
}

double Rectangle::compute_area() {
    /// @TODO CHECK THIS IS ACTUALLY A DOUBLE :GABE:
    return (width * length);
}
