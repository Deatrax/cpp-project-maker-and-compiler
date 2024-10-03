#include <iostream>
#include <fstream>
#include <string>

void createFiles(const std::string& baseFilename) {
    // Create filename.cpp
    std::ofstream cppFile(baseFilename + ".cpp");
    if (cppFile.is_open()) {
        cppFile << "#include \"" << baseFilename << ".h\"\n\n";
        cppFile << "// Your code implementation goes here\n";
        cppFile.close();
        std::cout << baseFilename << ".cpp created.\n";
    } else {
        std::cerr << "Failed to create " << baseFilename << ".cpp\n";
    }

    // Create filename.h
    std::ofstream headerFile(baseFilename + ".h");
    if (headerFile.is_open()) {
        headerFile << "#ifndef " << baseFilename << "_H\n";
        headerFile << "#define " << baseFilename << "_H\n\n";
        headerFile << "// Function and class declarations go here\n\n";
        headerFile << "#endif // " << baseFilename << "_H\n";
        headerFile.close();
        std::cout << baseFilename << ".h created.\n";
    } else {
        std::cerr << "Failed to create " << baseFilename << ".h\n";
    }

    // Create main.cpp
    std::ofstream mainFile("main.cpp");
    if (mainFile.is_open()) {
        mainFile << "#include \"" << baseFilename << ".h\"\n\n";
        mainFile << "int main() {\n";
        mainFile << "    \n";
        mainFile << "    // Your code goes here\n";
        mainFile << "    \n";
        mainFile << "    return 0;\n";
        mainFile << "}\n";
        mainFile.close();
        std::cout << "main.cpp created.\n";
    } else {
        std::cerr << "Failed to create main.cpp\n";
    }
}

int main() {
    #ifdef _WIN32
        system("clr");
    #elif defined(__APPLE__)
        system("clear");
    #endif
    std::string filename;
    std::cout << "Enter the base filename (without extension, you can have spaces if you want although it's not recommended)\n: ";
    //std::cin >> filename; //for names with spaces
    std::getline(std::cin, filename);

    createFiles(filename);

    return 0;
}
