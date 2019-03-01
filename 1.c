#include<stdio.h>
#include<limlts.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
 

bool printPath (struct node *root,struct node *target_leaf)
{
    if (root == NULL)
        return false;
 
    if (root == target_leaf ||printPath(root->left, target_leaf) ||printPath(root->right, target_leaf) )
    {
        printf("%d ", root->data);
        return true;
    }
 
    return false;
}
 

void getTargetLeaf (struct node *node, int *max_sum,int curr_sum, struct node **target_leaf_ref)
{
    if (node == NULL)
        return;
 
    
    if (node->left == NULL && node->right == NULL)
    {
        if (curr_sum > *max_sum_ref)
        {
            *max_sum_ref = curr_sum;
            *target_leaf_ref = node;
        }
    }
 
  
    getTargetLeaf (node->left, max_sum_ref, curr_sum, 
                   target_leaf_ref);
    getTargetLeaf (node->right, max_sum_ref, curr_sum, 
                   target_leaf_ref);
}
 

{
    if (node == NULL)
        return 0;
 
    struct node *target_leaf;
    int max_sum = INT_MIN;
 
       getTargetLeaf (node, &max_sum, 0, &target_leaf);
 
   
    printPath (node, target_leaf);
 
    return max_sum; 
    }
 

struct node* newNode (int data)
{
    struct node *temp = new struct node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
int main()
{
    struct node *root = NULL;
 
        root = newNode(10);
    root->left = newNode(-2);
    root->right = newNode(7);
    root->left->left = newNode(8);
    root->left->right = newNode(-4);
 
    printf ("Following are the nodes on the maximum "
            "sum path \n");
    int sum = maxSumPath(root);
    printf ("\nSum of the nodes is %d ", sum);
 
    getchar();
    return 0;
}
