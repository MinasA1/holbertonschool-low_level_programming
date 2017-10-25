#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at leasts one child
 * @tree: pointer to binary tree node
 * Return: count of nodes, 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
  size_t nodes = 0;

  if (tree)
    {
      nodes += binary_tree_nodes(tree->left);
      nodes += binary_tree_nodes(tree->right);
      if (tree->left || tree->right)
	return (nodes + 1);
      else
	return (nodes);
    }
  return (0);
}
