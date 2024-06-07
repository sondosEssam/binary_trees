#include"binary_trees.h"
/**
 * binary_tree_is_full - function
 * @tree: parent
 * Return: none
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t n;
	size_t b;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	n = binary_tree_is_full(tree->left);
	b = binary_tree_is_full(tree->right);

	return (n == 1 && b == 1 ? 1 : 0);
}
