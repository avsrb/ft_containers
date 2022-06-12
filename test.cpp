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
	// constructors used in the same order as described above:
//	std::vector<int> first;                                // empty vector of ints
//	std::vector<int> second (4,100);                       // four ints with value 100
//	std::vector<int> third (second.begin(),second.end());  // iterating through second
//	std::vector<int> fourth (third);                       // a copy of third
//
//	print(first);
//	print(second);
//	print(third);
//	print(fourth);
//
//	// the iterator constructor can also be used to construct from arrays:
//	int myints[] = {16,2,77,29};
//	std::vector<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );
//
//	std::cout << "The contents of fifth are:";
//	for (std::vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
//		std::cout << ' ' << *it;
//	std::cout << '\n';
	std::vector<int> first, second, third;
	
	std::vector<int>::iterator it;
	it=first.begin()+1;
	
	second.assign (it,first.end()-1); // the 5 central values of first
	
	int myints[] = {1776,7,4};
	third.assign (myints,myints+3);   // assigning from array.
	
	std::cout << "Size of first: " << int (first.size()) << '\n';
	std::cout << "Size of second: " << int (second.size()) << '\n';
	std::cout << "Size of third: " << int (third.size()) << '\n';

	return 0;
}