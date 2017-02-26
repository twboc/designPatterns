#ifndef SINGLETON_H
#define SINGLETON_H

class singleton {
public:
    static singleton* getInstance();
    void yell();
private:
    int counter;
    static singleton* instance;
    singleton();
    singleton(const singleton& orig);
    virtual ~singleton();
};

#endif

