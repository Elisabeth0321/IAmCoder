#include "VinegereCoder.h"

using namespace IAmCoder;

VinegereCoder::VinegereCoder() : Coder() {}

void VinegereCoder::VinegereEncode(String^ key)
{
    if (originalText->Length == 0 || key->Length == 0)
    {
        encryptedText = originalText;
        return;
    }

    StringBuilder^ encodedText = gcnew StringBuilder();
    int keyIndex = 0;

    for (int i = 0; i < originalText->Length; i++)
    {
        wchar_t currentChar = originalText[i];
        wchar_t keyChar = key[keyIndex % key->Length];

        // ��������, �������� �� ������ ��������� ������
        if (currentChar >= L'A' && currentChar <= L'Z')
        {
            wchar_t encodedChar = (currentChar - L'A' + (keyChar >= L'A' && keyChar <= L'Z' ? keyChar - L'A' : keyChar - L'a')) % 26 + L'A';
            encodedText->Append(encodedChar);
            keyIndex++; // ��������� � ���������� ������� �����
        }
        // ��������, �������� �� ������ �������� ������
        else if (currentChar >= L'a' && currentChar <= L'z')
        {
            wchar_t encodedChar = (currentChar - L'a' + (keyChar >= L'A' && keyChar <= L'Z' ? keyChar - L'A' : keyChar - L'a')) % 26 + L'a';
            encodedText->Append(encodedChar);
            keyIndex++;
        }
        else
        {
            // ���� ������ �� �����, ��������� ��� ��� ����
            encodedText->Append(currentChar);
        }
    }
    encryptedText = encodedText->ToString();
}

void VinegereCoder::VinegereDecode(String^ key)
{
    if (originalText->Length == 0 || key->Length == 0)
    {
        decryptedText = originalText;
        return;
    }

    StringBuilder^ decodedText = gcnew StringBuilder();
    int keyIndex = 0;

    for (int i = 0; i < originalText->Length; i++)
    {
        wchar_t currentChar = originalText[i];
        wchar_t keyChar = key[keyIndex % key->Length];

        // ��������, �������� �� ������ ��������� ������
        if (currentChar >= L'A' && currentChar <= L'Z')
        {
            wchar_t decodedChar = (currentChar - L'A' - (keyChar >= L'A' && keyChar <= L'Z' ? keyChar - L'A' : keyChar - L'a') + 26) % 26 + L'A';
            decodedText->Append(decodedChar);
            keyIndex++; // ��������� � ���������� ������� �����
        }
        // ��������, �������� �� ������ �������� ������
        else if (currentChar >= L'a' && currentChar <= L'z')
        {
            wchar_t decodedChar = (currentChar - L'a' - (keyChar >= L'A' && keyChar <= L'Z' ? keyChar - L'A' : keyChar - L'a') + 26) % 26 + L'a';
            decodedText->Append(decodedChar);
            keyIndex++;
        }
        else
        {
            // ���� ������ �� �����, ��������� ��� ��� ����
            decodedText->Append(currentChar);
        }
    }
    decryptedText = decodedText->ToString();
}