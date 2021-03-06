#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a new node to the left
 * @parent: parent of new node
 * @value: value to be saved
 * Return: pointer to new node, NULL if fails
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
  binary_tree_t *new_node;

  new_node = malloc(sizeof(binary_tree_t));
  if (!new_node)
    return (NULL);
  new_node->n = value;
  new_node->parent = parent;
  new_node->right = NULL;
  new_node->left = NULL;
  if (parent->left)
    {
    new_node->left = parent->left;
    new_node->left->parent = new_node;
    }
  parent->left = new_node;
  return (new_node);
}
