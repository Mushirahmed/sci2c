/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __STAT_MIN_H__
#define __STAT_MIN_H__
//#ifndef __MIN_H__
//#define __MIN_H__
#include "dynlib_statisticsfunctions.h"
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define min(a,b) (a<=b?a:b)

#define mina(a,size1,b,size2,out) 	{int i;\
						for (i=0;i<size1[0]*size2[1];i++) out[i]=min(a[i],b[i]);\
                                                }

/*
** \brief Sum of a float array
** \param in the float array to process
** \param size, the size of the array
** \returns the min.
*/
EXTERN_STATFUNC float		smina(float *in, int size);

/*
** \brief Sum of a double array
** \param in the double array to process
** \param size, the size of the array
** \returns the min.
*/
EXTERN_STATFUNC double		dmina(double *in, int size);

/*
** \brief Sum of a uint8 array
** \param in the uint8 array to process
** \param size, the size of the array
** \returns the min.
*/
EXTERN_STATFUNC uint8		u8mina(uint8 *in, int size);

/*
** \brief Sum of a uint16 array
** \param in the uint16 array to process
** \param size, the size of the array
** \returns the min.
*/
EXTERN_STATFUNC uint16		u16mina(uint16 *in, int size);

/*
** \brief Sum of a int8 array
** \param in the int8 array to process
** \param size, the size of the array
** \returns the min.
*/
EXTERN_STATFUNC int8		i8mina(int8 *in, int size);


/*
** \brief Sum of a int16 array
** \param in the int16 array to process
** \param size, the size of the array
** \returns the min.
*/
EXTERN_STATFUNC int16		i16mina(int16 *in, int size);

#ifdef  __cplusplus
} /* extern "C" */
#endif
#endif /* !__STAT_MIN_H__ */
