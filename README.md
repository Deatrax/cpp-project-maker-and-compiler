# cpp-project-maker-and-compiler
hey guys if you just wanna use vs code for making project files but don't want to make the files manually, for that I have made these two programs, 

projector makes the main.cpp class.cpp and class.h files
just call it from the terminal and the program I will ask for the class file name and it will then add the files in the directory where it was called from. 

and projcompiler compiles the project and also runs the compiled program if you add a -y at the end. sample command is

`projcompiler "test" -y`

yes you don't need to add the .cpp extension as it will handle it by itself, you can also pass file name with spaces if you want like

`projcompiler "test project" -y `
`projcompiler "test project" -n` //that is if you don't want to run it

If you are adding spaces be sure to use double quotes

compile the files and add them on your system path, it's the same technique as you used to add minGW in your system path 
