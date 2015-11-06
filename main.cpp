#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main(){
   string pass ="";
   char response;
   char ch;
   char resp;
///string reply;
   cout << "Enter pass: ";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "13"){
      cout << "\nAccess granted \n";
      cout<<"Continue? Y/N: s";
      cin>>response;
      if (response=='Y' || response=='y') ///conditie ca sa continue, operatie cu switch-case;
      {
///      switch (reply)
///         {
///          case "three": cout << "3";
///          break;
///           case "two": cout << "2";
///           break;
///          case "one": cout << "1";
///  /          break;
///             default: cout << "qwerty";
///             break;
///              }

      }///caz afirmativ
      else
      {
          cout<<"Multumesc ca ati ales programul meu!! ";

      }
   }
   else
    {
      cout << "\n Parola e gresita! Reincercati? Y/N: ";
      cin>>resp;
        if (resp=='Y' || resp=='y')
        {
        }
        else{}

   }
}
