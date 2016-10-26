//
//  Rectangle2D.hpp
//  HW 4
//
//  Created by Cheree LaPierre on /1024/16.
//  Copyright © 2016 Cheree LaPierre. All rights reserved.
//

#ifndef Rectangle2D_hpp
#define Rectangle2D_hpp

#include <stdio.h>
class Rectangle2D
{
public:
    double x;
    double y;
    double getx() const;
    double gety() const;
    void setx1(double X);
    void sety1(double Y);
    
    double width;
    double height;
    double getWidth() const;
    double getHeight() const;
    void setWidth1(double Width);
    void setHeight1(double Height);
    
    // Default constructor
    Rectangle2D()
    {
        x = 0;
        y = 0;
        width = 1;
        height = 1;
    }
    
    // Constructor
    Rectangle2D(double X, double Y, double Width, double Height);
    
    
    double getArea() const;
    double getPerimeter() const;
    bool contains(double x, double y) const;
//    bool contains(const Rectangle2D &r) const;
//    bool overlaps(const Rectangle2D &r) const;
    
};

#endif /* Rectangle2D_hpp */
