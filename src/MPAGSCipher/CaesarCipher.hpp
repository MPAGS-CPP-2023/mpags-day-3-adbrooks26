#ifndef MPAGSCIPHER_CAESARCIPHER_HPP
#define MPAGSCIPHER_CAESARCIPHER_HPP

#include "CipherMode.hpp"

#include <string>
#include <vector>

class CaesarCipher {
    public:
    explicit CaesarCipher(const int key);

    explicit CaesarCipher(const std::string key);

    std::string applyCipher(const std::string inputstring, const CipherMode encrypt); 

    private:
    const std::vector<char> alphabet_ {'A', 'B', 'C', 'D', 'E', 'F', 'G', 
                                'H', 'I', 'J', 'K', 'L', 'M', 'N', 
                                'O', 'P', 'Q', 'R', 'S', 'T', 'U', 
                                'V', 'W', 'X', 'Y', 'Z'}; 
    std::size_t key_{0};
};


#endif      // MPAGSCIPHER_CAESARCIPHER_HPP