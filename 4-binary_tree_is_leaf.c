#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Verifies that the node is a leaf of a binary tree.
 * @node: Points to the node to check.
 *
 * Return: In case the node is leaf - 1.
 *         Otherwise - 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
