#include <iostream>
#include "unorderedArrayListType.h"

using namespace std;

int main()
{
    int values[15] = { 1, 2, 3, 1, 5, 6, 1, 7, 8, 1, 10, 11, 1, 1, 1 };
    int length;
    unorderedArrayListType myList(15);
    for (int i = 0; i < 15; i++)
        myList.insertEnd(values[i]);
    cout << "Contents of the list: " << endl;
    myList.print();
    cout << endl;
    myList.removeAt(5);
    cout << "After removing the item at index 5:" << endl;
    myList.print();
    cout << endl;
    myList.removeAll(1);
    cout << "After removing all occurrences of value 1 from the list:" << endl;
    myList.print();
    cout << endl;
    length = myList.listSize();
    cout << "Retrieving item at location " << length - 2 << ": " << myList.retrieveAt(length - 2) << endl;
    cout << "Attempting to retrieve an item beyond the list (program terminates)" << endl;
    myList.retrieveAt(length + 1);


    return 0;
}
