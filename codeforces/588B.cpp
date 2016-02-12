#include <bits/stdc++.h>
using namespace std;

bool lovelyNumber(long long number){

}

long long maxInLove(long long number){
  long long number = 0;
  for(int i = number; i > 0; i--)
  {
      if(lovelyNumber(i)){
        number = i;
        break;
      }
  }
  return number;
}


int main(){
  long long a;
  cin >> a;
  long long resul = maxInLove();
  return 0;
}
