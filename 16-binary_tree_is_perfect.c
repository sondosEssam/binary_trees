#include"binary_trees.h"
/**
 * binary_tree_height - function
 * @tree: parent
 * Return: none
 */
size_t tree_height(const binary_tree_t *tree)
{
	int n;
	int b;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (0);
	n = binary_tree_height(tree->left);
	b = binary_tree_height(tree->right);
	return ((n >= b ? n + 1 : b + 1));
}

/**
 * binary_tree_is_perfect - function
 * @tree: parent
 * Return: none
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t n;
	size_t b;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	n = binary_tree_is_perfect(tree->left);
	b = binary_tree_is_perfect(tree->right);
	return ( n == 1 && tree_height(tree->left) == tree_height(tree->right) ? 1 : 0);
}
