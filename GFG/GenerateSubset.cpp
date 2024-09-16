#include <iostream>

using namespace std;


void Subsequence(string str, int index = 0, string current = ""){
  if(index >= str.length()){
    cout << current << endl;
    return;
  }

  Subsequence(str, index+1, current + str[index]);
  Subsequence(str, index+1, current);

}

int main() {

  string str = "abc";

  Subsequence(str);
  

  return 0;

}

