// 3. WAP to c++ to uses of friend function in class


#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int width;

public:
    
    Box(int l, int w) {
        length = l;
        width = w;
    }

    friend void displayArea(Box b);
};

void displayArea(Box b) {
    int area = b.length * b.width;
    cout << "📦 Box Dimensions: " << b.length << " x " << b.width << endl;
    cout << "🟩 Area of Box: " << area << " sq. units\n";
}

int main() {
    Box b(10, 5);
    displayArea(b);  
    return 0;
}