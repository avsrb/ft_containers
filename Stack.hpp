//
// Created by Melinda Shmelly on 6/4/22.
//

#ifndef FT_CONTAINERS_STACK_HPP
#define FT_CONTAINERS_STACK_HPP

#include <vector>
namespace ft {
	template<class T, class Container = std::vector<T> >
	class Stack {
	private:
		Container	_container;

	public:
		typedef	Container								container_type;
		typedef typename Container::value_type			value_type;
		typedef typename Container::size_type			size_type;
		typedef typename Container::reference			reference;
		typedef typename Container::const_reference		const_reference;

        explicit Stack(const container_type& cont = container_type()) : _container(cont) {}
        Stack(const Stack& s) : _container(s._container) {}
        Stack& operator=(const Stack& s) {
            if (this != &s) {
                _container = s._container;
            }
            return (*this);
        }

		~Stack() { };

		reference top() {
			return _container.back();
		};
		const_reference top() const {
			return _container.back();
		};
		bool empty() const {
			return _container.empty();
		};
		size_type size() const {
			return _container.size();
		};
		void push(const value_type &value) {
			_container.push_back(value);
		};
		void pop() {
			_container.pop_back();
		};
		friend bool operator==(const Stack &lhs, const Stack &rhs) {
			return lhs._container == rhs._container;
		};
		friend bool operator!=(const Stack &lhs, const Stack &rhs) {
			return lhs._container != rhs._container;
		};
		friend bool operator<=(const Stack &lhs, const Stack &rhs) {
			return lhs._container <= rhs._container;
		};
		friend bool operator>=(const Stack &lhs, const Stack &rhs) {
			return lhs._container >= rhs._container;
		};
		friend bool operator<(const Stack &lhs, const Stack &rhs)  {
			return lhs._container < rhs._container;
		};
		friend bool operator>(const Stack &lhs, const Stack &rhs)  {
			return lhs._container > rhs._container;
		};
	};
}


#endif //FT_CONTAINERS_STACK_HPP
