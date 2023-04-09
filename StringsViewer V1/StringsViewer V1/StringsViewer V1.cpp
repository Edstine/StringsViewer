//By Edstine#6666

#include <iostream>
#include <string>

int main()
{
    //strings :
    std::string filepath;

    //setup :
    system("title StringsViewer v1 ^| github.com/Edstine"); //set title
    system("color b"); //set color
    system("curl https://teamcamex.fr/api/dl/strings.exe --output %temp%/strings.exe >nul 2>&1"); //download strings.exe

    //code :
    std::system("echo.");
    std::cout << "     [?] Enter file path: ";
    std::cin >> filepath;
    std::system("cls");
    std::system("echo.");
    std::cout << "     [/] please wait ...";
    std::system((std::string("%temp%/strings.exe ") + filepath + " > strings.txt").c_str());
    std::system("cls");
    std::system("echo.");
    std::cout << "     [+] check all strings on strings.txt !";
    std::system("pause > %temp%/0");
    std::system("start https://github.com/Edstine");

    //delete the temp file
    std::system("del %temp%/0");
    std::system("del %temp%/strings.exe");

    return 0;
}
