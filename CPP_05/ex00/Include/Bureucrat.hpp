#pragma once

#include <string>
#include <iostream>

class Bureucrat {
    public:
        Bureucrat (void);
        Bureucrat (const Bureucrat& src);
        Bureucrat& opreator= (const Bureucrat& src);
        ~Bureucrat (void);
};