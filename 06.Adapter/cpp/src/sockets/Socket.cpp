#include "Socket.h"

Socket::Socket() { }
Socket::Socket(const Socket& orig) { }
Socket::~Socket() { }

Cable Socket::voltage(){
    return 210;
}
Cable Socket::live(){
    return 1;
}
Cable Socket::neutral(){
    return -1;
}
Cable Socket::earth(){
    return 0;
}
Shape Socket::shape(){
    return "Double dots and a third one for ground";
}