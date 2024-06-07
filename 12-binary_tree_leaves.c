#include"binary_trees.h"
/**
 * binary_tree_leaves - function
 * @tree: parent
 * Return: none
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t n;
	size_t b;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	n = binary_tree_leaves(tree->left);
	b = binary_tree_leaves(tree->right);

	return (n + b);
}
