
// 2-4.cpp
// Write a program which accepts a character and display its next character.

#include <iostream>

using namespace std;

int main()
{
	char character;
	int characterASCII;
	char NewCharacter;

	do {
		cout << "  Enter in a letter: ";
		cin >> character;
		
		characterASCII = int(character);

		if ((characterASCII > 65) || (characterASCII < 122))
		{
			if (characterASCII == 90)
			{
				characterASCII = 65;
			}
			else if (characterASCII == 122) {
				characterASCII = 97;
			}
			else
			{
				characterASCII = characterASCII++;
			}

			NewCharacter = char(characterASCII);


			cout << "\n  The letter after the letter you entered is " << NewCharacter << endl;
		}
		else
		{
			cout << "\n  THE CHARACTER YOU ENTERED IS NOT A LETTER" << endl;
		}
	} while (character != '0');
}