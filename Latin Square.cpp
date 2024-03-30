#include <iostream>
using namespace std;

void latin_square(int n){
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            cout<<j;
        }
        for(int j=1;j<=i-1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}



int main()
{
    int N;
    cin>>N;
    latin_square(N);
    return 0;
}


