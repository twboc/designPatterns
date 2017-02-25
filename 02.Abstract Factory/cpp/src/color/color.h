#ifndef COLOR_H
#define COLOR_H

class color {
public:
    color();
    color(const color& orig);
    virtual ~color();
    virtual void fill() = 0;
private:

};

#endif

