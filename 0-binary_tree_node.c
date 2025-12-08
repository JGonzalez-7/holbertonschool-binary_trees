#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 * @parent: Pointer to the parent node
 * @value: Value to assign to the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t)); /* allocate memory */
	if (new == NULL) /* check malloc failure */
		return (NULL);

	new->n = value; /* store the value */
	new->parent = parent; /* set parent */
	new->left = NULL; /* no left child yet */
	new->right = NULL; /* no right child yet */

	return (new);
}
