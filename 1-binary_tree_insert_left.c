#include "binary_trees.h"

/*
 * binary_tree_insert_left - Inserts a node as the left child of another node
 * @parent: ptr to the node to insert the left child in
 * @value: value to be stored in the new node.
 *
 * Return: ptr to the new node, NULL upon failure.
 *
 * Description: The function inserts a new left child and if one exists,
 *		it replaces it and makes the existing child it's left chile.
 *		If that even makes sense at all.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_child;

	if (parent == NULL)
		return (NULL);

	new_left_child = binary_tree_node(parent, value);

	if (new_left_child == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_left_child->left = parent->left;
		parent->left->parent = new_left_child;
	}
	parent->left = new_left_child;

	return (new_left_child);
}
