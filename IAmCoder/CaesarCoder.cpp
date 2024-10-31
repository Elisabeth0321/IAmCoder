#include <regex>
#include "CaesarCoder.h"

using namespace IAmCoder;

CaesarCoder::CaesarCoder() : Coder() {}

void CaesarCoder::CaesarEncode(int shift, bool isLatin, bool isCyrillic, bool isDigit) {
    encryptedText = ""; 
    const int latinAlphabetSize = 26;  
    const int cyrillicAlphabetSize = 32;
    const int digitRange = 10;

    std::wregex latinUpper(L"[A-Z]");
    std::wregex latinLower(L"[a-z]");
    std::wregex cyrillicUpper(L"[À-ß]");
    std::wregex cyrillicLower(L"[à-ÿ]");
    std::wregex digits(L"[0-9]");

    for (int i = 0; i < originalText->Length; i++) {
        wchar_t ch = originalText[i]; 
        bool isAdded = false;

        if (isLatin) {
            if (std::regex_match(std::wstring(1, ch), latinUpper)) {
                encryptedText += wchar_t((ch + shift - 'A') % latinAlphabetSize + 'A');
                isAdded = true;
            }
            else if (std::regex_match(std::wstring(1, ch), latinLower)) {
                encryptedText += wchar_t((ch + shift - 'a') % latinAlphabetSize + 'a');
                isAdded = true;
            }
        }

        if (isCyrillic) {
            if (std::regex_match(std::wstring(1, ch), cyrillicUpper)) {
                encryptedText += wchar_t((ch + shift - L'À') % cyrillicAlphabetSize + L'À');
                isAdded = true;
            }
            else if (std::regex_match(std::wstring(1, ch), cyrillicLower)) {
                encryptedText += wchar_t((ch + shift - L'à') % cyrillicAlphabetSize + L'à');
                isAdded = true;
            }
        }

        if (isDigit) {
            if (std::regex_match(std::wstring(1, ch), digits)) {
                encryptedText += wchar_t((ch + shift - '0') % digitRange + '0');
                isAdded = true;
            }
        }

        if (!isAdded) {
            encryptedText += ch;
        }
    }
}


void CaesarCoder::CaesarDecode(int shift, bool isLatin, bool isCyrillic, bool isDigit) {
    decryptedText = "";
    const int latinAlphabetSize = 26;
    const int cyrillicAlphabetSize = 32;
    const int digitRange = 10;

    std::wregex latinUpper(L"[A-Z]");
    std::wregex latinLower(L"[a-z]");
    std::wregex cyrillicUpper(L"[À-ß]");
    std::wregex cyrillicLower(L"[à-ÿ]");
    std::wregex digits(L"[0-9]");

    for (int i = 0; i < originalText->Length; i++) {
        wchar_t ch = originalText[i];
        bool isAdded = false;

        if (isLatin) {
            if (std::regex_match(std::wstring(1, ch), latinUpper)) {
                decryptedText += wchar_t((ch - shift - 'A' + latinAlphabetSize) % latinAlphabetSize + 'A');
                isAdded = true;
            }
            else if (std::regex_match(std::wstring(1, ch), latinLower)) {
                decryptedText += wchar_t((ch - shift - 'a' + latinAlphabetSize) % latinAlphabetSize + 'a');
                isAdded = true;
            }
        }

        if (isCyrillic) {
            if (std::regex_match(std::wstring(1, ch), cyrillicUpper)) {
                decryptedText += wchar_t((ch - shift - L'À' + cyrillicAlphabetSize) % cyrillicAlphabetSize + L'À');
                isAdded = true;
            }
            else if (std::regex_match(std::wstring(1, ch), cyrillicLower)) {
                decryptedText += wchar_t((ch - shift - L'à' + cyrillicAlphabetSize) % cyrillicAlphabetSize + L'à');
                isAdded = true;
            }
        }

        if (isDigit) {
            if (std::regex_match(std::wstring(1, ch), digits)) {
                decryptedText += wchar_t((ch - shift - '0' + digitRange) % digitRange + '0');
                isAdded = true;
            }
        }

        if (!isAdded) {
            decryptedText += ch;
        }
    }
}