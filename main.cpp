#include <iostream>
#include <set>
using namespace std;

//Create two set<int> objects, insert values into both, and then find the union and intersection of these sets. Print the results.



int main() {
    set<int> set1 = {1, 2, 3, 4};
    set<int> set2 = {3, 4, 5, 6};

    set<int> unionSet, intersectionSet;

    for (int n : set1) unionSet.insert(n);
    for (int n : set2) unionSet.insert(n);

    for (int n : set1) {
        if (set2.count(n)) intersectionSet.insert(n);
    }

    cout << "Union: ";
    for (int n : unionSet) cout << n << " ";
    cout << "\nIntersection: ";
    for (int n : intersectionSet) cout << n << " ";
    cout << endl;

    return 0;
}
