#ifndef TASK5_TREE_H
#define TASK5_TREE_H

#include <cstdio>
#include <iostream>

using namespace std;

template<class type>
class NodeBST {
    type data;
    NodeBST *left;
    NodeBST *right;
private:
    NodeBST(const NodeBST *nodeBST) {};
public:
    virtual ~NodeBST();

    NodeBST(type _data) : data(_data), left(NULL), right(NULL) {}

    bool contains(type val) const;

    bool insert(type val);

    void print() const;
};

template<class type>
class TreeBST {
    NodeBST<type> *root;
private:
    TreeBST(const TreeBST &treeBST) {};
public:
   virtual ~TreeBST();

    TreeBST() : root(NULL) {}

    void helperFunc(ostream &os, NodeBST<type> *root) const;

    bool contains(type val) const { return (root != NULL) ? root->contains(val) : false; }

    bool insert(type val);

    void print() const;
};

//template<class type>
//ostream &operator<<(ostream &os, const NodeBST<type> &rhs) {
//    cout << "success" << endl;
//    return os;
//}
//
//template<class type>
//void TreeBST<type>::helperFunc(ostream &os, NodeBST<type> *root) const {
//    if (root != NULL) {
//        helperFunc(os, root->left);
//        os << root->data << " ";
//        helperFunc(os, root->right);
//    }
//
//    if (left != NULL) left->print();
//    cout << data << " ";
//    if (right != NULL) right->print();
//}

template<class type>
bool NodeBST<type>::contains(type val) const {
    if (val == data) return true;
    NodeBST *next = (val < data) ? left : right;
    return (next != NULL) ? next->contains(val) : false;
}

template<class type>
bool NodeBST<type>::insert(type val) {
    if (val == data) return false;
    NodeBST<type> *&next = (val < data) ? left : right;
    if (next == NULL) {
        next = new NodeBST(val);
        return true;
    } else return next->insert(val);
}

template<class type>
void NodeBST<type>::print() const {
    if (left != NULL) left->print();
    cout << data << " ";
    if (right != NULL) right->print();
}

template<class type>
NodeBST<type>::~NodeBST() {
    delete left;
    delete right;
}

template<class type>
TreeBST<type>::~TreeBST() {
    delete root;
}

template<class type>
bool TreeBST<type>::insert(type val) {
    if (root == NULL) {
        root = new NodeBST<type>(val);
        return true;
    } else {
        if (contains(val)) {
            string exc = "value already exist in tree";
            throw exc;
        }
        return root->insert(val);
    }
}

template<class type>
void TreeBST<type>::print() const {
    cout << "tree: [";
    if (root == NULL) cout << "empty" << endl;
    else root->print();
    cout << "]" << endl;
}

#endif //TASK5_TREE_H
