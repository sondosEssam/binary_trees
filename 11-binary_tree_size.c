#include"binary_trees.h"
/**
 * binary_tree_size - function
 * @tree: parent
 * Return: none
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t n;
	size_t b;

	if (tree == NULL)
		return (0);
	 n = binary_tree_size(tree->left);
	 b = binary_tree_size(tree->right);

	return (n + b + 1);
}
