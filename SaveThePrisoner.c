#include<iostream>
using namespace std;

int saveThePrisoner(int n, int m, int s){
                 //     4      6      2
    // Complete this->function
    m--;
    while(m--)
    {
      s++;
       if(s==n-1)
       {
         s=0;
       }
    }
   return s;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int m;
        int s;
        cin >> n >> m >> s;
        int result = saveThePrisoner(n, m, s);
        cout << result << endl;
    }
    return 0;
}
