#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T, typename Func>
void iter(T* arr, size_t size, Func function)
{
    size_t i = 0;
    if (!arr)
        return ;
    while (i <  size)
        function(arr[i++]);
}

#endif