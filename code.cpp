#include<bits/stdc++.h>
using namespace std;

bool check( string s)
{
      for (int i = 0; i < s.length(); i++) {
        if (s[i] < '0' || s[i] > '9')
            return false;
    }
    return true;
}


int main()
{
      string creditcard_no;

      cout<<"Please enter your credit card number\n";
      cin>> creditcard_no;

      int len = creditcard_no.length();
      int sum = 0;

      if( !check(creditcard_no) )
      {
            cout<<" Credit card no is not valid\n";
      }

      else
      {
            

            for(int i = len-1 ; i>= 0 ; i = i-2)
                  sum += (creditcard_no[i] - 48);

            for(int i = len-2 ; i>= 0 ; i=i-2)
            {
                  int no = (creditcard_no[i] - 48)*2;
                  sum += (no/10) +(no%10);
            }

            if( sum % 10 == 0)
                  cout<<"you credit card is valid\n";
            else
                  cout<<" Credit card no is not valid\n";
      }

      return 0 ;
}