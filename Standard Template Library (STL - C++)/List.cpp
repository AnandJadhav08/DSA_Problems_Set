#include <iostream>
#include <list>
using namespace std;

int main() {

    // -------- List Declaration Methods --------

    list<int> listfirst;                 // Empty list
    list<int> listsecond = {1,2,3,4,5};  // Initializer list
    list<int> listthird(5);              // Size = 5, default value = 0
    list<int> listfourth(5, 100);        // Five elements with value 100

    // -------- Insertion Operations --------

    listsecond.push_back(6);   // Adds element at end → 1 2 3 4 5 6
    listsecond.push_front(0);  // Adds element at front → 0 1 2 3 4 5 6

    // -------- Deletion Operations --------

    listsecond.pop_back();     // Removes last element → 0 1 2 3 4 5
    listsecond.pop_front();    // Removes first element → 1 2 3 4 5

    // -------- Size & Empty --------

    cout <<"Size Of listsecond :" << listsecond.size() << endl;   // Output: 5

    listsecond.empty() ? cout << "List is Empty\n"
                       : cout << "List is Not Empty\n";

    // -------- Access Elements --------
    // NOTE: list does NOT support indexing (no [] or at())

    cout << listsecond.front() << endl;  // First element → 1
    cout << listsecond.back() << endl;   // Last element → 5

    // -------- Insert at Specific Position --------
    // Insert requires iterator

    auto it = listsecond.begin();
    advance(it, 2);            // Move iterator to 3rd position

    listsecond.insert(it, 100); // 1 2 100 3 4 5
    cout <<"After Insertion listsecond : ";
    for(int Val : listsecond) {
        cout << Val << " ";   // Output: 5
    }


    // -------- Erase --------

    it = listsecond.begin();
    advance(it, 2);            // Iterator at 100

    listsecond.erase(it);      // Removes 100 → 1 2 3 4 5

    // -------- Remove by Value --------

    listsecond.remove(3);      // Removes value 3 → 1 2 4 5

    // -------- Sort --------

    listsecond.sort();         // Sorts list in ascending order

    // -------- Reverse --------

    listsecond.reverse();      // Reverses list → 5 4 2 1

    // -------- Unique --------

    list<int> listdup = {1,1,2,2,3,3};
    listdup.unique();          // Removes consecutive duplicates → 1 2 3

    // -------- Merge --------

    list<int> l1 = {1,3,5};
    list<int> l2 = {2,4};

    l1.merge(l2);              // l1 → 1 2 3 4 5 , l2 becomes empty

    // -------- Splice --------

    list<int> la = {10,20};
    list<int> lb = {30,40};

    la.splice(la.end(), lb);   // la → 10 20 30 40 , lb → empty

    // -------- Swap --------

    list<int> lx = {1,2};
    list<int> ly = {9,8};

    lx.swap(ly);               // lx → 9 8 , ly → 1 2

    // -------- Forward Iterator --------

    cout <<endl<< "Forward Iteration:\n";
    for(list<int>::iterator itr = listsecond.begin();
        itr != listsecond.end(); itr++) {
        cout << *itr << endl;
    }

    // -------- Forward Iterator using auto --------

    cout << "Forward Iteration using auto:\n";
    for(auto itr : listsecond) {
        cout << itr << endl;
    }

    // -------- Reverse Iterator --------

    cout << "Reverse Iteration:\n";
    for(list<int>::reverse_iterator ritr = listsecond.rbegin();
        ritr != listsecond.rend(); ritr++) {
        cout << *ritr << endl;
    }

    // -------- Clear --------

    listsecond.clear();        // Removes all elements

    cout << "Size after clear: " << listsecond.size() << endl; // Output: 0

    return 0;
}