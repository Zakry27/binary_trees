#include "binary_trees.h"

/**
 * binary_tree_depth - this Measures depth of node in binary tree.
 * @tree: points to node to measure depth.
 *
 * Return: If the tree is NULL, func must return 0, else return depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
