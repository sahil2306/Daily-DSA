// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


 // } Driver Code Ends
/*
// node structure:

struct Node
{
    int data;
    Node* left;
    Node* right;
};

*/

class Solution{
public:
    unordered_map<Node*, Node*> parent;
    Node *targetNode = new Node();
    
    void inorder(Node* root, int target){
        if(!root)return;
        if(root->data==target)targetNode = root;
        
        parent[root->left] = root;
        parent[root->right] = root;
        
        inorder(root->left,target);
        inorder(root->right,target);
    }
    
    int sum_at_distK(Node* root, int target, int k)
    {
        // code here
        int ans=0;
        
        inorder(root,target);
        queue<pair<Node*,int>> q;
        
        q.push({targetNode,0});
        
        unordered_map<Node*, int> visited;
        
        while(!q.empty()){
            auto it = q.front();q.pop();
            
            Node *curr = it.first;
            ans+=curr->data;
            visited[curr] = 1;    
            int level = it.second;
            
            if(curr->left!=NULL and visited[curr->left]==0 and level<k){
                q.push({curr->left,level+1});
            }
            if(curr->right!=NULL and visited[curr->right]==0 and level<k){
                q.push({curr->right,level+1});
            }
            if((parent.find(curr)!=parent.end()) and visited[parent[curr]]==0 and level<k){
                q.push({parent[curr],level+1});
            }
            
        }
                
        return ans;
    }
};



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    getchar();
    
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);
        
        int target,k;
        cin>> target >> k;
        getchar();
        
        Solution ob;
        cout<< ob.sum_at_distK(root,target,k) << endl;
    }
	return 0;
}

  // } Driver Code Ends