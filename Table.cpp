#include <iostream>
using namespace std;

int main() {
    cout << "Multiplication Table from 2 to 20:" << endl;
    cout << "---------------------------------" << endl;
    cout<<"table\t\t"<<endl;
    for (int i = 2; i <= 20; ++i) {
        for (int j = 2; j <= 10; ++j) {
            cout << "[" << i << " * " << j << " = " << i * j << "]" << " ";
            cout<<"\t\t"<<endl;
             
          
            
        }
    
   
        cout << endl;
    }
    return 0;
} 