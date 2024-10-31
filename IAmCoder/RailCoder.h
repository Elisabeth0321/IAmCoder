#pragma once

#include "Coder.h"

using namespace System;

namespace IAmCoder {

    public ref class RailCoder : public Coder
    {
    public:
        RailCoder();
        void RailFenceEncode(int rails);
        void RailFenceDecode(int rails);
    };

}