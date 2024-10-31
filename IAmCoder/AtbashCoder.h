#pragma once

#include "Coder.h"

using namespace System;

namespace IAmCoder {

    public ref class AtbashCoder : public Coder
    {
    public:
        AtbashCoder();
        void AtbashEncode();
    };

}