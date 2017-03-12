#include "ToastMemories.h"

ToastMemories::ToastMemories(std::string memory) {
    this->memory = memory;
};
ToastMemories::ToastMemories(const ToastMemories& orig) { };
ToastMemories::~ToastMemories() { };

std::string ToastMemories::getMemory(){
    return this->memory;
};
