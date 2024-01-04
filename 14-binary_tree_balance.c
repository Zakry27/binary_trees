#include "binary_trees.h"

/**
 * binary_tree_balance - this Measures balance factor of binary tree.
 * @tree: points to root node of tree to measure balance factor.
 *
 * Return: If tree is NULL, returns 0, else returns balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - this Measur height  binary tree.
 * @tree: points to root node of tree to measure height.
 *
 * Return: If tree is NULL, the func must return 0, else returns height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
