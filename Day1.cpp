#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int j;       // Declare second integer
    double e;    // Declare second double
    string p;    // Declare second String variables.
    cin>>j>>e;    // Read and save an integer, double
    getline(cin>>ws,p); //String to your variables.
    cout<<i+j<<endl<<fixed<<setprecision(1)<<d+e<<endl<<s+p<<endl;
    return 0;
}
