/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Arnaud TORSET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

/* This is a copy/paste with adaptation from sum */

#include "prod.h"
#include "multiplication.h"

void u16rowproda(uint16 *in, int lines, int columns, uint16 * out) {
  int i = 0;

  /*
  ** First assign first row, just in case
  ** out contains non-zero's elements.
  */
  for (i = 0 ; i < columns; ++i)
    {
      out[i] = (uint16)in[i * lines];
    }
  /*
  ** Then accumulate in each column.
  */
  for (i = 1 ; i <= (lines - 1) * columns ; ++i)
    {
      out[(i - 1) % columns] = (uint16)u16muls( out[(i - 1) % columns] ,
				      in[((i - 1) % columns) * lines + 1 + (i - 1) / columns]);
    }
}
