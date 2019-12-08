#include <iostream>
using namespace std;

int main()
{
  float Balance = 100.00;
  int account_type, option;
  float amount;

  cout << "Welcome To ATM" << endl << endl;
  cout << "1) Current" << endl;
  cout << "2) Saving" << endl;

  cout << "Please select account type (1 or 2): ";
  cin >> account_type;

  if(account_type == 1 || account_type == 2)
  {

     cout << "1) Withdraw Amount" << endl;
     cout << "2) Balance Inquiry" << endl;

     cout << "Select an option (1 or 2): ";
     cin >> option;
     if(option == 1)
     {

       cout << "Please enter amount to withdraw : ";
       cin >> amount;
       if(amount <= 0)
       {
         cout << "Amount can not be zero or negative" << endl;
       }
       else if(amount > Balance)
       {
         cout << "You do not have much funds to withdraw this amount" << endl;
       }
       else
       {
         Balance = Balance - amount;
         cout << "Balance withdrawl successful!!!. Your new balance is " << Balance << endl;
       }

     }
     else if(option == 2)
     {
        cout << "Your Balance is " << Balance << endl;
     }
     else
     {
       cout << "Invalid Option Selected." << endl;
     }
  }
  else
  {
    cout << "Invalid Account type selected." << endl;
  }
  cout << "Thank You Using Our ATM!" << endl;
  return 0;
}
