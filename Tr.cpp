#include<bits/stdc++.h>
using namespace std;
template<typename T>
class TreeNode{
	public:
    T data;
	vector<TreeNode<T>*>children;
	
//     Constructor
      TreeNode(T data){
      	  this->data =data;
	  }	
};
    template<typename T>
   TreeNode<T>* takeinput(){
   	     T data;
   	     cin>>data;
   	     TreeNode<T>* root =new TreeNode<T>(data);
   	     int n;
   	     cout<<"Enter the number of childs:";
   	     cin>>n;
   	     
   	     for(int i=0;i<n;i++){
   	     	 TreeNode<T>* child = takeinput<T>();
   	     	  root->children.push_back(child);
			}
			return root;
   }

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
//	Take input 
    TreeNode<int>*root =takeinput<int>();
    
    print(root);
    return 0;
}
