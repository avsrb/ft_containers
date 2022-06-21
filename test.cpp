//
// Created by Melinda Shmelly on 6/12/22.
//

#include "Vector.hpp"
#include <iostream>

int	main(int ac, char **av) {
	ft::Vector<int> myvector;

	myvector.push_back(1);
	myvector.push_back(1);
	myvector.push_back(1);
	myvector.push_back(1);
	myvector.push_back(1);
	myvector.push_back(1);
	myvector.push_back(1);
	myvector.push_back(1);
	myvector.push_back(1);
	myvector.push_back(1);

	for(int i = 0; i < myvector.size(); i++) {
		std::cout << myvector.at(i) << "\n";
	}

	return 0;
}