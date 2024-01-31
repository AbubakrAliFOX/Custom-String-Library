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
};

int main()
{

    clsString string2("What is going on");

    string2.PrintFirstLetterOfWord();

    clsString::PrintFirstLetterOfWord("Where are you");
}
