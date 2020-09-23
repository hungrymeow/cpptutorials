#include <iostream> 
using namespace std; 
  
class SmartPtr { 
    int* ptr; // Actual pointer 
public: 
    // Constructor
    explicit SmartPtr(int* p = NULL) { ptr = p; } 
  
    // Destructor 
    ~SmartPtr() { delete (ptr); } 
  
    // Overloading dereferencing operator 
    int& operator*() { return *ptr; } 
}; 
  
int main() 
{ 
    SmartPtr ptr2(new int()); 
    *ptr2 = 20; 
    cout << *ptr2; 
  
    // We don't need to call delete ptr: when the object 
    // ptr goes out of scope, the destructor for it is automatically 
    // called and destructor does delete ptr. 
  
    return 0; 
}