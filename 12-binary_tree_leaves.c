#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree
 * to count the leaves of.
 * Return: The number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (!tree)
		return (0);

	l = binary_tree_leaves(tree->left);
	r = binary_tree_leaves(tree->right);

	return ((l + r) == 0 ? 1 : l + r);
}
