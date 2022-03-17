// Персональный шаблон проекта С++
#include <iostream>
#include <string>

using namespace std;

struct person {
		string name;
		int age;
		int coins[5];
	};

void showPerson(person &P) {
	cout << P.name << ", " << P.age << " years\n";
	cout << "Монеты: ";
	for (int i = 0; i < 5; i++)
		cout << P.coins[i] << ", ";
	cout << "\b\b.\n";

}
int yearOfBirth(person &P, int year) {
	cout << "Год рождения: ";
	return year - P.age;
}
int cash(person& P) {
	int sum = 0;
	for (int i = 0; i < 5; i++)
		sum += P.coins[i];
	return sum;
}



int main() {
	setlocale(LC_ALL, "Russian");

	// Задача 1
	person A = { "Kate Walker", 27, {5, 6, 3, 2, 7} };
	showPerson(A);
	cout << yearOfBirth(A, 2022) << endl;
	cout << "Сумма монет: " << cash(A) << endl;
	 






	return 0;
}