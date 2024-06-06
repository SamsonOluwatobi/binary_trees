#include "binary_trees.h"

/**
* binary_tree_nodes - Counts the non-leaf nodes in a binary tree
* @tree: Pointer to the root node of the tree to count the number of nodes.
*
* Return: Number of non-leaf nodes in the tree. If tree is NULL, return 0.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* If the current node is a leaf, return 0 */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* Recursively count the non-leaf nodes in the left and right subtrees */
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
