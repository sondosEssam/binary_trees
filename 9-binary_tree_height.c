#include"binary_trees.h"
/**
 * binary_tree_postorder - function
 * @tree: parent
 * Return: none
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *tmp = tree;
	size_t n = -1, b = -1;

	if (tree == NULL)
		return (0);
	while (tmp != NULL)
	{
		n += 1;
		tmp = tmp->left;
	}
	tmp = tree;
	while (tmp != NULL)
	{
		b += 1;
		tmp = tmp->right;
	}
	return ((n > b ? n : b));
}
