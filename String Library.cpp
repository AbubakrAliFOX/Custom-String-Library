#include <iostream>
using namespace std;

class clsString
{
private:
    string _Value;

public:
    clsString()
    {
        _Value = "";
    }

    clsString(string Value)
    {
        _Value = Value;
    }

    void setValue(string Value)
    {
        _Value = Value;
    }

    string getValue()
    {
        return _Value;
    }

    __declspec(property(get = getValue, put = setValue)) string Value;

    // string methods:

    static void PrintFirstLetterOfWord(string Sentence)
    {
        bool FirstLetter = true;

        for (short i = 0; i < Sentence.length(); i++)
        {
            if (Sentence[i] != ' ' && FirstLetter)
            {
                cout << Sentence[i] << endl;
            }

            FirstLetter = Sentence[i] == ' ';
        }
    }

    void PrintFirstLetterOfWord()
    {
        PrintFirstLetterOfWord(Value);
    }

    static char CapitilizeLetter(char Letter)
    {
        return char(toupper(Letter));
    }

    static void CapatilizeSentence(string Sentence)
    {
        bool IsFirstLetter = true;

        for (short i = 0; i < Sentence.length(); i++)
        {
            if (Sentence[i] != ' ' && IsFirstLetter)
            {
                Sentence[i] = CapitilizeLetter(Sentence[i]);
            }

            IsFirstLetter = Sentence[i] == ' ';
        }

        cout << Sentence << endl;
    }

    void CapatilizeSentence()
    {
        CapatilizeSentence(Value);
    }

    static char LowercaseLetter(char Letter)
    {
        return char(tolower(Letter));
    }

    static void LowercaseSentece(string Sentence)
    {
        bool IsFirstLetter = true;

        for (short i = 0; i < Sentence.length(); i++)
        {
            if (Sentence[i] != ' ' && IsFirstLetter)
            {
                Sentence[i] = LowercaseLetter(Sentence[i]);
            }

            IsFirstLetter = Sentence[i] == ' ';
        }

        cout << Sentence << endl;
    }

    void LowercaseSentece()
    {
        LowercaseSentece(Value);
    }

    static char InvertChar(char charachter)
    {
        return isupper(charachter) ? tolower(charachter) : toupper(charachter);
    }

    static string InvertString(string Str)
    {
        for (short i = 0; i < Str.length(); i++)
        {
            Str[i] = InvertChar(Str[i]);
        }

        return Str;
    }

    string InvertString()
    {
        return InvertString(Value);
    }

    static int UpperCaseCount(string Str)
    {
        int UpperCounter = 0;
        for (short i = 0; i < Str.length(); i++)
        {
            isupper(Str[i]) && UpperCounter++;
        }

        return UpperCounter;
    }

    int UpperCaseCount()
    {
        return UpperCaseCount(Value);
    }

    static int LowerCaseCount(string Str)
    {
        int LowerCounter = 0;
        for (short i = 0; i < Str.length(); i++)
        {
            islower(Str[i]) && LowerCounter++;
        }

        return LowerCounter;
    }

    int LowerCaseCount()
    {
        return LowerCaseCount(Value);
    }

    static void LetterInStringCounter(string Sentence, char Charachter, bool MatchCase = true)
    {
        int Counter = 0;

        for (short i = 0; i < Sentence.length(); i++)
        {
            if (MatchCase)
            {
                (Sentence[i] == Charachter) && Counter++;
            }
            else
            {
                (tolower(Sentence[i]) == tolower(Charachter)) && Counter++;
            }
        }

        cout << "You letter " << Charachter << ", " << char(toupper(Charachter)) << " has " << Counter << " occurences in the string.";
    }

    void LetterInStringCounter(char Char, bool MatchCase)
    {
        LetterInStringCounter(Value, Char, MatchCase);
    }

    bool IsVowel(char Ch)
    {
        Ch = tolower(Ch);
        return Ch == 'a' || Ch == 'e' || Ch == 'i' || Ch == 'o' || Ch == 'u';
    }

    void CountVowels(string String)
    {
        int Counter = 0;

        for (short i = 0; i < String.length(); i++)
        {
            IsVowel(String[i]) && Counter++;
        }

        cout << Counter << " Vowels" << endl;
    }

    void CountVowels()
    {
        CountVowels(Value);
    }
};

int main()
{

    clsString string2("What Is Going on");

    // cout << string2.InvertString();
    // string2.LetterInStringCounter('a', true);
    string2.CountVowels();
    // clsString::PrintFirstLetterOfWord("where are you");
}
