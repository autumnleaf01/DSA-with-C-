//Today, we're going to write a code for finding the sum of all cardano numbers which is smaler or equal to a hundred.
//So let's start 
#include<iostream>
#include<cmath>
using namespace std;

bool isCardano(int a, int b, int c){
    float brc = b*sqrt(c);
    float brt = cbrt(a + brc) + cbrt(a - brc);
    if(brt < 1.00001 && brt > 0.99999){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int count = 0;
    for(int a=1; a<=100; a++){
        for(int b=1; b<=100; b++){
            for(int c=1; c<=100;  c++){
                if(a+b+c <100){
                    if(isCardano(a, b, c)){
                        count++;
                        cout<<"Cardano number found: " << a << ", " << b << ", " << c << endl;
                    }
                }
            }
        }
    }
    cout << "Total Cardano numbers found: " << count << endl;
    return 0;
}