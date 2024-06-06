#include "binary_trees.h"

/**
* binary_tree_leaves - Counts the leaves in a binary tree
* @tree: Pointer to the root node of the tree to count the number of leaves.
*
* Return: Number of leaves in the tree. If tree is NULL, return 0.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* If the current node is a leaf, return 1 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Otherwise, recursively count the leaves in the left and right subtrees */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
