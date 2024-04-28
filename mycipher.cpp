#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]){
int i = 0;
string message;
char ch;
if (argc != 2){
  cout << "Error: Usage cipher <shiftamount>" << endl;
  exit(0);
}
getline(cin, message);
transform(message.begin(), message.end(), message.begin(), ::toupper);
int key = 2;
string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string letter = "";
for(int i=0; i<message.length(); i++){
  if(isletter(message[i])){
    letter += message[i];
  }
}

}