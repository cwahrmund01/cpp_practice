#include <iostream>
using namespace std;

class Geek {
public:
    string geekname;
    void printname() {
        cout << "Geek's name is: " << geekname;
    }
};

int main() {

    Geek geek1;
    geek1.geekname = "Cedric";
    geek1.printname();
    
    return 0;

}