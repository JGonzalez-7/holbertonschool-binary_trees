#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a given node
 * @node: pointer to the node to find the uncle of
 *
 * Return: pointer to the uncle node, or NULL if no uncle exists
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent;

	/* Return NULL if node is NULL */
	if (node == NULL)
		return (NULL);

	parent = node->parent;
	/* Return NULL if parent doesn't exist */
	if (parent == NULL)
		return (NULL);

	grandparent = parent->parent;
	/* Return NULL if grandparent doesn't exist */
	if (grandparent == NULL)
		return (NULL);

	/* Check which child of grandparent is the parent */
	if (grandparent->left == parent)
		return (grandparent->right);

	/* Otherwise, parent is the right child, return left */
	return (grandparent->left);
}
