#include "binary_trees.h"

/**
 * max - Returns the maximum of 2 values.
 * @a: The first value.
 * @b: The second value.
 *
 * Return: The max of the two.
 */

size_t max(size_t a, size_t b)
{
	return ((a > b) ? a : b);
}

/**
 * binary_tree_height - Returns the height of a binary tree
 * @tree: ptr to the root of the tree to be measured.
 *
 * Return: Height, or 0 if NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	return (1 + max(left_height, right_height));
}
