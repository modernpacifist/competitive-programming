#include <string>
#include <iostream>


std::string greet(const std::string& name, const std::string& owner) {
    return name == owner ? "Hello boss" : "Hello guest";
}


int main() {
    std::cout << greet("sample", "sample") << '\n';
    
    return 0;
}
