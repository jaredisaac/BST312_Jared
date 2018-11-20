// Sample driver
// EE 312 Fall 2018
//
// The BST should work for any data type or object.
// Other user created objects must have the << operator overloaded for 
// output.
//

#include <iostream>
#include <fstream>
#include "BST312.h"

using namespace std;

template <typename T>
void print(vector<T> vec){
    for(int i = 0 ; i < vec.size() ; i++){
        cout << vec[i] << endl;;
    }
}

int main() {

    ifstream inFile;
    inFile.open("test.txt");

    BST_312<string> bst;
   
    string s;
    inFile >> s;
    while (inFile) {
        cout << "inserting ... " << s << endl;
        bst.insertItem(s);
        inFile >> s;
    }

    cout << "postorder traversal is " << endl;
    print(bst.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(bst.inOrderTraversal());
    cout << endl;

    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bst.countNodes() << endl;
    s = "tree";
    cout << bst.isItemInTree(s) << " and should be true (1) " << endl;
    bst.deleteItem(s);
    cout << bst.isItemInTree(s) << " and should be false (0) " << endl;
    print(bst.postOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << bst.countNodes() << endl;
    cout << endl;
    bst.makeEmpty();
    cout << "number of nodes in tree after delete is " << bst.countNodes() << endl;
    cout << endl;

    inFile.close();

    cout << "\nNEW TEST STARTING NOW\n" << endl;

    inFile.open("test2_5.txt");

    BST_312<int> int_bst;

    int x;
    inFile >> x;
    while (inFile) {
        cout << "inserting ... " << x << endl;
        int_bst.insertItem(x);
        inFile >> x;
    }

    cout << "postorder traversal is " << endl;
    print(int_bst.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(int_bst.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(int_bst.inOrderTraversal());
    cout << endl;

    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << int_bst.countNodes() << endl;
    x = 13;
    cout << int_bst.isItemInTree(x) << " and should be true (1) " << endl;
    int_bst.deleteItem(x);
    cout << int_bst.isItemInTree(x) << " and should be false (0) " << endl;
    print(int_bst.postOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << int_bst.countNodes() << endl;
    cout << endl;
    bst.makeEmpty();
    cout << "number of nodes in tree after delete is " << bst.countNodes() << endl;
    cout << endl;
}

