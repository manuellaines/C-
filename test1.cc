#include<iostream>
using namespace std;
 
int main(int argc, char **argv)
{
  cout << "Hello world!" << endl;
  cout << "Voici un programme illustrant l'utilisation de cout!";
  cout << "Appuyez sur une touche pour continuer ..." << endl;
  cin.ignore();
  cin.get();
  return 0;
}