#include<bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    Node* insert(Node* root, int data) {
        if (root == NULL) {
            return new Node(data);
        }
        else {
            Node* cur;
            if (data <= root->data) {
                cur = insert(root->left, data);
                root->left = cur;
            }
            else {
                cur = insert(root->right, data);
                root->right = cur;
            }

            return root;
        }
    }

    /*
    class Node {
        public:
            int data;
            Node *left;
            Node *right;
            Node(int d) {
                data = d;
                left = NULL;
                right = NULL;
            }
    };

    */
    void fillMap(Node* root, int d, int l, map<int, pair<int, int>>& m) {
        if (root == nullptr)
            return;
        else {
            if (m.count(d) == 0) {
                m[d] = make_pair(root->data, l);
            }
            else if (m[d].second > l) {
                m[d] = make_pair(root->data, l);
            }
            fillMap(root->left, d - 1, l + 1, m);
            fillMap(root->right, d + 1, l + 1, m);
        }
    }
    void topView(Node* root) {
        map<int, pair<int, int>> m;
        //root, distance from root, level, map
        fillMap(root, 0, 0, m);
        for (auto itr = m.begin(); itr != m.end(); itr++) {
            cout << itr->second.first << " ";
        }
    }

}; //End of Solution

int main() {

    Solution myTree;
    Node* root = NULL;

    int t;
    int data;

    std::cin >> t;

    while (t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }

    myTree.topView(root);
    return 0;
}
