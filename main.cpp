#include <iostream>
#include <string>

using namespace std;

string cmd;

int main() {
    
    while(true) {
        cout << ">: ";
        getline(cin, cmd);
        
        if(cmd == "version") {
            cout << "Tomsterley Shell v1.2" << endl;
        }
        else {
            if(cmd == "exit") {
                return 0;
            }
            else {
                if(cmd == "help") {
                    cout << "Commands: version, exit, help" << endl;
                }
                else {
                    cout << "Error: '" << cmd << "' is not a valid command" << endl;
                }
            }
        }
    }
}
