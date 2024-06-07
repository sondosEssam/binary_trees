#include"binary_trees.h"
/**
 * binary_tree_height - function
 * @tree: parent
 * Return: none
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int n;
	int b;

	if (tree == NULL)
		return (-1);
	n = binary_tree_height(tree->left);
	b = binary_tree_height(tree->right);
	return ((n >= b ? n + 1 : b + 1));
}
