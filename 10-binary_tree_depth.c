#include"binary_trees.h"
/**
 * binary_tree_depth - function
 * @tree: parent
 * Return: none
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t n;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	n = binary_tree_depth(tree->parent);

	return (n + 1);
}
