#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
using namespace std;

int main() {
  // declaring string variables
  string userString = "";
  string reverseString = "";
  string stringModified = "";
  char letter;

  // display welcome message and prompt user to enter input
  cout << "Welcome to the Palindrome Program! Please enter your word: ";
  
  getline(cin, userString);

  //put the characters from userString into reverseString in reverse order
  for (int i = 0; i < userString.size(); i++)  {
    // case insensitive
    letter = tolower(userString[i]);
    if (letter != ' ')
    {
      stringModified += letter;
      reverseString = letter + reverseString;
    } 
  }

  if (reverseString == stringModified)  {
    cout << "\n" << userString << " is a palindrome!\n";
  }  
  else  {
    cout << "\n" << userString << " is not a palindrome!\n";
  }

  cout << "\nThanks for using our program!";
  return 0;
}