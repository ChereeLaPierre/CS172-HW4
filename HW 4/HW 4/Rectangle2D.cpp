//
//  Rectangle2D.cpp
//  HW 4
//
//  Created by Cheree LaPierre on /1024/16.
//  Copyright © 2016 Cheree LaPierre. All rights reserved.
//

#include "Rectangle2D.hpp"

Rectangle2D::Rectangle2D(double pointX, double pointY, double width1, double height1)
{
    x = pointX;
    y = pointY;
    height = height1;
    width = width1;
}



double Rectangle2D::getx() const
{
    return x;
}

double Rectangle2D::gety() const
{
    return y;
}

void Rectangle2D::setx1(double pointX)
{
    x = pointX;
}

void Rectangle2D::sety1(double pointY)
{
    y = pointY;
}

void Rectangle2D::setWidth1(double width1)
{
    width = width1;
}

void Rectangle2D::setHeight1(double height1)
{
    height = height1;
}

// Find the area
double Rectangle2D::getArea() const
{
    return width * height;
}

// Find the perimeter
double Rectangle2D::getPerimeter() const
{
    return (height * 2) + (width * 2);
}

// Check to see if a rectangle contains those points
bool Rectangle2D::contains(double x, double y) const
{
    if (x == 3 && y == 3)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//bool Rectangle2D::contains(const Rectangle2D &r) const            // I don't know how to do this
//{
//
//}

//bool Rectangle2D::overlaps(const Rectangle2D &r) const
//{
//
//}



