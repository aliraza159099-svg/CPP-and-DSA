#include <cstddef>
template <typename T>
BST<T>::BST()
{
    root = NULL;
}

//the destructor to empty the tree
template <typename T>
BST<T>::~BST(){
        //this helper method will delete the nodes from the tree making it empty
        makeEmpty(root);
}

// Insert wrapper to insert an element in the tree
template <typename T>
void BST<T>::insert(const T& num) {
    insert(num, root);
}

//this is the method which insert the nodes as per the rules of the BST
template <typename T>
void BST<T>::insert(const T& num, Node* &root){
    //if  the root becomes null the new element will be added its place of addition is found
    if(root == NULL){
        root = new Node(num);
    }
    //if the inserting element is smaller then the root data the element will go towards the left of the tree
    else if(num < root->element ){
        insert(num, root->left);
    }
    //if the inserting element is larger then the root data the element will go towards the right of the tree we have
    else if(num > root->element){
        insert(num, root->right);
    }
    else;//noting
}

//this methods return true if the tree is empty
template <typename T>
bool BST<T>::empty()const{
    return root == NULL;
}
//this is the private method to make the tree empty
template <typename T>
void BST<T>::makeEmpty(Node*& t){
    if(t == NULL){
        return;
    }
    //recursively
    makeEmpty(t->right);
    makeEmpty(t->left);
    delete t;
    t = NULL;
}
// the search methods that search for an element if the element is present return true otherwise fasle
template <typename T>
bool BST<T>::search(const T& num) const {
    return contains(num, root);
}
//this is the method to check whether an element is in the tree or not
template <typename T>
bool BST<T>::contains(const T& num, Node* root)const{
    if (root == NULL) return false;
    if(num == root->element) return true;
    else if(num < root->element){
       return contains(num,root->left );
    }else
    {
        return contains(num, root->right);
    }
}

//finding the minimum element from the tree
template <typename T>
typename BST<T>::Node* BST<T>::findMin(Node* t) const{
    //if the root if null return NULL means the element is not in the tree
    if(t == NULL){
        return NULL;
    }
    //if the left of the root is null means the last smallest is found and return the root
    if(t->left == NULL){
        return t;
    }
    //recursively calling the findMin to find the min number
    return findMin(t->left);
}

// Remove wrapper to remove an element from the tree
template <typename T>
void BST<T>::remove(const T& num) {
    remove(num, root);
}

//the method which remove any particular element we want to delete from the tree
template <typename T>
void BST<T>::remove(const T& x, Node*& root) {
    if(root == NULL){
        return;
    }
    //if the deleting element is smaller than the root data then we move left of the root
    else if(x < root->element){
        remove(x, root->left);
    }
    //if the deleting element is greater than the root data then we move right side of root
    else if(x > root->element){
        remove(x, root->right);
    }
    //what of the deleting element has childern on both sides
    else if (root->left != NULL && root->right != NULL) {
        root->element = findMin(root->right)->element;
        remove(root->element, root->right);
    }
    // One child or leaf
    else {
        Node* oldNode = root;
        root = (root->left != NULL) ? root->left : root->right;
        delete oldNode;
    }

}
