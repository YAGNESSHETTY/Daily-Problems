//User function Template for C++

/*
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
*/

// Function to find ceil of a given input in BST. If input is more 
// than the max key in BST, return -1 
void solve(Node*root , vector<int>&ans){
    if(root== NULL){
        return ;
    }
    solve(root->left , ans) ;
    ans.push_back(root->data) ;
    solve(root->right , ans) ;
    
}

int sum(Node* root, int k) 
{ 
  
    // Your code here
    vector<int>vals ;
    solve(root , vals) ;
    int res= 0 ;
    if(k <= vals.size()){
        for(int i = 0 ; i < k ; i++){
            res+=vals[i] ;
        }
    }
    
    return res ;
} 
