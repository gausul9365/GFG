#include <iostream>

using namespace std;

int lenghtFinder(int n){
  int c = 0;
  if(n<=0){
   return 0;
  }
  else{
    c++;
    lenghtFinder(n/10);
    
  }
  cout<<c<<endl;
  
  
}

int main() {

  int n = 386348;
  int count = 0;

  cout<<lenghtFinder(n)<<endl;

  

  return 0;

}


