#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
// COMSC-210 | Lab 14 | Kylie Roxo
const int n = 25;
class Color {
    private://private variables 
    int red;
    int blue;
    int green;
    public://public variables 
    int r;
    int b;
    int g;
    int getRed(){return red;};//return red
    int getBlue(){return blue;};//return blue
    int getGreen(){return green;};//return green
    void setColors(int r, int g, int b){//set variables 
        r = red;
        b = blue;
        g = green;
    };

    void print (){//print numbers 
    cout << setw(15) << left << getRed();
    cout << setw(15) << left << getBlue();
    cout << setw(15) << left << getGreen() << endl;

    };
};

int main(){
    vector<Color> c;//vector
    srand((unsigned) time(NULL));
    int r;//temp holder variables 
    int b;
    int g;
    for (int i = 0; i < n; i++){//for loop to give random numbers and populate then push back and put into the set function
        Color temp;
        temp.r = 1 + (rand() % 999);
        temp.b = 1 + (rand() % 999);
        temp.g = 1 + (rand() % 999);
        c.push_back(temp);
        temp.setColors(r, g, b);
    }
    
    cout << setw(15) << left << "R";//print 
    cout << setw(15) << left << "B";
    cout << setw(15) << left << "G" << endl;
    cout << endl;
    
    for (int i = 0; i < n; i++){//print function
        c[i].print();
    }

    return 0;
}

