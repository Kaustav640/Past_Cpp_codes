#include <iostream>

using namespace std;

int sum(int a,int b){
     int c;   
     c=a+b;
    return c;
}
void print(int c,int d){
    cout<<c<<" "<<d;
}
int multiple(int e,int f){
    int k=e*f;
    return k;
}


int factorial(int x){
    
    int fact = 1;
    for(int i = 1; i<= x; i ++){
        fact = fact * i;
    }
    
    return fact;
}


int main(){
    
     cout<<sum(2,3)<<endl;
     print(1,5);
     cout<<endl;
     cout<<multiple(3,4)<<endl;
    cout<<factorial(5);
    
    int x =2;

    cout << factorial(x) ;
    
    return 0;
}

    

