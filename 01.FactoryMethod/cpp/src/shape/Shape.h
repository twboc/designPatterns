/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Shape.h
 * Author: hubert
 *
 * Created on February 24, 2017, 5:32 PM
 */

#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
    Shape();
    Shape(const Shape& orig);
    virtual ~Shape();
    virtual void draw() = 0;
private:

};

#endif /* SHAPE_H */

