#include <iostream>
#include <cctype>
#include <sstream>
#include "lista.h"
using namespace std;

int main()
{
	string temp;
	cout << "Digite a palavra/frase: ";
	getline(cin, temp, '\n');
	ListaLigada<char> palin;

	for (auto i = 0; temp[i]; i++)
	{
		if (isalpha(temp[i]))
		{
			if (isupper(temp[i]))
			{
				temp[i] = tolower(temp[i]);
			}
			palin.InsereNoInicio(temp[i]);
		} else {
			temp.erase(i, 1);
			i--;
		}
	}
	
	stringstream o;
	o << palin;
	string result = o.str();

	if (temp == result) {
		cout << "Isto é um palíndromo." << endl;
	} else {
		cout << "Isto não é um palíndromo." << endl;
	}

	return 0;
}