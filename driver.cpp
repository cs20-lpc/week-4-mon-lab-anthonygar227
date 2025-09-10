#include <iostream>
#include "LinkedList.hpp"
using namespace std;

int main() {
    LinkedList<int> list;

    cout << "Initially:\n";
    cout << list;
    cout << "Length: " << list.getLength() << "\n\n";

    list.append(10);
    list.append(20);
    list.append(30);

    cout << "After appending 3 elements:\n";
    cout << list;
    cout << "Length: " << list.getLength() << "\n";
    cout << "Element at index 1: " << list.getElement(1) << "\n\n";

    list.replace(1, 99);
    cout << "After replacing index 1 with 99:\n";
    cout << list << "\n";

    try {
        cout << "Element at index 5: " << list.getElement(5) << "\n";
    } catch (const string& e) {
        cout << "Caught exception: " << e << "\n\n";
    }

    list.clear();
    cout << "After clear:\n";
    cout << list;
    cout << "Length: " << list.getLength() << "\n";

    return 0;
}

