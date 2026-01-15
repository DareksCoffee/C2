#ifndef INCLUDE_INCLUDE_TREE_H_
#define INCLUDE_INCLUDE_TREE_H_

#include <stddef.h>

typedef enum { TREE_ROOT } nodetype_t;

typedef struct tree_t tree_t;

struct tree_t {
  nodetype_t type;
  char *data;
  char *label; // for debug purpose

  tree_t **children;
  size_t child_count;
};

tree_t *new_tree(nodetype_t type, char *data, int child_count,
                 const char *label);
/* Frees the tree + all children, which means that
 * the WHOLE tree top-to-bottom is freed. Should only be used on
 * the tree's root to avoid double frees!
 */
void free_tree(tree_t *tree);
void add_child(tree_t *tree, tree_t *child);

int tree_contains_child(tree_t *tree, nodetype_t expected);

#endif // INCLUDE_INCLUDE_TREE_H_
