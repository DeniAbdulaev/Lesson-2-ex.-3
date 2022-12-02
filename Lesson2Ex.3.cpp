#include <iostream>
#include <string>
using namespace std;

struct adress
{
	string city;
	string street;
	int num_of_build;
	int num_of_flat;
	int zip_code;
};

void print_adress(adress x) {

	setlocale(LC_ALL, "Russian");

	std::cout << "Ваш адрес: " << x.city << ", улица " << x.street << "дом "
		<< x.num_of_build << ", квартира " << x.num_of_flat << ", почтовый индекс " << x.zip_code;
};
int main()
{
	setlocale(LC_ALL, "Russian");

	adress your_adress;
	std::cout << "Город: ";
	std::getline(std::cin, your_adress.city);
	
	std::cout << "Улица: ";
	std::getline(std::cin, your_adress.street);

	std::cout << "Номер дома: ";
	std::cin >> your_adress.num_of_build;

	std::cout << "Номер квартиры: ";
	std::cin >> your_adress.num_of_flat;

	std::cout << "Индекс: ";
	std::cin >> your_adress.zip_code;

	print_adress(your_adress);
}
