#include<iostream>
#include<vector>
using namespace std;

int main() { 

 // Vector  Declaration Method 
  vector<int> vecfirst; //0
  vector<int> vecsecond = {1,2,3,4,5}; // 1,2,3,4,5
  vector<char> vecthird(5); // only  5 character insert
  vector<int> vecfourth(5, 100); // Print the 5 times 100
  vector<int> vec = {1,2,3,4,5};
  
    vec.push_back(6); // Adds 6 element At end like 1,2,3,4,5,6
    vec.pop_back(); // Removes Last element 1,2,3,4,5

    vec.emplace_back(7); // Same like push_back but little bit faster  Add the 7 last of vector
    vec.pop_back();

    cout<< vec.size() <<endl;   // Returns number of element ( output = 5 ) 
    cout<< vec.capacity() <<endl; // Returns total memory Allocated and capacity >= size or capacity are double to size  ( output = 10 )
    cout<< vec.max_size() <<endl; //  1073741823  return the maximum number of elements vector can hold

    vec.empty() ? (cout<< "Vector Is Empty"<<endl) : (cout<< "Vector Is Not Empty"<<endl) ;   //Returns boolean value using this value We Check Vector is empty or not
    
    vecsecond.clear();  // Removes the all elements
    vecsecond.empty() ? (cout<< "Vector Second Is Empty"<<endl) : (cout<< "Vector Second Is Not Empty"<<endl) ; // Vector Second is Empty
    
    cout<< vec.at(2) <<endl; // Access element with bounds checking ( output = 3  because index start from 0 )
    cout<< vec[4] <<endl; // Access Element Directly but not safer than at() (output = 5)
       
    cout<< vec.front() <<endl; // Return First Element (output = 1)
    cout<< vec.back() <<endl;  // Return Last Element (output = 5)
    
    // Insert ELement At Specific Position

    vec.insert(vec.begin() +3, 100);  // Output is 1,2,3,100,4,5
    cout<< vec.size() <<endl;  // size is increase output is 6
     
    vec.erase(vec.begin() +3); // Erase the 3th position Element (if cout output is 1,2,3,4,5)
    
    vector<string> vecstring = {"ANANDJADHAV","SAIJADHAV"};
    vector<string> vecstring1 = {"NAIANA", "MAINA"};
    vecstring1.swap(vecstring);      // Swap the  Values of vector
    cout<<"Value of vecstring1 :"<<endl;
    for(string val : vecstring1) {
        cout<< val<<endl;
    }

    // Forward Iterator In Vector  
       vector<int>::iterator it;
       cout<<"Forward Loop :"<<endl;
       for(it = vec.begin(); it != vec.end(); it++){
           cout<< *(it) <<endl;
        }

        //also
        cout<< "using auto keyword Forward Loop :" <<endl;
        for(auto it3 = vec.begin(); it3 != vec.end(); it3++) {        // After use auto keyword - not required to declared iterator - it3
            cout<< *(it3)<<endl;
        }
        
    
    // Backward / Reverse Iterator In Vector  
       vector<int>::reverse_iterator it1;
       cout<<"Reverse Loop :"<<endl;
       for(it1 = vec.rbegin(); it1 != vec.rend(); it1++){
           cout<< *(it1) <<endl;
        }

        //also
        cout<< "using auto keyword Reverse Loop :" <<endl;
        for(auto it2 = vec.rbegin(); it2 != vec.rend(); it2++) {     // After use auto keyword - not required to declared iterator - it2
            cout<< *(it2)<<endl;
        }
    return 0; 
}

