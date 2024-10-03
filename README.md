# cpp-project-maker-and-compiler
hey guys if you just wanna use vs code for making project files but don't want to make the files manually, for that I have made these two programs. I have also added comments for your help in the code.

projector makes the main.cpp class.cpp and class.h files
just call it from the terminal and the program I will ask for the class file name and it will then add the files in the directory where it was called from. 

and projcompiler compiles the project and also runs the compiled program if you add a -y at the end. sample command is

`projcompiler "test" -y`

yes you don't need to add the .cpp extension as it will handle it by itself, you can also pass file name with spaces if you want like

`projcompiler "test project" -y ` or
`projcompiler "test project" -n` that is if you don't want to run it

If you are adding spaces be sure to use double quotes

1. compile the files and add them on your system path, it's the same technique as you used to add minGW in your system path. herer are the steps if you don't remember
2. search "edit system variables" on windows search
3. select  environment variable
4. select path
5. select new
6. before doing this add the compiled exe files in a folder of your licking and now browse to that folder
7. save
All done


on windows explorer you can hold control and right click to select "open powershell window here" if you don't want the hassle of using cd to naviagte or you can also type cd then drap and drop the folder you are going to work on in a powershell window
