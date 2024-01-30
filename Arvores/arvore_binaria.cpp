#include <bits/stdc++.h>

using namespace std;
typedef int TIPOCHAVE;

typedef struct aux{
    TIPOCHAVE key;
    struct aux *esq, *dir;
} Node;

Node* make_node(TIPOCHAVE key){
    Node* n = new Node;

    n->dir=NULL;
    n->esq=NULL;
    n->key = key;

    return n;
}

Node* insert(Node* root, TIPOCHAVE info){
    if(root == NULL)
        return make_node(info);
    else if(info > root->key)
        root->dir = insert(root->dir,info);
    else if(info < root->key)
        root->esq = insert(root->esq, info);

    return root;
}

TIPOCHAVE max(Node *a, Node*b){
    return a->key > b->key ? a->key : b->key;
}

int heigth(Node *root){
    if(root == NULL)
        return -1;
    else
        return max(heigth(root->dir), heigth(root->esq)) + 1;
}

void free_node(Node * r){
    if (r != NULL){
        free_node(r->dir);
        free_node(r->esq);
    }
    delete r;
}

int main(){
    // Node *root = make_node(10);

    // root->dir = make_node(30);
    // root->dir->dir = make_node(35);
    // root->esq = make_node(8);
    // root->dir->esq = make_node(25);

    Node* root = NULL;
    root = insert(root,10);
    root = insert(root,20);
    root = insert(root,34);
    root = insert(root,1);

    int h = heigth(root);
    free_node(root);
    return 0;
}