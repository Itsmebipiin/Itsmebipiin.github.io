#include <iostream>
using namespace std;

class book {
    public :
    string tittle;
    string auther;
    float price;

    void BookDetails() {
        cout << "\nTittle : " << tittle << endl;
        cout << "The Auther : " << auther << endl;
        cout << "Price Rs : " << price << endl;

    }

};

int main () {

    book book1;

    book1.tittle = "Theory of everything"; 
    book1.auther = "Stephen Hawking";
    book1.price = 165.00;

    book book2;

    book2.tittle = "Rich dad poor dad"; 
    book2.auther = "Robert Kiyosaki";
    book2.price = 260.00;

    cout << " \n-- Book 1 -- " << endl;
    book1.BookDetails();

    cout << "\n -- Book 2 -- " << endl;
    book2.BookDetails();

    return 0;


} 