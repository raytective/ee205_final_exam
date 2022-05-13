///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
/// @author Rachel Watanabe <rkwatana@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "Square.h"
#include <assert.h>
#define DDEBUG

int main() {
#ifdef DEBUG
    /// testing rectangle (0 width/length)
    try{
        Rectangle sillyRectangle(0,0);
        assert(false);
    } catch (std::exception) {
        std::cout << "Can't have rectange length/width < 0" << std::endl;
    }

    /// testing square (0 width/length)
    try{
        Square sillySquare( -1 );
        assert(false);
    } catch( std::exception ) {
        std::cout << "Can't have square length/width < 0" << std::endl;
    }

    /// testing getters
    Square funnySquare( 25 );
    std::cout << "Side of funny square is " << funnySquare.getSide() << std::endl;

    Rectangle funnyRectangle( 35, 10 );
    std::cout << "Length of funny rectange is " << funnyRectangle.getLength() << std::endl;
    std::cout << "Width of funny square is " << funnyRectangle.getWidth() << std::endl;
#endif

    std::cout << "Hello, World!" << std::endl;

    Square mySquare(2);
    std::cout << "The area of mySquare is: "
              << mySquare.compute_area()
              << std::endl;

    Rectangle myRectangle( 2, 4 );
    std::cout << "The area of myRectangle is: "
              << myRectangle.compute_area()
              << std::endl;

    return 0;
}
