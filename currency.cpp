#include <iostream>

int main() {

	double pesos, reais, soles;
	double dollars;


	std::cout << "Enter number of Colombian Pesos: ";
	std::cin >> pesos;
	// Pesos conversion rate: 0.05
	std::cout << "Enter number of Brazilian Reais: ";
	std::cin >> reais;
	// Reais conversion rate: 0.19
	std::cout << "Enter number of Peruvian Soles: ";
	std::cin >> soles;
	// Soles conversion rate: 0.25

	dollars = 0.05 * pesos + 0.19 * reais + 0.25 * soles;
	std::cout << "US Dollars = $" << dollars << "\n";

}