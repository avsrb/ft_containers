//
// Created by Melinda Shmelly on 6/12/22.
//

#include "Vector.hpp"
#include <iostream>
#include <vector>

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
		std::cout << myvector.at(i) << "\t";
	}
	std::cout << "\n";
	ft::Vector<int>::iterator it = myvector.begin();
	myvector.insert(it, 3, 3);
	for(int i = 0; i < myvector.size(); i++) {
		std::cout << myvector.at(i) << "\t";
	}

//	std::vector<int> myvector;
//
//	myvector.push_back(1);
//	myvector.push_back(1);
//	myvector.push_back(1);
//	myvector.push_back(1);
//	myvector.push_back(1);
//
//	myvector.push_back(1);
//	myvector.push_back(1);
//	myvector.push_back(1);
//	myvector.push_back(1);
//	myvector.push_back(1);
//
//	for(int i = 0; i < myvector.size(); i++) {
//		std::cout << myvector.at(i) << "\t";
//	}
//	std::cout << "\n";
//	std::vector<int>::iterator it = myvector.begin();
//	myvector.insert(it, 3, 3);
//	for(int i = 0; i < myvector.size(); i++) {
//		std::cout << myvector.at(i) << "\t";
//	}
	return 0;
}