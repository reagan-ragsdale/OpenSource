#include <iostream>
using namespace std;

int main()
{
   int i, x;
   char str[100];
   string pswd = "password";

   cout << "Please enter a string to encrpt:\t";
   cin >> str;
   

    for(i = 0; (i < 100 && str[i] != '\0'); i++){
        str[i] = str[i] + 2; 
    }
    cout << "\nEncrypted string: " << str << endl;
         
    cout << "Please enter the password to decrypt: ";
    string attempt;
    cin >> attempt;
    if (attempt == pswd){
      for(i = 0; (i < 100 && str[i] != '\0'); i++){
        str[i] = str[i] - 2; 
      }
      cout << "\nDecrypted string: " << str << endl;
    }
    else
    cout << "\nIncorrect password. Goodbye, hacker\n";
   
   
  
}