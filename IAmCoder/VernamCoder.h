#pragma once

#include "Coder.h"

using namespace System;

namespace IAmCoder {

    public ref class VernamCoder : public Coder
    {
    public:
        VernamCoder();
        void VernamEncode(String^ key);

    private:
        String^ binaryString;
    };

}