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

void Coder::RailFenceEncode(int rails)
{
    if (rails < 2 || originalText->Length == 0)
    {
        encryptedText = originalText;
        return;
    }

    cli::array<StringBuilder^>^ railRows = gcnew cli::array<StringBuilder^>(rails);
    for (int i = 0; i < rails; i++)
    {
        railRows[i] = gcnew StringBuilder();
    }

    int currentRail = 0;
    bool directionDown = true;

    for (int i = 0; i < originalText->Length; i++)
    {
        railRows[currentRail]->Append(originalText[i]);

        if (currentRail == 0)
            directionDown = true;
        else if (currentRail == rails - 1)
            directionDown = false;

        currentRail += directionDown ? 1 : -1;
    }

    StringBuilder^ encodedText = gcnew StringBuilder();
    for (int i = 0; i < rails; i++)
    {
        encodedText->Append(railRows[i]->ToString());
    }

    encryptedText = encodedText->ToString();
}

void Coder::RailFenceDecode(int rails)
{
    if (rails < 2 || originalText->Length == 0)
    {
        decryptedText = originalText;
        return;
    }

    int length = originalText->Length;
    cli::array<int>^ railLengths = gcnew cli::array<int>(rails);

    int currentRail = 0;
    bool directionDown = true;

    for (int i = 0; i < length; i++)
    {
        railLengths[currentRail]++;

        if (currentRail == 0)
            directionDown = true;
        else if (currentRail == rails - 1)
            directionDown = false;

        currentRail += directionDown ? 1 : -1;
    }

    cli::array<StringBuilder^>^ railRows = gcnew cli::array<StringBuilder^>(rails);
    cli::array<int>^ railPositions = gcnew cli::array<int>(rails);
    for (int i = 0, index = 0; i < rails; i++)
    {
        railRows[i] = gcnew StringBuilder(originalText->Substring(index, railLengths[i]));
        index += railLengths[i];
    }

    StringBuilder^ decodedText = gcnew StringBuilder();
    currentRail = 0;
    directionDown = true;

    for (int i = 0; i < length; i++)
    {
        decodedText->Append(railRows[currentRail]->ToString(railPositions[currentRail], 1));
        railPositions[currentRail]++;

        if (currentRail == 0)
            directionDown = true;
        else if (currentRail == rails - 1)
            directionDown = false;

        currentRail += directionDown ? 1 : -1;
    }

    decryptedText = decodedText->ToString();
}