#include <iostream>


int main(){
    /*
     * Debugging practice. Start by pressing the debugging/run button in the left side panel (alternatively ctrl + shift + d or command + shift + d to open debug window).
     * Here you will monitor the value of the variable "number" as well as the output of each statement to the console.
     * To begin place a breakpoint in the line #10 of code and run debug with g++.exe
     * To go to the next line you will use F10 or the Step Over button in the debugging panel that shows on the top of the screen. 
     */
    int number = 12;
    std::cout << "Statement 1) Value is: " << number+1 << std::endl;
    std::cout << "Statement 2) Value is: " << number++ << std::endl;
    std::cout << "Statement 3) Value is: " << --number << std::endl;
    std::cout << "Statement 4) Value is: " << number   << std::endl;
    std::cout << "Statement 5) Value is: " << ++number << std::endl;
    std::cout << "Statement 6) Value is: " << number++ << std::endl;
    std::cout << "Statement 7) Value is: " << number-1 << std::endl;
    std::cout << "Statement 8) Value is: " << number-- << std::endl;
    
    return 0;
}
