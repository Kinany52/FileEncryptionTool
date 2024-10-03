#include "encryption.h"
#include <fstream>

void encryptFile(const std::string& inputFile, const std::string& outputFile) {
    std::ifstream inFile(inputFile);
    std::ofstream outFile(outputFile);
    char ch;

    while (inFile.get(ch)) {
        ch = ch ^ 0xAA; // XOR encryption
        outFile.put(ch);
    }
}

void decryptFile(const std::string& inputFile, const std::string& outputFile) {
    encryptFile(inputFile, outputFile); // XOR decryption (same as encryption, 
    //because XOR encryption is a symmetric algorithm. 
    //This means that applying XOR twice with the same key reverses the operation, 
    //effectively decrypting the data.)
}