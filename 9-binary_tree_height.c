#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a
 * binary tree.
 * @tree: A pointer to the root node of the
 * tree to measure the height.
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (!tree)
		return (0);

	if (tree->left)
		l = binary_tree_height(tree->left) + 1;
	if (tree->right)
		r = binary_tree_height(tree->right) + 1;

	return ((l < r) ? r : l);
}
