//
//  main.cpp
//  HelloWorld
//
//  Created by Günter Hummel on 24.06.20.
//  Copyright © 2020 Günter Hummel. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

void print_vector (const std::string &description, const std::vector <int> &v);

int main(int argc, const char * argv[]) {

    std::cout << "Hello, World!\n";
    
    std::vector<int> v = { 5, 9, -1, 200, 0, -22, 8, 100, 2, -220};
    
    print_vector("Content of vector        : ", v);
    
    sort(v.begin(), v.end());
    
    print_vector("Content of sorted vector : ", v);
    
    std::cout << "sizeof (bool)   = " << sizeof(bool)   << "\n";
    std::cout << "sizeof (short)  = " << sizeof(short)  << "\n";
    std::cout << "sizeof (char)   = " << sizeof(char)   << "\n";
    std::cout << "sizeof (float)  = " << sizeof(float)  << "\n";
    std::cout << "sizeof (double) = " << sizeof(double) << "\n";
    std::cout << "sizeof (void*)  = " << sizeof(void*)  << "\n";
    
    return 0;
}

void print_vector (const std::string &description, const std::vector <int> &v) {
    
    std::cout << description << " = ";
    
    for (int i = 0; i < v.size(); ++i) {
        std::cout << v[i] << ((i != v.size()-1) ? ", " : "");
    }
    
    std::cout << "\n";
}
