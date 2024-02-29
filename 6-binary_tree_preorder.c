#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses pre-orderly a binary tree
 *
 * @tree: ptr to the root node of the the tree to traverse
 * @func: ptr to a function to call for each node
 *
 * Return: void.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);

	binary_tree_preorder(tree->right, func);
}
