#include <iostream>
#include <string> // string is treated as an object in C++.
/* string manipulation: very simple code. Due to recent thunderstorm, I had to move back to my city, hence
explaining my less line commits.*/

int main(){
    char fname_Cstyle[] = "Meet Thanki"; // It is a C style string.

    std::string fname = "Meet "; // std:: is used in absence of namespace
    std::string lname = "Thanki";
    std::string name = fname + lname;

    std::string name1 = fname.append(lname);

    std::cout << name << "\n";
    std::cout << name1 << "\n"; // endl cannot be used without namespace

    // string length

    std::cout << "The length of the string name is: " << name.length() << "\n";
    std::cout << "The length of the string name using size() is: " << name.size() << "\n"; // size() is an alias of length()
    
    // accessing string characters
    std::cout << name[0] << "\n"; // first character
    std::cout << name[name.length() - 1] << "\n"; // last character; this is because string index starts from 0 instead of 1.

    std::cout << "The first character of the string name using at() function is: " << name.at(0) << "\n";
    std::cout << "The last character of the string name using at() function is: " << name.at(name.length() - 1) << "\n";

    // modifying characters
    name[0] = 'm'; // when accessing characters, always use '' single quotes
    std::cout << name << "\n";

    // string user input
    std::string user_input;
    std::string user_input2;

    /*std::cout << "Please enter a string: ";
    std::cin >> user_input; // cin reads only first word as it considers a space as a terminating character
    std::cout << "You entered: " << user_input << "\n";*/   // cin and cout both require std:: when not using namespace

    // Discard the leftover newline here

    std::cout << "Please enter another string: ";
    std::getline(std::cin, user_input2); // std:: to be used for getline as well, parameter 1: cin, parameter 2: variable, and before cin.
    std::cout << "You entered: " << user_input2; 
    return 0;
}