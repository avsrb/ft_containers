//
// Created by Melinda Shmelly on 6/19/22.
//

#ifndef FT_CONTAINERS_VECTOR_HPP
#define FT_CONTAINERS_VECTOR_HPP

#include <memory>

namespace ft {
    template < class T, class A = std::allocator<T> >
    class Vector {
    public:

        typedef A                                                   allocator_type;
        typedef std::allocator_traits<allocator_type>               alloc_traits;

        typedef T                                                   value_type;
        typedef value_type&                                         reference;
        typedef const value_type&                                   const_reference;
        typedef typename alloc_traits::size_type                    size_type;
        typedef typename alloc_traits::pointer                      pointer;
        typedef typename alloc_traits::const_pointer                const_pointer;
        typedef typename alloc_traits::difference_type              difference_type;
//        typedef ft::wrap_iter<pointer>                              iterator;
//        typedef ft::wrap_iter<const_pointer>                        const_iterator;
//        typedef ft::reverse_iterator<iterator>                      reverse_iterator;
//        typedef ft::reverse_iterator<const_iterator>                const_reverse_iterator;


    private:

        pointer         _begin;
        pointer         _end;
        pointer         _end_cap;
        pointer         _container;
        size_type       _size;
        size_type       _capacity;
        allocator_type  _allocator;

    };

}


#endif //FT_CONTAINERS_VECTOR_HPP
