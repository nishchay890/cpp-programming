#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string fileName = "user_data.txt";
    std::string userInput;

    // 1. Get multi-word text from the user
    std::cout << "Enter the text you want to save to the file: ";
    std::getline(std::cin, userInput);

    // 2. Write the data to the file
    std::ofstream outFile(fileName);
    if (outFile.is_open()) {
        outFile << userInput;
        outFile.close(); // Close the file stream after writing
        std::cout << "\n[Success] Data successfully written to '" << fileName << "'\n";
    } else {
        std::cerr << "[Error] Could not open the file for writing.\n";
        return 1;
    }

    // 3. Read the data back from the file
    std::ifstream inFile(fileName);
    if (inFile.is_open()) {
        std::string savedContent;
        
        std::cout << "\n--- Reading Data Back From File ---\n";
        // Read the file line by line to preserve spaces and formatting
        while (std::getline(inFile, savedContent)) {
            std::cout << savedContent << "\n";
        }
        std::cout << "-----------------------------------\n";
        
        inFile.close(); // Close the file stream after reading
    } else {
        std::cerr << "[Error] Could not open the file for reading.\n";
        return 1;
    }

    return 0;
}
