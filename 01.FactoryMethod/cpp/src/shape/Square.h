#ifndef SQUARE_H
#define SQUARE_H

class Square : Shape {
public:
    Square();
    Square(const Square& orig);
    draw();
    virtual ~Square();
private:

};

#endif /* SQUARE_H */

