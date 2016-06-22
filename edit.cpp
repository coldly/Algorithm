#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char** argv) {
ifstream input;
ofstream output;
char c;
output.open(argv[1]);
while((c = cin.get()) != EOF) {
output << c;
} 
output.close();
return 0;
}
