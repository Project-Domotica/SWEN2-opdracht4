#ifndef COMB_SORT_INCLUDED
#define COMB_SORT_INCLUDED

#include <algorithm>


// To find gap between elements 
int get_next_gap(int gap) 
{ 
    // Shrink gap by Shrink factor 
    gap = (gap*10)/13; 
  
    if (gap < 1) 
        return 1; 
    return gap; 
} 
  
// Function to sort a[0..n-1] using Comb Sort
template <typename T>
void comb_sort(T arr[], int n) 
{ 
    // Initialize gap 
    int gap = n; 
  
    // Initialize swapped as true to make sure that 
    // loop runs 
    bool swapped = true; 
  
    // Keep running while gap is more than 1 and last 
    // iteration caused a swap 
    while (gap != 1 || swapped == true) 
    { 
        // Find next gap 
        gap = get_next_gap(gap); 
  
        // Initialize swapped as false so that we can 
        // check if swap happened or not 
        swapped = false; 
  
        // Compare all elements with current gap 
        for (int i=0; i<n-gap; i++) 
        { 
            if (arr[i] > arr[i+gap]) 
            { 
                std::swap(arr[i], arr[i+gap]); 
                swapped = true; 
            } 
        } 
    } 
} 
  

  




#endif