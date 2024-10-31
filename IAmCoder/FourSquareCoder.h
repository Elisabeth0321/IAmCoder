#pragma once

#include "Coder.h"

using namespace System;

namespace IAmCoder {

    public ref class FourSquareCoder : public Coder
    {
    public:
        FourSquareCoder();
        virtual void FourSquareEncode(String^ key1, String^ key2, bool isLatin);
        virtual void FourSquareDecode(String^ key1, String^ key2, bool isLatin);

    private:
        cli::array<String^>^ CreateSquare(String^ key);
        Tuple<int, int>^ FindPosition(Char letter, cli::array<String^>^ square);
        cli::array<String^>^ CreateSquareRU(String^ key);
        Tuple<int, int>^ FindPositionRU(Char letter, cli::array<String^>^ square);
        String^ FourSquareCoder::RemoveSpaces(String^ text);
    };

}