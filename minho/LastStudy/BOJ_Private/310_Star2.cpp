#include <iostream>

int main() 
{
    int a = 0;

    std::cin >> a;

    for(int i = 0; i<a; i++){
        for(int k = i+1 ; k<a ; k++){
            std::cout << " " ;
        }
        for(int j = 0 ; j<=i ; j++){
            std::cout << "*" ;
        }
        std::cout << "\n";
    }

    return 0;
}