#include <iostream>
#include <vector>
using namespace std;

int main() {

    // -------- Vector Declaration Methods --------

    vector<int> vecfirst;                    // Empty vector
    vector<int> vecsecond = {1,2,3,4,5};     // Initializer list
    vector<char> vecthird(5);                // Size = 5, default value = '\0'
    vector<int> vecfourth(5, 100);           // Five elements with value 100
    vector<int> vec = {1,2,3,4,5};           

    // -------- Insertion & Deletion --------

    vec.push_back(6);    // Adds element at end → 1 2 3 4 5 6
    vec.pop_back();      // Removes last element → 1 2 3 4 5

    vec.emplace_back(7); // Faster insertion at end
    vec.pop_back();

    // -------- Size & Capacity --------

    cout << vec.size() << endl;       // Returns number of element (Output: 5)
    cout << vec.capacity() << endl;   // Returns total memory Allocated and Capacity ≥ size (implementation dependent)
    cout << vec.max_size() << endl;   // Maximum elements vector can hold depending on system memory

    // -------- Empty Check --------

    vec.empty() ? cout << "Vector Is Empty\n"
                : cout << "Vector Is Not Empty\n";

    vecsecond.clear();  // Removes all elements

    vecsecond.empty() ? cout << "Vector Second Is Empty\n"
                      : cout << "Vector Second Is Not Empty\n";

    // -------- Element Access --------

    cout << vec.at(2) << endl;   // Safe access → 3
    cout << vec[4] << endl;      // Direct access → 5

    cout << vec.front() << endl; // Return First Element (output = 1)
    cout << vec.back() << endl;  // Return Last Element (output = 5)

    // -------- Insert & Erase --------

    vec.insert(vec.begin() + 3, 100); // 1 2 3 100 4 5
    cout << vec.size() << endl;       // Output: 6  (size is increased after insertion)

    vec.erase(vec.begin() + 3);       // Removes 100 → 1 2 3 4 5  (Erase the 3th position Element)

    // -------- Swap --------

    vector<string> vecstring = {"ANANDJADHAV", "SAIJADHAV"};
    vector<string> vecstring1 = {"NAIANA", "MAINA"};

    vecstring1.swap(vecstring);

    cout << "Value of vecstring1:\n";
    for(string val : vecstring1) {
        cout << val << endl;
    }

    // -------- Forward Iterator --------

    cout << "Forward Loop:\n";
    vector<int>::iterator it;
    for(it = vec.begin(); it != vec.end(); it++) {
        cout << *it << endl;
    }

    // Using auto keyword
    cout << "Using auto keyword (Forward):\n";
    for(auto it3 = vec.begin(); it3 != vec.end(); it3++) {
        cout << *it3 << endl;
    }

    // -------- Reverse Iterator --------

    cout << "Reverse Loop:\n";
    vector<int>::reverse_iterator it1;
    for(it1 = vec.rbegin(); it1 != vec.rend(); it1++) {
        cout << *it1 << endl;
    }

    // Using auto keyword
    cout << "Using auto keyword (Reverse):\n";
    for(auto it2 = vec.rbegin(); it2 != vec.rend(); it2++) {
        cout << *it2 << endl;
    }

    return 0;
}