#include <iostream>
using namespace std;

class BankDetails {
    private :
      int balance;
      int accountNo;

      public :
      string name;
      string branch;
      
      void setDetails(int b, int a) {
        balance = b;
        accountNo = a;
      }

      

      void showDetails () {
        cout << "\nName : " << name << endl;
        cout << "Branch : " << branch << endl;
        cout << "Account No. : " << accountNo << endl;
        cout << "Balance Rs : " << balance << endl;
        
      }
};

int main () {
    BankDetails D1;

    D1.name = "Bipin Mallik";
    D1.branch = "State Bank Of India";
    D1.setDetails (20000, 10012);
    D1.showDetails ();
    
    

    return 0;

}