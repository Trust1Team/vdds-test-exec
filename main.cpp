#include <iostream>

using namespace std;

int main(int argc, const char* argv[]) {
    cout << "VDDS stub!" << endl;
    cout << "Arguments received: " << argc << endl;
    for(int i = 0; i < argc; ++i)
        cout << "Argument " << i << ": " << argv[i] << endl;
    return 0;
}
