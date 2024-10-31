#include <bitset>
#include "VernamCoder.h"

using namespace IAmCoder;

VernamCoder::VernamCoder() : Coder() {}

int binaryStringToInt(String^ binaryString) {
    std::string newS = "";
    for (int i = 0; i < binaryString->Length; i++) {
        newS += binaryString[i];
    }
    return std::bitset<16>(newS).to_ulong();
}

void VernamCoder::VernamEncode(String^ binaryString)
{
    encryptedText = "";
    int key = binaryStringToInt(binaryString);
    for (int i = 0; i < originalText->Length; i++) {
        char16_t ch = originalText[i];
        encryptedText += char16_t(ch ^ key);
    }
    
}