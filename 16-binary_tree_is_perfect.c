#include "binary_trees.h"

/**
* binary_tree_hgt - Measures the height of a binary tree
* @tree: Pointer to the root node of the tree to measure the height
*
* Return: Height of the tree, 0 if tree is NULL
*/
size_t binary_tree_hgt(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_hgt(tree->left);
	right_height = binary_tree_hgt(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
* binary_tree_is_perfect - Checks if a binary tree is perfect
* @tree: Pointer to the root node of the tree to check
*
* Return: 1 if the tree is perfect, 0 otherwise. If tree is NULL, return 0.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_hgt(tree->left);
	height_right = binary_tree_hgt(tree->right);

	/* If the height of both subtrees are equal, check if they are perfect */
	if (height_left == height_right)
	{
		/* If both subtrees are NULL, it's a perfect tree */
		if (tree->left == NULL && tree->right == NULL)
			return (1);

		/* If both subtrees are not NULL, recursively check if they are perfect */
		if (tree->left != NULL && tree->right != NULL)
			return (binary_tree_is_perfect(tree->left)
			&& binary_tree_is_perfect(tree->right));
	}

	return (0); /* If conditions are not met, tree is not perfect */
}
