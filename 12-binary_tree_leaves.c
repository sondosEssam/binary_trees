#include"binary_trees.h"
/**
 * binary_tree_leaves - function
 * @tree: parent
 * Return: none
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
		return (0);
	if (tree->right != NULL)
		n += 1;
	if (tree->left != NULL)
		n += 1;
	return (n);
}
