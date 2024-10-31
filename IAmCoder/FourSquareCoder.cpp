#include "FourSquareCoder.h"
#include <vector>
#include <algorithm>

using namespace IAmCoder;

FourSquareCoder::FourSquareCoder() : Coder() {}

/////////////ДЛЯ ЛАТИНИЦЫ////////////

cli::array<String^>^ FourSquareCoder::CreateSquare(String^ key)
{
    String^ alphabet = "ABCDEFGHIKLMNOPQRSTUVWXYZ"; 
    StringBuilder^ adjustedKey = gcnew StringBuilder();

    for (int i = 0; i < key->Length; i++)
    {
        Char c = Char::ToUpper(key[i]);
        if (c != 'J' && adjustedKey->ToString()->IndexOf(c) == -1)
        {
            adjustedKey->Append(c);
        }
    }

    for (int i = 0; i < alphabet->Length; i++)
    {
        Char c = alphabet[i];
        if (adjustedKey->ToString()->IndexOf(c) == -1)
        {
            adjustedKey->Append(c);
        }
    }

    cli::array<String^>^ square = gcnew cli::array<String^>(5);
    for (int row = 0; row < 5; row++)
    {
        square[row] = adjustedKey->ToString()->Substring(row * 5, 5);
    }

    return square;
}

Tuple<int, int>^ FourSquareCoder::FindPosition(Char letter, cli::array<String^>^ square)
{
    if (Char::ToUpper(letter) == 'J') letter = 'I';

    for (int row = 0; row < 5; row++)
    {
        int col = square[row]->IndexOf(Char::ToUpper(letter));
        if (col != -1)
        {
            return gcnew Tuple<int, int>(row, col);
        }
    }
    return nullptr; 
}

/////////////ДЛЯ КИРИЛЛИЦЫ////////////

cli::array<String^>^ FourSquareCoder::CreateSquareRU(String^ key)
{
    String^ russianAlphabet = "АБВГДЕЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ0123";
    StringBuilder^ adjustedKey = gcnew StringBuilder();

    for (int i = 0; i < key->Length; i++)
    {
        Char c = Char::ToUpper(key[i]);
        if (c == 'Ё') c = 'Е';  
        if (adjustedKey->ToString()->IndexOf(c) == -1)
        {
            adjustedKey->Append(c);
        }
    }

    for (int i = 0; i < russianAlphabet->Length; i++)
    {
        Char c = russianAlphabet[i];
        if (adjustedKey->ToString()->IndexOf(c) == -1)
        {
            adjustedKey->Append(c);
        }
    }

    cli::array<String^>^ square = gcnew cli::array<String^>(6);
    for (int row = 0; row < 6; row++)
    {
        square[row] = adjustedKey->ToString()->Substring(row * 6, 6);
    }

    return square;
}

Tuple<int, int>^ FourSquareCoder::FindPositionRU(Char letter, cli::array<String^>^ square)
{
    if (Char::ToUpper(letter) == L'Ё') letter = L'Е'; 

    for (int row = 0; row < 6; row++)
    {
        int col = square[row]->IndexOf(Char::ToUpper(letter));
        if (col != -1)
        {
            return gcnew Tuple<int, int>(row, col);
        }
    }
    return nullptr; 
}

String^ FourSquareCoder::RemoveSpaces(String^ text)
{
    StringBuilder^ result = gcnew StringBuilder();
    for each (Char c in text)
    {
        if (!Char::IsWhiteSpace(c))
        {
            result->Append(c);
        }
    }
    return result->ToString();
}

void FourSquareCoder::FourSquareEncode(String^ key1, String^ key2, bool isLatin)
{
    if (originalText->Length == 0)
    {
        encryptedText = originalText;
        return;
    }

    originalText = RemoveSpaces(originalText);

    cli::array<String^>^ square1;
    cli::array<String^>^ square2;
    cli::array<String^>^ square3;
    cli::array<String^>^ square4;

    if (isLatin)
    {
        square1 = CreateSquare(key1);              // Создание квадратов для латиницы
        square2 = CreateSquare(key2);
        square3 = CreateSquare("");                // Стандартные квадраты
        square4 = CreateSquare("");
    }
    else
    {
        square1 = CreateSquareRU(key1);              // Создание квадратов для кириллицы
        square2 = CreateSquareRU(key2);
        square3 = CreateSquareRU("");                // Стандартные квадраты
        square4 = CreateSquareRU("");
    }

    StringBuilder^ encodedText = gcnew StringBuilder();

    // Шифруем биграммами (парами символов)
    for (int i = 0; i < originalText->Length; i += 2)
    {
        Char first = originalText[i];
        Char reserve = isLatin ? 'X' : L'Х';
        Char second = (i + 1 < originalText->Length) ? originalText[i + 1] : reserve; // Если текст нечетный, добавляем X

        // Находим позиции символов в квадратах
        Tuple<int, int>^ pos1;
        Tuple<int, int>^ pos2;
        if (isLatin) {
            pos1 = FindPosition(first, square1);
            pos2 = FindPosition(second, square4);
        }
        else {
            pos1 = FindPositionRU(first, square1);
            pos2 = FindPositionRU(second, square4);
        }

        // Шифруем по позициям
        Char encFirst = square2[pos1->Item1][pos2->Item2];
        Char encSecond = square3[pos2->Item1][pos1->Item2];

        encodedText->Append(encFirst);
        encodedText->Append(encSecond);
    }

    encryptedText = encodedText->ToString();
}

void FourSquareCoder::FourSquareDecode(String^ key1, String^ key2, bool isLatin)
{
    if (originalText->Length == 0)
    {
        decryptedText = originalText;
        return;
    }

    cli::array<String^>^ square1;
    cli::array<String^>^ square2;
    cli::array<String^>^ square3;
    cli::array<String^>^ square4;

    if (isLatin)
    {
        square1 = CreateSquare(key1);              // Создание квадратов для латиницы
        square2 = CreateSquare(key2);
        square3 = CreateSquare("");                // Стандартные квадраты
        square4 = CreateSquare("");
    }
    else
    {
        square1 = CreateSquareRU(key1);              // Создание квадратов для кириллицы
        square2 = CreateSquareRU(key2);
        square3 = CreateSquareRU("");                // Стандартные квадраты
        square4 = CreateSquareRU("");
    }

    StringBuilder^ decodedText = gcnew StringBuilder();

    // Дешифруем биграммами (парами символов)
    for (int i = 0; i < originalText->Length; i += 2)
    {
        Char first = originalText[i];
        Char reserve = isLatin ? 'X' : L'Х';
        Char second = (i + 1 < originalText->Length) ? originalText[i + 1] : reserve;

        // Находим позиции символов в квадратах
        Tuple<int, int>^ pos1;
        Tuple<int, int>^ pos2;
        if (isLatin) {
            pos1 = FindPosition(first, square2);
            pos2 = FindPosition(second, square3);
        }
        else {
            pos1 = FindPositionRU(first, square2);
            pos2 = FindPositionRU(second, square3);
        }

        // Дешифруем по позициям
        Char decFirst = square1[pos1->Item1][pos2->Item2];
        Char decSecond = square4[pos2->Item1][pos1->Item2];

        decodedText->Append(decFirst);
        decodedText->Append(decSecond);
    }

    decryptedText = decodedText->ToString();
}