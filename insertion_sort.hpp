#ifndef SELECTION_SORT_INCLUDED
#define SELECTION_SORT_INCLUDED

#include <algorithm>


template <typename T>
void selection_sort(T arr[], int n);



template <typename T>
void selection_sort(T arr[], int n) 
{  
    int i, j, min_idx;  
  
    // One by one move boundary of unsorted subarray  
    for (i = 0; i < n-1; i++)  
    {  
        // Find the minimum element in unsorted array  
        min_idx = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min_idx])  
            min_idx = j;  
  
        // Swap the found minimum element with the first element  
        std::swap(arr[min_idx], arr[i]);  
    }  
}  
  

  

  




#endif