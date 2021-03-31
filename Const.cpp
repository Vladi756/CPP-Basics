#include <iostream>
#include <vector>

void print_array(const int data[], int size){     // Even though not passed by reference, arrays decay to pointers.
                                                 // Therefore, we use the const keyword to ensure that variable cannot be changed.
    for(int i = 0; i < size; i++){
            std::cout << data[i] << std::endl;
    }
}

int main(){

    int data[] = {1,2,3};
    print_array(data, 3);
    return 0;
}
