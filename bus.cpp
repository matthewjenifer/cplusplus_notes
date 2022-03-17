// TRANSPORTATION

// You are making a program for a bus service. A bus can transport 50 passengers at once. Given the number of passengers waiting in the bus station as input, you need to calculate and output how many empty seats the last bus will have. | Sample Input: 126, Sample Output: 24 

#include <iostream> 
using namespace std;

int main() {
    
int a,b;
    cin>>a;   /*a is for number of passengers*/    
    b= 50-a%50;
cout<< b;     
    return 0;
}