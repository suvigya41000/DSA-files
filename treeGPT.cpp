#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* lNode;
    Node* rNode;

    Node(int data) {
        this->data = data;
        lNode = nullptr;
        rNode = nullptr;
    }
};

class Tree {
public:
    Node* rootNode;

    Tree() {
        rootNode = nullptr;
    }

    Node* buildTree(int arr[], int idx) {
        idx++;
        if (arr[idx] == -1) {
            return nullptr;
        }
        Node* node = new Node(arr[idx]);
        node->lNode = buildTree(arr, idx);
        node->rNode = buildTree(arr, idx);
        return node;
    }

    void inOrder(Node* root) {
        if (root == nullptr) {
            return;
        }
        inOrder(root->lNode);
        cout << root->data << ",";
        inOrder(root->rNode);
    }
};

int main() {
    int arr[] = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Tree tree;
    int idx = -1;
    tree.rootNode = tree.buildTree(arr, idx);

    cout << tree.rootNode->data << endl;
    tree.inOrder(tree.rootNode);

    return 0;
}
