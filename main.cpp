#include <iostream>

using namespace std;

const int LETTER_MAX = 10;

int main()
{
  char word[LETTER_MAX];
  string dynamicWord;

  for( int counter = 0; counter < 3; counter++)
  {
    cout << "Enter something:\n";
    cin >> word;
    dynamicWord = word;
    cout << word << " is " << sizeof(word)/sizeof(word[0]) << endl;
    cout << "The string version is " << dynamicWord.length() << endl;
  }

  return 0;
}
