#include <iostream>

using namespace std;

int flavious(int n, int k) {
    int r = 0;
    for (int i = 2; i <= n; i++)
        r = (r + k) % i;

    return r;
}

int main(){
    int n, x, y;
    
    cin>>n;
    
    for(int i = 0; i < n; i++){
            cin>>x>>y;
            cout<<"Case "<<i+1<<": "<<flavious(x,y)+1<<endl;
    }
    return 0;
}
		
