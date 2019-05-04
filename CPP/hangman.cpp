#include <bits/stdc++.h>
using namespace std;
int main()
{
  const string words[10]={
    "apiary" ,"beetle" ,"cereal" , "health" ,"useful" ,"onset" ,
    "valid" , "train" , "manage" ,"yearn"};
    char c;
    cout<<"Press y to play!\n";
    cin>>c;
    c=tolower(c);
    while(c=='y')
    {
      string target = words[rand()%10];
      int length=target.size();
      string attempt(length,'-');
      int guesses=6;
      string badchars;
      cout<<"Guess my secret word. It has "<<length<<"letters. And you can guess one letter at a time. You get "<<guesses<<"chances\n";
      cout<<"Your word:"<<attempt<<endl;
      while(attempt!= target && guesses>0)
      {
        char letter;
        cin>>letter;
        if(badchars.find(letter)!= string::npos || attempt.find(letter)!=string::npos)
        {
          cout<<"You already guessed that. Try again!\n";
          continue;
        }
        int loc=target.find(letter);
        if(loc==string::npos)
        {
          cout<<"Oh, bad guess!\n";
          --guesses;
          badchars+=letter;
        }
        else
        {
          cout<<"Good guess!\n";
          attempt[loc]=letter;
          loc= target.find(letter, loc+1);
          while (loc!=string::npos) {
            attempt[loc]=letter;
            loc=target.find(letter, loc+1);
          }
        }
        cout<<"Your word: "<<attempt<<endl;
        if(attempt!=target)
        {
          if(badchars.size()>0)
          cout<<"Bad choices: "<<badchars<<endl;
          cout<<"Guesses left:"<<guesses<<endl;
        }
      }
      if(guesses>0)cout<<"That's right!\n";
      else cout<<"The word was "<<target<<endl;
      cout<<"Would you play again?\n";
      cin>>c;
      c=tolower(c);
    }
    cout<<"Bye!\n";
    return 0;
  }
