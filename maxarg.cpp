//We're going to write  a code to find the maximum number from arguments
//we'll use a header file called as <cstdarg>
#include<iostream>
#include<cstdarg>
using namespace std;
int isMax(int,...){};
int main(){
    int max = isMax(45,32,5,3,2,65);
    cout<<"Maximum number is: "<<max<<endl;
    return 0;
}
int isMax(int,...){
    int i, ptr, max;
    int count = 0;
    va_list ptr;
    va_start(ptr, count);
    max = va_arg(ptr, int);
    for(int i=1; i<count; i++){
        if(i>max){
            max = i;
        }
    }

}
