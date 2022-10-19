#include <stdio.h>
#include <malloc.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

void preOrder(struct Node* root){
    if(root != NULL){
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

struct Node* createNode(int data){
    struct Node* n;
    n = (struct Node*) malloc (sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
}


int main(){
    struct Node* p = createNode(2);
    struct Node* p1 = createNode(0);
    struct Node* p2 = createNode(18);
    struct Node* p3 = createNode(11);
    struct Node* p4 = createNode(3);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    preOrder(p);

    return 0;
}