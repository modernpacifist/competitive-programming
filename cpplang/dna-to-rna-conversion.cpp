#include <iostream>
#include <string>


std::string DNAtoRNA(std::string dna){
    std::replace(dna.begin(), dna.end(), 'T', 'U');
    return dna;
}


int main() {
    std::cout << DNAtoRNA("GCAT") << '\n';
    
    return 0;
}
