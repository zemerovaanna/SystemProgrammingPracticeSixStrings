#include <iostream>
#include <string.h>
using namespace std;

void RemoveLowels(char* str)
{
	string result = "";
	char lowels[12] = { 'A', 'E', 'I', 'O', 'Y', 'U', 'a', 'e', 'i', 'o', 'y', 'u' };

	cout << "Удаление гласных . . ." << endl;
	for (int i = 0; i < strlen(str); i++)
	{
		int j = 0;
		bool lowel = false;

		while (j < sizeof(lowels) / sizeof(lowels[0]))
		{
			if (str[i] == lowels[j])
			{
				lowel = true;
			}
			j++;
		}

		if (lowel == false)
		{
			result += str[i];
		}
	}

	cout << "Результат:" << endl;
	cout << result << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");
	char input[100];
	cout << "Пожалуйста, введите строку ( только английские буквы! ):" << endl;
	gets_s(input);
	RemoveLowels(input);
	return 0;
}