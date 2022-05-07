/*Реалізуйте методи для створеного класу MyString(Рядка):
1. count(а) - кількість зустрічі символа а в рядку           4. remove(a) - видаляє заданий символ в рядку
2. countstr(a) - кількість зустрічі підрядка а в рядку       5. insert(a, b) - вставка літери b на a-тий індекс
3. replace(a,b) - заміна всіх a на b                         6. empty() - повертає true, якщо рядок пустий
7. size - повертає довжину рядка
Перегрузіть оператор [] для створеного класу MyString(Рядка)
Перегрузіть оператор + для створеного класу MyString(Рядка).*/
#include <iostream>
#include "string.h"
#include "String"
#include <locale>
#include "windows.h"

using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	MyString A("Мене звати Микола  я намагаюсь вивчити ООП");
	MyString B(" і це мені не дуже вдається((((");
	MyString C = A + B; cout << "Перегрузка оператора  +:  " << '"' << C << '"' << endl << endl;
	cout << "Символ а зустрічається  " << C.count('а') << " разів" << endl << endl;
	cout << "Вставка літери Ч на і-тий індекс "; C.insert(8, 'Ч'); cout << '"' << C << '"' << endl << endl;
	cout << "Вибрана Вами підстрока зустрічається:  " << C.countStr("ви") << " разів" << endl << endl;
	cout << "Заміна одного символу на інший "; C.replace('а', 'к'); cout << "Замінюємо символ а на символ к  " << '"' << C << '"' << endl << endl;
	cout << "Видаляємо символ а"; C.remove('а'); cout << endl << endl;
	cout << "Рядок порожній – істина чи хибна:: " << C.empty() << endl << endl;
	cout << "Розмір строки = " << C.Size() << endl << endl;
	cout << "Оператор перевантаження [], деякий символ" << '"' << C[4] << '"' << endl << endl;
}