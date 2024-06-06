#include "binary_trees.h"

/**
* binary_tree_hg - Measures the height of a binary tree
* @tree: Pointer to the root node of the tree to measure the height.
*
* Return: Height of the tree. If tree is NULL, return 0.
*/
size_t binary_tree_hg(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = binary_tree_hg(tree->left);
	size_t right_height = binary_tree_hg(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
* binary_tree_balance - Measures the balance factor of a binary tree
* @tree: Pointer to the root node of the tree to measure the balance factor.
*
* Return: Balance factor of the tree. If tree is NULL, return 0.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = binary_tree_hg(tree->left);
	size_t right_height = binary_tree_hg(tree->right);

	return (left_height - right_height);
}
