#include <iostream>
#include <string>
using namespace std;

int main() {
    string raining, umbrella;

start:
    cout << "Is it raining? (yes/no): ";
    cin >> raining;

    if (raining == "no") {
        cout << "Go outside." << endl;
    } 
    else {
        cout << "Do you have an umbrella? (yes/no): ";
        cin >> umbrella;

        if (umbrella == "yes") {
            cout << "Go outside." << endl;
        } 
        else {
            cout << "Wait a while..." << endl;
            goto start; 
        }
    }

    cout << "End of decision process." << endl;
    return 0;
}