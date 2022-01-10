

#ifndef SWAP_HPP
#define SWAP_HPP

template <typename T>
void swap(T *xp, T *yp)  
{  
    T temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  


#endif