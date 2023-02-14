#include <iostream>
#include <string>
using namespace std;


string repeatString(string str, int x) {

    string repeat = "";
    for(int i=0; i<x; i++) {
        repeat += str;
    }
    return repeat;
}


int main() {

    cout << repeatString("*", 5) <<"\n";
    cout << repeatString("x", 2);

    return 0;
}