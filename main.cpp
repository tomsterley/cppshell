#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string cmd;
string var1s;
string var2s;
int var3;

int main() {

prog:

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
                    cout << "Commands: version, exit, add, help" << endl;
                }
                else {
                    if(cmd == "add") {
                        cout << "First number: ";
                        getline(cin, var1s);
                        cout << "Second number: ";
                        getline(cin, var2s);

                        int var1 = atoi(var1s.c_str());
                        int var2 = atoi(var2s.c_str());

                        var3 = var1 + var2;
                        cout << "Added numbers: " << var3 << "\n";
                        goto prog;
                    }
                }
            }
        }
    }
}
