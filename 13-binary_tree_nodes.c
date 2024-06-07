#include"binary_trees.h"
/**
 * binary_tree_nodes - function
 * @tree: parent
 * Return: none
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n;
	size_t b;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (0);
	n = binary_tree_nodes(tree->left);
	b = binary_tree_nodes(tree->right);

	return (n + b + 1);
}
