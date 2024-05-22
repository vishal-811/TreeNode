#include<bits/stdc++.h>
#include<queue>
using namespace std;
template<typename T>
class TreeNode{
	public:
		T data;
		vector<TreeNode<T>*>children;
		
//		Constructor
        TreeNode(T data){
        	this->data=data;
		}
};

TreeNode<int>* takeinputlevelwise(){
	 int data;
	 cin>>data;
	 TreeNode<int>* root=new TreeNode<int>(data);
	 
	 queue<TreeNode<int>*>pendingNodes;
	 pendingNodes.push(root);
	 while(!pendingNodes.empty()){
	 	TreeNode<int>*front =pendingNodes.front();
	 	pendingNodes.pop();
	 	 int n;
	 	cout<<"Enter the no. of childs";
	    cin>>n;
	    
	    for(int i=0;i<n;i++){
	    	int childData;
	    	  cout<<"Enter the Child Data";
	    	cin>>childData;
	        TreeNode<int>* child =new TreeNode<int>(childData);
	        front->children.push_back(child);
	        pendingNodes.push(child);
		}
	 }
	 return root;	 
}

// Printing the tree
   void print(TreeNode<int>* root){
   	   if(root==NULL)return;
   	   cout<<root->data<<":";
   	   for(int i=0;i<root->children.size();i++){
   	   	   cout<<root->children[i]->data<<",";
		  }
		  cout<<endl;
		  
		  for(int i=0;i<root->children.size();i++){
		  	print(root->children[i]);
		  }
   }
int main(){
	TreeNode<int>* root =takeinputlevelwise();
	
	print(root);
}
