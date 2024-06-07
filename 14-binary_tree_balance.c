#include"binary_trees.h"
/**
 * tree_height - function
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
		return (1);
	n = tree_height(tree->left);
	b = tree_height(tree->right);
	return ((n >= b ? n + 1 : b + 1));
}

/**
 * binary_tree_balance - function
 * @tree: parent
 * Return: none
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int n;
	int b;

	if (tree == NULL)
		return (0);
	n = tree_height(tree->left);
	b = tree_height(tree->right);
	return (n - b);
}
