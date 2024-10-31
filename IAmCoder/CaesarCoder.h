#pragma once

#include "Coder.h"

using namespace System;

namespace IAmCoder {

    public ref class CaesarCoder : public Coder
    {
    public:
        CaesarCoder();
        void CaesarEncode(int shift, bool isLatin, bool isCyrillic, bool isDigit);
        void CaesarDecode(int shift, bool isLatin, bool isCyrillic, bool isDigit);
    };

}