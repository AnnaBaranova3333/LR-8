#include <iostream>
using namespace std;
int main()
{
	char res; // Переменная символа
	cout << "Ведите букву нижнего регистра:" << endl; // Просьба ввести букву ниж.регистра
	cin >> res; // Ввод
	cout << endl; // Пропуск строки
	cout << "Та же буква в верхнем регистре:" << endl << (char)toupper(res) << endl; //Перевод буквы в верх.регистр
}