#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    // argc: Number of arguments (including the program name)
    // argv: Array of arguments (strings)

    if (argc > 1) {
        for (int i = 1; i < argc; ++i) {
            cout << "Argument " << i << ": " << argv[i] << endl;
        }
    } else {
        cout << "No arguments passed!" << endl;
        return -1;
    }

    // Get class name from the first argument
    string className = argv[1];
    string compilerArgs = "g++ main.cpp \"" + className + ".cpp\" -o \"" + className + "\"";
    
    // Execute the compilation command
    int compileStatus = system(compilerArgs.c_str());

    // Check if the compilation was successful
    if (compileStatus != 0) {
        cerr << "Compilation failed with error code: " << compileStatus << endl;
        return -1;
    } else {
        cout << "Compilation succeeded." << endl;
    }

    // If a second argument is provided, handle auto-run option
    if (argc == 3) {
        if (string(argv[2]) == "-y" || string(argv[2]) == "-Y") {
            #ifdef WIN32
                string prun = "./\"" + className + ".exe\"";
                system(prun.c_str());
            #else
                string prun = "./\"" + className+"\"";
                system(prun.c_str());
            #endif
            return 0;
        } else if (string(argv[2]) == "-n" || string(argv[2]) == "-N") {
            return 0;
        }
    }

    // Ask if the user wants to run the compiled program
    cout << "Project compiled, do you want to run it? [y/n] >>";
    char inp;
    fflush(stdin);
    cin >> inp;

    if (inp == 'y') {
            #ifdef WIN32
                string prun = "./\"" + className + ".exe\"";
                system(prun.c_str());
            #else
                string prun = "./\"" + className+"\"";
                system(prun.c_str());
            #endif
    } else if (inp == 'n') {
        return 0;
    } else {
        cout << "Invalid selection, exiting project compiler" << endl;
    }

    return 0;
}
