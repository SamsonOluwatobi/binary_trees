#include "binary_trees.h"

/**
* binary_tree_uncle - Finds the uncle of a node
* @node: Pointer to the node to find the uncle
*
* Return: Pointer to the uncle node, or NULL if no uncle exists
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	/* Check if parent is left child, return right child of grandparent */
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	/* Check if parent is right child, return left child of grandparent */
	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);

	/* Return NULL if conditions are not met (should never happen) */
	return (NULL);
}
