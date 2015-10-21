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

#include "dynlib_statisticsfunctions.h"
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif

/*
** \brief Sum of a scalar element, just returns it
*/
#define		smins(in)			in
#define		srowmins(in)			in
#define		scolumnmins(in)		in
#define		smatlabmins(in)			in

/*
** \brief Sum of a scalar element, just returns it
*/
#define		dmins(in)			in
#define		drowmins(in)			in
#define		dcolumnmins(in)		in
#define		dmatlabmins(in)			in

/*
** \brief Sum of a float array
** \param in the float array to process
** \param size, the size of the array
** \returns the min.
*/
EXTERN_STATFUNC float		smina(float *in, int size);
EXTERN_STATFUNC void		srowmina(float *in, int lines, int columns, float* out);
EXTERN_STATFUNC void		scolumnmina(float *in, int lines, int columns, float* out);

/*
** \brief Sum of a double array
** \param in the double array to process
** \param size, the size of the array
** \returns the min.
*/
EXTERN_STATFUNC double		dmina(double *in, int size);
EXTERN_STATFUNC void		drowmina(double *in, int lines, int columns, double* out);
EXTERN_STATFUNC void		dcolumnmina(double *in, int lines, int columns, double* out);

/*
** \brief Sum of a uint8 array
** \param in the uint8 array to process
** \param size, the size of the array
** \returns the min.
*/
EXTERN_STATFUNC uint8		u8mina(uint8 *in, int size);
EXTERN_STATFUNC void		u8rowmina(uint8 *in, int lines, int columns, uint8* out);
EXTERN_STATFUNC void		u8columnmina(uint8 *in, int lines, int columns, uint8* out);

/*
** \brief Sum of a uint16 array
** \param in the uint16 array to process
** \param size, the size of the array
** \returns the min.
*/
EXTERN_STATFUNC uint16		u16mina(uint16 *in, int size);
EXTERN_STATFUNC void		u16rowmina(uint16 *in, int lines, int columns, uint16* out);
EXTERN_STATFUNC void		u16columnmina(uint16 *in, int lines, int columns, uint16* out);

/*
** \brief Sum of a int8 array
** \param in the int8 array to process
** \param size, the size of the array
** \returns the min.
*/
EXTERN_STATFUNC int8		i8mina(int8 *in, int size);
EXTERN_STATFUNC void		i8rowmina(int8 *in, int lines, int columns, int8* out);
EXTERN_STATFUNC void		i8columnmina(int8 *in, int lines, int columns, int8* out);

/*
** \brief Sum of a int16 array
** \param in the int16 array to process
** \param size, the size of the array
** \returns the min.
*/
EXTERN_STATFUNC int16		i16mina(int16 *in, int size);
EXTERN_STATFUNC void		i16rowmina(int16 *in, int lines, int columns, int16* out);
EXTERN_STATFUNC void		i16columnmina(int16 *in, int lines, int columns, int16* out);


#ifdef  __cplusplus
} /* extern "C" */
#endif


#endif /* !__STAT_MIN_H__ */
