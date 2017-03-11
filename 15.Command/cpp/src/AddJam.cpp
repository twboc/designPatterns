#include "AddJam.h"

AddJam::AddJam() { }
AddJam::AddJam(const AddJam& orig) { }
AddJam::~AddJam() { }

void AddJam::execute(Toast* toast){
    std::cout << "Add some jam!" << std::endl;
    toast->hasJam = true;
}