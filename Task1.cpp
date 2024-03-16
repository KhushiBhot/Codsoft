#include <iostream>
using namespace std;
int main()
{
int choice;
float number1, number2;
cout<<"Choose Operation: \n1. Addition \n2. Substraction \n3. Multiply \n4. Division \n5. Exit";
cin>>choice;
if (choice == 1 || choice == 2 || choice == 3 || choice == 4)
{
cout<<"Enter First Number: ";
cin>>number1;
cout<<"Enter Second Number: ";
cin>>number2;
switch (choice)
{
case (1):
cout<<"Addition = "<<number1 + number2;
break;
case (2):
cout<<"Substraction = "<<number1 - number2;
break;
case (3):
cout<<"Multiply = "<<number1 * number2;
break;
case (4):
cout<<"Division = "<<number1 / number2;
break;
default:
break;
}
}
}
