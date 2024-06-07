#include"binary_trees.h"
/**
 * binary_tree_depth - function
 * @tree: parent
 * Return: none
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree->parent == NULL)
		return (0);
	size_t n = binary_tree_depth(tree->parent);

	return (n + 1);
}
