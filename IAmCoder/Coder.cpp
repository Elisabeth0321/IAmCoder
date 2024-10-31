#include "Coder.h"

using namespace IAmCoder;

Coder::Coder()
{
    originalText = "";
    encryptedText = "";
    decryptedText = "";
}

Coder::~Coder()
{
   
}

void Coder::OriginalText::set(String^ value)
{
    originalText = value;
}

String^ Coder::EncryptedText::get()
{
    return encryptedText;
}

String^ Coder::DecryptedText::get()
{
    return decryptedText;
}