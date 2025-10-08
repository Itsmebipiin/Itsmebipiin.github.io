#include <iostream>
using namespace std;

class Book {
    public:
    string title;
    int price;

    Book (string t, int p) {
        title = t;
        price = p;
    }

    void showBooks(){
        cout << "\nBook : " << title << "\nPrice : Rs " <<  price << endl;
   }

};

int main () {
    Book b1("c++ Oops", 450);
    Book b2("Python Basics", 560);

    b1.showBooks();
    b2.showBooks();

    return 0;
}