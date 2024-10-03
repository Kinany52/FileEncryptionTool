// EncryptionTool.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "encryption.h"

int main()
{
    int choice;
    std::string inputFilePath, outputFilePath;

    std::cout << "File Encryption/Decryption Tool\n";
    std::cout << "1. Encrypt a file\n";
    std::cout << "2. Decrypt a file\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    std::cout << "Enter input file path: ";
    std::cin >> inputFilePath;

    std::cout << "Enter output file path: ";
    std::cin >> outputFilePath;

    if (choice == 1) {
        std::cout << "Starting encryption..." << std::endl;
        encryptFile(inputFilePath, outputFilePath);
    }
    else if (choice == 2) {
        std::cout << "Starting decryption..." << std::endl;
        decryptFile(inputFilePath, outputFilePath);
    }
    else {
        std::cout << "Invalid choice!";
    }
    
    std::cin.get(); // pauses the console window until a key is pressed
    std::cin.get(); // second call to pause the console window until a key (Enter) is pressed
    
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
