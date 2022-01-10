
#include <stdlib.h>     /* srand, rand */
#include <iostream>
#include <algorithm>
using namespace std;


#include "bubble_sort.hpp"
#include "comb_sort.hpp"
#include "cycle_sort.hpp"
#include "heap_sort.hpp"
#include "insertion_sort.hpp"
#include "merge_sort.hpp"
#include "pancake_sort.hpp"
#include "quick_sort.hpp"
#include "radix_sort.hpp"
#include "selection_sort.hpp"
#include "shell_sort.hpp"
#include "tree_sort.hpp"

#include "test.hpp"

#define ARR_LENGTH 1000

// Driver program to test above functions  
int main()  
{

    int* arr = new int[ARR_LENGTH];  
    int* arr_bas = new int[ARR_LENGTH];  
    const int n = ARR_LENGTH; 

    /* fill arr_bas with random values */
    for_each(arr_bas, arr_bas + n, [](int & v){ v = rand(); });
    
    /* copy array values */
    /* sorting functions */
    copy(arr_bas, arr_bas + n, arr);
    selection_sort<int>(arr, n);

    copy(arr_bas, arr_bas + n, arr);  
    bubble_sort<int>(arr,n);

    copy(arr_bas, arr_bas + n, arr);
    radix_sort<int>(arr,n);

    copy(arr_bas, arr_bas + n, arr);
    pancake_sort<int>(arr,n);

    copy(arr_bas, arr_bas + n, arr);
    merge_sort<int>(arr, 0, n - 1);
   
    copy(arr_bas, arr_bas + n, arr);
    shell_sort<int>(arr,n);
    
    copy(arr_bas, arr_bas + n, arr);
    quick_sort<int>(arr,0,n-1);

    copy(arr_bas, arr_bas + n, arr);
    tree_sort<int>(arr,n);

    copy(arr_bas, arr_bas + n, arr);
    comb_sort<int>(arr,n);

    copy(arr_bas, arr_bas + n, arr);
    cycle_sort<int>(arr,n);

    copy(arr_bas, arr_bas + n, arr);
    heap_sort<int>(arr,n);

    std::cout << "Tested: " << test(arr_bas, n) << std::endl;

    cout << "Unsorted array: \n"; 
    for_each(arr_bas, arr_bas + n, [](int& v){cout << v << " ";}); 

    cout << "Sorted array: \n"; 
    for_each(arr, arr + n, [](int& v){cout << v << " ";}); 

    std::cin.get();

    delete[] arr_bas;  
    delete[] arr;

    float arr_f[10];
    for(int n =0; n < 10; n++){
        arr_f[n] = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
    }

    std::cout << "\nUnsorted float array:" << std::endl;
    for(float n : arr_f){
        std::cout << n << std::endl;
    }

    heap_sort<float>(arr_f, 10);

    std::cout << "\nTested: " << test<float>(arr_f, 10) << std::endl;

    std::cout << "Sorted float array:" << std::endl;
    for(float n : arr_f){
        std::cout << n << std::endl;
    }

    std::cin.get();

    return 0;  
}