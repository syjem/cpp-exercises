#include <iostream>
using namespace std;

    class ME {
        private:
        int dickinch;

        public:
        void  setdickinch(int inch) {
            dickinch = inch;
        }

        int getdickinch() {
            return dickinch;
        }
        
    };


// For practice purposes only....

int main() {
    int x;
    cin >> x;

    ME obj;
    obj.setdickinch(x);

    if(x<5) {
        cout <<obj.getdickinch() <<" is below average.";
    } else {
        cout <<"Your d*ck is " << obj.getdickinch() <<" inches."; 
    };

    return 0;
}