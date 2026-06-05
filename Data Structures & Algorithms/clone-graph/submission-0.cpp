/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        
        map<Node*, Node*> o2N;
        return dfs(node, o2N);
    }

    Node* dfs(Node* node, map<Node*, Node*>& o2N)
    {
        if (node == nullptr)
        {
            return nullptr;
        }

        if(o2N.count(node))
        {
            return o2N[node];
        }

        Node* nb = new Node(node->val);
        o2N[node] = nb;

        for(Node* itr : node->neighbors)
        {
            nb->neighbors.push_back(dfs(itr,o2N));
        }

        return nb;


    }
};
