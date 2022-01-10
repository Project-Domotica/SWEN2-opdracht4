#ifndef TREE_SORT_INCLUDED
#define TREE_SORT_INCLUDED



template <typename T>
struct Node 
{ 
    T key; 
    struct Node<T> *left, *right; 
}; 
  
// A utility function to create a new BST Node 
template <typename T>
struct Node<T> *newNode(T item) 
{ 
    struct Node<T> *temp = new Node<T>; 
    temp->key = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
  
// Stores inoder traversal of the BST 
// in arr[] 
template <typename T>
void store_sorted(Node<T> *root, T arr[], int &i) 
{ 
    if (root != NULL) 
    { 
        store_sorted(root->left, arr, i); 
        arr[i++] = root->key; 
        store_sorted(root->right, arr, i); 
    } 
} 
  
/* A utility function to insert a new 
   Node with given key in BST */
template <typename T>
Node<T>* insert(Node<T>* node, T key) 
{ 
    /* If the tree is empty, return a new Node */
    if (node == NULL) return newNode(key); 
  
    /* Otherwise, recur down the tree */
    if (key < node->key) 
        node->left  = insert(node->left, key); 
    else if (key > node->key) 
        node->right = insert(node->right, key); 
  
    /* return the (unchanged) Node pointer */
    return node; 
} 
  
// This function sorts arr[0..n-1] using Tree Sort 
template <typename T>
void tree_sort(T arr[], int n) 
{ 
    struct Node<T> *root = NULL; 
  
    // Construct the BST 
    root = insert(root, arr[0]); 
    for (int i=1; i<n; i++) 
        insert(root, arr[i]); 
  
    // Store inoder traversal of the BST 
    // in arr[] 
    int i = 0; 
    store_sorted(root, arr, i); 
} 

  




#endif