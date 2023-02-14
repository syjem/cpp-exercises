#include <iostream>
#include <string>
using namespace std;

string truncate(string str, int num) {

    if(str.length() <= static_cast<string::size_type>(num)) {
        return str;
    } else {
        return str.substr(0, num) + "...";
    }
}   


int main() {

    cout<< truncate("A-tisket a-tasket A green and yellow basket", 8);

    return 0;
}