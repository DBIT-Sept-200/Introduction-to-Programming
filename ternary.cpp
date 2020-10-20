#include <iostream>

using namespace std;

int myMax(int a, int b, int c){
    if(a > b){
        if(a > c){
            return a;
        }
        else {
            return c;
        }
    }

    else{
        if (b > c){
            return b;
        }
        else {
            return c;
        }
    }
}

int main(){

    int max = myMax(4, 6, 7);
    cout << max;

    return 0;
}
