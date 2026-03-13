#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main(){

    string line;
    getline(cin, line);
  
for(int i=line.length()-1; i>= 0; i--){

    char ch = line[i] ;

    cout<< ch << endl;
}


		
	return 0;
}