#include"binary_trees.h"
/**
 * binary_tree_size - function
 * @tree: parent
 * Return: none
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	int n = binary_tree_size(tree->left);
	int b = binary_tree_size(tree->right);

	return (n + b + 1);
}
