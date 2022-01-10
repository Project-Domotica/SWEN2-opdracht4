#ifndef BUBBLE_SORT_HPP
#define BUBBLE_SORT_HPP

#include <utility>
#include <algorithm>

template <typename T>
void bubble_sort(T arr[], int n);

template <typename T>
void bubble_sort(T arr[], int n)   
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
    // Last i elements are already in place  
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            std::swap<T>(arr[j], arr[j+1]);  
}  

#endif