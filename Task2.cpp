#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    cout<<"\n\t\t\t\t WELCOME TO NUMBER GUESSING GAME\n"<<endl;
    cout<<"\n\t\t You  will have to guess a number between 1 to 100";
    cout<<"\n\t\t Lets play and best of luck"<<endl;

    srand(time(0));
    int randomNumber = ( rand() %100 ) + 1;

    cout<< "\n You have total 5 chances to guess a correct number.\n";
    int chanceLeft = 5;
    int playerInput;

    for(int i = 1;i < 5; i++)
    {
        cout<<"\nEnter a number:";
        cin>>playerInput;

        if(playerInput == randomNumber)
        {
            cout<<"\ncongratulations!!.you have succesfully pass the right number\n";
            cout<<"\nThanks for playing ..have a nice day";
            break;
        }
        else
        {
            if(playerInput > randomNumber)
            {
                cout<<"\n""[Insert a smaller Number . Try Again"""<<endl;
            }
            else
            {
                cout<< "\n""[ Insert a larger Number .Try Again]"""<<endl;
            }
        }
        chanceLeft --;
        cout<< "\n( Chances Left to guess the Randon Number:" << chanceLeft <<")"<<endl;
        
        if (chanceLeft == 0)
        {
            cout<<"\n Sorry your chance has been finished to guess the random number\n"<<endl;
            cout<<"The random number was:" << randomNumber <<endl;
            cout<<"Thanks for playing this game."<<endl;
        }
     }
     cout<< "\n ";
     return 0;
}


