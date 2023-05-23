//
// Created by Kevin Koshy on 23/05/23.
//
#include <iostream>
#include "I_Printable.h"

std::ostream &operator<<(std::ostream &os, const I_Printable &obj) {
    obj.print(os);
    return os;
}
