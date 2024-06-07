#include"binary_trees.h"
/**
 * binary_tree_is_perfect - function
 * @tree: parent
 * Return: none
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t n;
	size_t b, f, q;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	n = binary_tree_is_perfect(tree->left);
		f = n;
	b = binary_tree_is_perfect(tree->right);
		q = b;
	printf("%d, %ld, %ld, %ld, %ld\n",tree->n, n, b, f, q);
	return (f+=n , q+=b, n == 1 && b == n && f == q ? 1 : 0);
}
