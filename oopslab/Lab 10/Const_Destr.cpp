// 4.  WAP to C++ sequence of execution of constructor and destructor in inheritance


#include <iostream>
#include <string>
using namespace std;

class one{
    private:
        int first;
    public:
        one(int first){
            this->first = first;
            cout<< "Contructor called"<< endl;
        }
        ~one(){
            cout <<"Decntructor called"<<endl;
        }
};
int singers(){
    one VikshSir (1);
    return 0;

}
int main(){
    singers();
    
}