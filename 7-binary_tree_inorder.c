#include "binary_trees.h"

/**
 * binary_tree_inorder - this Goes through binary tree using the in-order traversal.
 * @tree: points to root node of tree to traverse.
 * @func: points to function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
