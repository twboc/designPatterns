#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle : Shape {
public:
    Rectangle();
    Rectangle(const Rectangle& orig);
    draw();
    virtual ~Rectangle();
private:

};

#endif /* RECTANGLE_H */

