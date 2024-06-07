#include"binary_trees.h"
/**
 * binary_tree_height - function
 * @tree: parent
 * Return: none
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	size_t n = binary_tree_height(tree->left);
	size_t b = binary_tree_height(tree->right);

	return ((n > b ? n : b) + 1);
}
