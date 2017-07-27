#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data ;
    struct Node * left, * right ;
};
int maxLevelSum(struct Node** root)
{
    if (root == NULL)
        return 0;
    cout<<root->data;
    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        int count = q.size() ;
        int sum = 0;
        while (count--)
        {
            
            Node *temp = q.front();
            q.pop();
 
            sum = sum + temp->data;
 
            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);
        }
        cout<<sum<<endl;
    }
}
struct Node * newNode(int data)
{
    struct Node * node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}
int maxi(int a[],int low,int high){
    int max=a[low],max_index=low;
    for(int i=low;i<high;i++){
        if(a[i]>max){
            max=a[i];
            max_index=i;
        }
    }
    return max_index;
}
void inorder(struct Node** root)
{
    if (!root) 
       return; 
    inorder(root->left);            
    std::cout << root->data << " "; 
    inorder(root->right);       
}
void divide(int a[],int low, int n,struct Node** root)
{ 
	    if((n-low)>=0){
	        int mid=maxi(a,low,n);
	        root=newNode(a[mid]);
	        cout<<root->data<<endl;
		    divide(a, low, mid-1,&root->left);
		    divide(a, mid+1, n,&root->right);
	    }
    else return ;
}
int main()
{   int n;
    cin>>n;
    int a[n];
    struct  Node* root=NULL;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    divide(a,0,n-1,&root);
    inorder(&root);
    maxLevelSum(&root);
    return 0;
}

