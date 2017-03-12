#ifndef CAFEOFBROKENDREAMS_H
#define CAFEOFBROKENDREAMS_H

#include "ToastMemories.h"

class CafeOfBrokenDreams {
public:
    CafeOfBrokenDreams();
    CafeOfBrokenDreams(const CafeOfBrokenDreams& orig);
    virtual ~CafeOfBrokenDreams();
    void setToastServed(std::string toast);
    std::string getToastServed();
    ToastMemories* rememberThisToast();
    std::string getToastFromMemory(ToastMemories* taostMemory);
private:
    std::string toastType;

};

#endif /* CAFEOFBROKENDREAMS_H */

