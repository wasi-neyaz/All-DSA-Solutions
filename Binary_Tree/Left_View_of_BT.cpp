vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>ans;
   queue<pair<Node*,int>>q;
   int level=0;
   q.push({root,0});

while(!q.empty()){
       Node* node=q.front().first;
       int lev=q.front().second;
       q.pop();
       if(level==lev){
           ans.push_back(node->data);
           level++;
       }

if(node->left) q.push({node->left,lev+1});
       if(node->right) q.push({node->right,lev+1});
       
   }
   return ans;
}
