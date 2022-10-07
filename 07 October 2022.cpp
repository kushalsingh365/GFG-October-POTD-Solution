class Solution
{
    public:
    void flatten(Node *root)
    {
        //code here
        stack<Node *> st;
        while (1)
        {
            if (root->right)
                st.push(root->right);

            if (root->left)
            {
                Node *temp = root->left;
                root->left = NULL;
                root->right = temp;
                root = temp;
            }
            else
            {
                if (st.empty())
                    break;
                root->right = st.top();
                st.pop();
                root = root->right;
            }
        }
    }
};
