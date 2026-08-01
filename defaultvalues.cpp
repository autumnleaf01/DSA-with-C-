//I'm going to write a code to clear default values for various data type
//for example :- int, char, float, double
#include<iostream>
using namespace std;

void fun(char, int, long int, float= 3.14, double = 6.28);
int main(){
    fun('A',32, 628, 9.6, 7.43);
    fun('A',32, 628, 9.6);
    fun('A',32, 628);
}
void fun(char ch, int num, long int n, float f, double d){
    cout<<ch<<" "<<num<<" "<<n<<" "<<f<<" "<<d<<endl;
}