#include "AVLTree.hpp"
int main ()
{
        AVLTree <int> avlTree;
        // avlTree.insert(40);
        // avlTree.insert(20);
        // avlTree.insert(10);
        // avlTree.insert(25);
        // avlTree.insert(30);
        // avlTree.insert(22);
        // avlTree.insert(50);
    srand(time(NULL));
    for ( int i = 0 ; i < 100000 ; i ++)
        avlTree.insert(rand());
  
        cout << "Printing "<< endl;
        avlTree.traverseDESC();
        cout << "Checking Balance ....." << endl;
        cout << "Balanced? " << endl;
        if (avlTree.isBalancedpls())
            cout<< "YES"<<endl;
    else
        cout<<"NO"<<endl;
        return 0;
}
