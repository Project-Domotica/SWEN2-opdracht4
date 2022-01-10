#ifndef TEST
#define TEST

template <typename T>
int test(T* arr, int size){
    for(int n = 1; n < size; n++){
        if(arr[n - 1] <= arr[n]){
            
        }else{
            return n - 1;
        }
    }
    return -1;
}

#endif //TEST