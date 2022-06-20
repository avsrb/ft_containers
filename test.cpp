//
// Created by Melinda Shmelly on 6/12/22.
//

#include <vector>
#include <iostream>

void	createAndPrint(int len) {
	std::vector<int> myvector;

	for (unsigned i=0; i < len; i++) {
		myvector.push_back(i);
	}
	for (unsigned i=0; i<myvector.empty(); i++) {
		std::cout << myvector.at(i) << '\n';
	}
}

void print(std::vector<int> vector) {
	std::cout << "=========S T A R T=========" << '\n';
	for (unsigned i=0; i< vector.size(); i++) {
		std::cout << vector.at(i) << '\n';
	}
	std::cout << "========F I N I S H=========" << '\n' << '\n';
}

int	main(int ac, char **av) {


	return 0;
}