//
// Created by Melinda Shmelly on 6/4/22.
//

#ifndef FT_CONTAINERS_STACK_HPP
#define FT_CONTAINERS_STACK_HPP

//#include <vector>
#include "Vector.hpp"

namespace ft {
	template <class T, class Container = ft::Vector<T> >
	class Stack {
		Container _container;
	public:
		typedef	Container												container_type;
		typedef typename Container::value_type							value_type;
		typedef typename Container::size_type							size_type;
		typedef typename Container::reference							reference;
		typedef typename Container::const_reference						const_reference;

		/*********************CONSTRUCTORS AND DESTRUCTORS**********************/
		explicit Stack(const Container &cont = Container())				{ _container = cont; };
		Stack(const Stack &other) 										{ _container = other._container; };
		~Stack() 														{};
		Stack& operator=(const Stack &other) {
			if (this == &other) { return *this; }
			_container = other._container;
			return *this;
		};
		/*************************MEMBER FUNCTIONS******************************/
		reference top()													{ return _container.back(); };
		const_reference top() const										{ return _container.back(); };
		bool empty() const 												{ return _container.empty(); };
		size_type size() const 											{ return _container.size(); };
		void push(const value_type &value) 								{ _container.push_back(value); };
		void pop() 														{ _container.pop_back(); };
		/****************************OPERATORS**********************************/
		friend bool operator==(const Stack &lhs, const Stack &rhs) 		{ return lhs._container == rhs._container; };
		friend bool operator!=(const Stack &lhs, const Stack &rhs) 		{ return lhs._container != rhs._container; };
		friend bool operator<=(const Stack &lhs, const Stack &rhs) 		{ return lhs._container <= rhs._container; };
		friend bool operator>=(const Stack &lhs, const Stack &rhs) 		{ return lhs._container >= rhs._container; };
		friend bool operator<(const Stack &lhs, const Stack &rhs) 		{ return lhs._container < rhs._container; };
		friend bool operator>(const Stack &lhs, const Stack &rhs) 		{ return lhs._container > rhs._container; };
	};
}


#endif //FT_CONTAINERS_STACK_HPP
