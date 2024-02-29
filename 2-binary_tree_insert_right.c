#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the left child of another node
 * @parent: ptr to the node to insert the left child in
 * @value: value to be stored in the new node.
 *
 * Return: ptr to the new node, NULL upon failure.
 *
 * Description: Function inserts a new right child for the given parent node.
 *		If the parent already has a left child, the new node replaces it,
 *		and the existing right child becomes the right child of the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_child;

	if (parent == NULL)
		return (NULL);

	new_right_child = binary_tree_node(parent, value);

	if (new_right_child == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_right_child->right = parent->right;
		parent->right->parent = new_right_child;
	}
	parent->right = new_right_child;

	return (new_right_child);
}
