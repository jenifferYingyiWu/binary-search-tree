/*
 * treedelete.c
 *
 *  Created on: Nov 10, 2017
 *      Author: jenifferwu
 */
#include "tree.h"
#include <stdlib.h>

TreeNode * Tree_delete(TreeNode * tn, int val)
{
	if (tn == NULL)
	{
		return NULL;
	}
	if (val < (tn -> value))
	{
		tn -> left = Tree_delete(tn -> left, val);
		return tn;
	}
}
