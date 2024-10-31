#include <regex>
#include "AtbashCoder.h"

using namespace IAmCoder;

AtbashCoder::AtbashCoder() : Coder() {}

const int latinAlphabetSize = 26;
const int cyrillicAlphabetSize = 32;
const int digitRange = 10;

std::wregex latinUpper(L"[A-Z]");
std::wregex latinLower(L"[a-z]");
std::wregex cyrillicUpper(L"[À-ß]");
std::wregex cyrillicLower(L"[à-ÿ]");
std::wregex digits(L"[0-9]");

void AtbashCoder::AtbashEncode()
{
    encryptedText = "";

    for (int i = 0; i < originalText->Length; i++) {
        wchar_t ch = originalText[i];
        bool isAdded = false;
 
        if (std::regex_match(std::wstring(1, ch), latinUpper)) {
            encryptedText += wchar_t('Z' - ch + 'A');
            isAdded = true;
        }
        else if (std::regex_match(std::wstring(1, ch), latinLower)) {
            encryptedText += wchar_t('z' - ch + 'a');
            isAdded = true;
        }

        else if (std::regex_match(std::wstring(1, ch), cyrillicUpper)) {
            encryptedText += wchar_t(L'ß' - ch + L'À');
            isAdded = true;
        }
        else if (std::regex_match(std::wstring(1, ch), cyrillicLower)) {
            encryptedText += wchar_t(L'ÿ' - ch + L'à');
            isAdded = true;
        }

        else if (std::regex_match(std::wstring(1, ch), digits)) {
            encryptedText += wchar_t('9' - ch + '0');
            isAdded = true;
        }

        if (!isAdded) {
            encryptedText += ch;
        }
    }
}