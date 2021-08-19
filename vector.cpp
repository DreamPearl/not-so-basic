#include <iostream>
#include <vector>
#include <algorithm>   // std::find()
using namespace std;

int main(){
    vector<int> v;

    for(int i=1;i<=5;i++){
        v.push_back(i);
    }
    
    // Print all the values of vector
    for(auto i=v.begin();i!=v.end();i++){
        cout << *i << endl; 
    }

    auto first = v.begin();
    cout << *first << endl;  // First value of vector

    auto last = v.end()-1;   // v.end() Returns an iterator
                            // pointing to the theoretical element that follows the
                           // last element in the vector

    cout << *last << endl;  // Last value of vector

    vector<int>::iterator it;

    int element_to_search = 4;
    it = find(v.begin(),v.end(),element_to_search);
    if(it!=v.end()){
        cout << "Element found at position " << it-v.begin() << endl;
    }
    else{
        cout << "Element not found" << endl;
    }

    return 0;
}
