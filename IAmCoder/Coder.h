#pragma once

using namespace System;
using namespace System::Text;

namespace IAmCoder {

    private ref class Coder
    {
    protected:
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
    };

}