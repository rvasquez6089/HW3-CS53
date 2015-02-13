//Name: Ryan Vasquez
//Date: September 12, 2013
//Class: CS53 Eric Barnes
//Purpose: To screen people who come into Moe's and decide whether they
//deserve to be a customer as Moe's bar. It is a bascically a "bouncer"
//a bar.
#include <iostream>
#include <string>
using namespace std;

int main()
{
  const float Beer = 2.00;
  const float Liquor = 4.25;
  string Name;
  bool Teetotaler;
  int Numdrinks;
  int Drinksbuy;
  float Change;
  int Age;
  float Money;
  int Drinktype;
  bool Morecust;
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);


  cout<<"\n \n";
  cout<<" *  * @()Ooc()*   o  ."<<endl;
  cout<<"     (Q@*0CG*O()  ___"<<endl;
  cout<<"    |\\_________/|/ _ \\"<<endl;
  cout<<"    |  |  |  |  | / | |"<<endl;
  cout<<"    |  |  |  |  | | | |   Welcome to Moe's bar!"<<endl;
  cout<<"    |  |  |  |  | | | |"<<endl;
  cout<<"    |  |  |  |  | | | |   "<<endl;
  cout<<"    |  |  |  |  | \\_| |"<<endl;
  cout<<"    |  |  |  |  |\\___/ "<<endl;
  cout<<"    |\\_|__|__|_/|"<<endl;
  cout<<"     \\_________/"<<endl;
  cout<<"\n -----------------------------------------------------\n"<<endl;
  do
  {
    cout<<"What is your name?";
    cin>>Name;
    if (Name == "Barney") //Checks to see if the use is Barney
    {
      cout<<"C'mon in Barney"<<endl;
    }
    cout<<"Are you a teetotaler? (1 yes, 0 no) ";
    cin>>Teetotaler;
    if (Teetotaler == 1) //This logic statement will check if the user is a
    //teetotaler and will kick them out of the bar if they are.
    {
      cout<<"Get out of here!!!!"<<endl;
    }
    else
    {
      cout<<Name<<", what is your age?";
      cin>>Age;
      while(Age < 0 && Age > 100 ) //This will check if the user has entered a
      //reasonable age.
      {
        cout<<Name<<",please enter a valid age!";
        cin>>Age;
      }
      if (Age < 21) //This logic statement will check is the user is older than
      //21 and will kick them out if they are younger than 21.
      {
        cout<<"Get out of here "<<Name<<"!!!"<<endl;
      }
      else
      {
        cout<<Name<<" ,what do you plan on drinking?"<<endl;
        cout<<"1. Beer"<<endl;
        cout<<"2. Soda"<<endl;
        cout<<"3. Hard Liquor"<<endl;
        cin>>Drinktype;
        while (Drinktype > 3 && Drinktype < 1)//This will make sure that the
        //user inputs a valid drink choice.
        {
          cout<<"Please enter a valid drink choice";
          cin>>Drinktype;
        }
        switch (Drinktype)//This switch will prompt the user with the
        //proper response depending on what drink the user chooses
        //to drink.
        {
        case 1:
          cout<<Name<<" ,how much money do you have with you? ";
          cin>>Money;
          if(Money < Beer)
          {
            cout<<"get outta here, ya bum!"<<endl;
            break;
          }
          Numdrinks = static_cast<int>(Money/Beer);//This formula calculates
          //the number of drniks the patron can buy
          Change = Money - (Numdrinks*Beer);//This will calculate how much
          //change the patron will have left
          cout<<"You can buy "<<Numdrinks<< " beers."<<endl;
          cout<<"How many beers do you plan to buy? ";
          cin>>Drinksbuy;
          if (Drinksbuy < Numdrinks)//This line will check if the patron
          //plans on buying as many as drinks as possible.
          {
            cout<<"come back when you want to spend all your money!"<<endl;
            break;
          }
          cout<<"come right in, step up to the bar!"<<endl;
          cout<<"You have $" <<Change<<" left."<<endl;
          break;
        case 2:
          cout<<"we don't soyrv you sissies in dis place!"<<endl;
          break;
        case 3:
          cout<<Name<<", how much money do you have with you? ";
          cin>>Money;
          if(Money < Liquor)
          {
            cout<<"get outta here, ya bum!"<<endl;
            break;
          }
          Numdrinks = static_cast<int>(Money/Liquor);//This formula calculates
          //the number of drniks the patron can buy
          Change = Money - (Numdrinks*Liquor);//This will calculate how much
          //change the patron will have left
          cout<<"You can buy "<<Numdrinks<< " hard liquors."<<endl;
          cout<<"How many hard liquors do you plan to buy? ";
          cin>>Drinksbuy;
          if (Drinksbuy < Numdrinks)//This line will check if the patron
          //plans on buying as many as drinks as possible.
          {
            cout<<"come back when you want to spend all your money!"<<endl;
            break;
          }
          cout<<"come right in, step up to the bar!"<<endl;
          cout<<"You have $" <<Change<<" left."<<endl;
          break;
        }
      }
    }
  cout<<"Is there anybody else there?(Enter 1 for yes and 0 for no) ";
  cin>>Morecust;
  } while (Morecust == 1); //This while loop will continue as long as the user
  //indicates there are more customers in the bar.
  cout<<"Thanks for visiting Moe's bar, have a nice day!"<<endl;
  return 0;
}
