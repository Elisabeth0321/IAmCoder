#pragma once

#include "Coder.h"

using namespace System;

namespace IAmCoder {

    public ref class VinegereCoder : public Coder
    {
    public:
        VinegereCoder();
        void VinegereEncode(String^ key);
        void VinegereDecode(String^ key);
    };

}