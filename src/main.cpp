#include <iostream>
#include "Stack.h"
#include "stackDemo.h"
#include "stackInput.h"

//cd build
//g++ ../src/main.cpp -I ../include/
//./a.exe

int main(){
    try{
        char response;

        //DEMO
        stackDemo();
        
        std::cout << "Do you want to use the USER INPUT Feature? (Y for Yes/N for No): ";
        std::cin >> response;

        if(response == 'Y'){
            //USER INPUT
            stackInput();
        }
        else{
            std::cout << "\n\n\t\t\t\tTHE END\n\n" << std::endl;
        }
        
        
    }

    catch (const char *message)
    {
        std::cout << message << std::endl;
    }
}