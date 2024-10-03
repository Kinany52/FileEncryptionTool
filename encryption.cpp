#include "encryption.h"
#include <fstream>
#include <iostream>

void encryptFile(const std::string& inputFile, const std::string& outputFile) {
    std::ifstream inFile(inputFile);
    if (!inFile) {
        std::cerr << "Error: Could not open input file: " << inputFile << std::endl;
        return;
    }

    std::ofstream outFile(outputFile);
    if (!outFile) {
        std::cerr << "Error: Could not open output file: " << outputFile << std::endl;
        return;
    }

    char ch; //store each character read from input file, occuppying 1 byte

    while (inFile.get(ch)) {
        ch = ch ^ 0xAA; // XOR encryption: 0xAA is the key. The value 0xAA is a hexadecimal representation of a number. In binary, 0xAA is equivalent to 10101010 (which is 170 in decimal).
        outFile.put(ch); //Each bit in 0xAA will influence the corresponding bit in ch when they are XORed together.
    }
}

void decryptFile(const std::string& inputFile, const std::string& outputFile) {
    encryptFile(inputFile, outputFile);
    // XOR decryption (same as encryption, 
    //because XOR encryption is a symmetric algorithm. 
    //This means that applying XOR twice with the same key reverses the operation, 
    //effectively decrypting the data.)
}

//The^ operator in C++ is the bitwise XOR(exclusive OR) operator. It compares each bit of two values and returns a new value where each bit is set to 1 if only one of the corresponding bits of the operands is 1.
//For example :
//0 (0000 0000) XOR 1 (0000 0001) results in 1 (0000 0001).
//1 (0000 0001) XOR 1 (0000 0001) results in 0 (0000 0000).