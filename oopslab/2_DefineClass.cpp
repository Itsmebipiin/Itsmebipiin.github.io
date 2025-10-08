#include<iostream>
using namespace std;

class Books {
    public :
    string title;
    string auther;
    float price;

    void setDetails (string n, string a, float p) {
        title = n;
        auther = a;
        price = p;
        
    }


    void DisplayDetails () {
        cout <<"\n----Book Details----";
        cout << "\nTitle : " << title << endl;
        cout << "Auther :  " << auther << endl;
        cout << "Pricer ₹  " << price << endl;
    }

};

int main () {

    Books book1, book2;

    book1.setDetails("  The Subtle Art of Not Giving a Fck:", "Mark Manson", 339.00);
    book1.DisplayDetails ();

    book2.setDetails ("Thinking, Fast and Slow : ", "by Daniel Kahneman", 599);
    book1.DisplayDetails();




    return 0;
}
