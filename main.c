#include <stdio.h>
#include <stdlib.h>
#include "BST.h"
int main(int argc, char **argv)
{
   unsigned int i; // counter to loop from 1-10
   int item;       // variable to hold random values
   BST b;

  
   b.root = NULL;
   b.size = 0; // tree initially empty
   for (i = 1; i < argc; ++i)
   {
      insertNode(&b, atoi(argv[i]));
      //  insertNode_R(&b.root,atoi(argv[i]) );
   } // end for
   // traverse the tree preOrder
   /* printf("\nThe preOrder traversal is:\n" );
   preOrder( rootPtr );*/

   // traverse the tree inOrder
   printf("\nThe inOrder traversal is:\n");
   inOrder(b.root);
   printf("\nThe preOrder traversal is:\n");
   pre_order(b.root);
   printf("\nThe postOrder traversal is:\n");
   post_order(b.root);
   printf("\nThe treeOrder traversal is:\n");
   treeOrder(b.root,0);   // traverse the tree postOrder
   printf("\n");
  
   
} // end main
