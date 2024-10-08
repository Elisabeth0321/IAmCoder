#pragma once

using namespace System;
using namespace System::Text;

namespace IAmCoder {

    public ref class Coder
    {
    private:
        String^ originalText;
        String^ encryptedText;
        String^ decryptedText;

    public:
        Coder();

        ~Coder();

        property String^ OriginalText
        {
            void set(String^ value); 
        }

        property String^ EncryptedText
        {
            String^ get();
        }

        property String^ DecryptedText
        {
            String^ get();
        }

        void RailFenceEncode(int rails);
        void RailFenceDecode(int rails);
    };

}