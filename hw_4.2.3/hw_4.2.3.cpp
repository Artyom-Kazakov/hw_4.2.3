#include <iostream>
#include <string>

struct adress {
	std::string country = "default";
	std::string city = "default";
	std::string street = "default";
	int building = 0;
	int zip = 0;
};

void print_adress(adress* adr) {
	std::cout << "Страна: " << adr->country << "\nГород: " << adr->city << "\nУлица: " << adr->street << "\nДом: " << adr->building << "\nИндекс: " << adr->zip;
}

int main() {
	
	setlocale(LC_ALL, "Russian");

	adress adr;
	adr.country = "Зимбабве";
	adr.city = "Хараре";
	adr.street = "Уэл-Роуд";
	adr.building = 12;
	adr.zip = 123456;
	print_adress(&adr);

	std::cout << std::endl << std::endl;

	adress adr_2;
	adr_2.country = "Россия";
	adr_2.city = "Москва";
	adr_2.street = "Неглинная";
	adr_2.building = 12;
	adr_2.zip = 198765;
	print_adress(&adr_2);
}