/*
 * Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 * Copyright (C) 2008-2008 - INRIA - Bruno JOFRET
 * 
 * This file must be used under the terms of the CeCILL.
 * This source file is licensed as described in the file COPYING, which
 * you should have received as part of this distribution.  The terms
 * are also available at    
 * http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

/* THIS IS AN AUTOMATICALLY GENERATED FILE : DO NOT EDIT BY HAND. */

#ifndef __INT_STATMIN_H__
#define __INT_STATMIN_H__
//#ifndef __INT_min_H__
//#define __INT_min_H__

#define s0mins0(in)				smins(in)

#define d0mind0(in)				dmins(in)

#define c0minc0(in)				cmins(in)

#define z0minz0(in)				zmins(in)

#define u80minu80(in)				u8mins(in)

#define u160minu160(in)		                u16mins(in)

#define i80mini80(in)				i8mins(in)

#define i160mini160(in)				i16mins(in)

#define s2mins0(in,size)			smina(in, size[0]*size[1])

#define d2mind0(in,size)			dmina(in, size[0]*size[1])

#define c2minc0(in,size)			cmina(in, size[0]*size[1])

#define z2minz0(in,size)			zmina(in, size[0]*size[1])

#define u82minu80(in,size)                      u8mina(in, size[0]*size[1])

#define u162minu160(in,size)                    u16mina(in, size[0]*size[1])

#define i82mini80(in,size)                      i8mina(in, size[0]*size[1])

#define i162mini160(in,size)                    i16mina(in, size[0]*size[1])

#define s0s0mins0(in1,in2)			(in2==1) ? srowmins(in1) : scolumnmins(in1)	

#define d0d0mind0(in1,in2)			(in2==1) ? drowmins(in1) : dcolumnmins(in1)	

#define c0s0minc0(in1,in2)			(in2==1) ? crowmins(in1) : ccolumnmins(in1)	

#define z0d0minz0(in1,in2)			(in2==1) ? zrowmins(in1) : zcolumnmins(in1)

#define u80u80minu80(in1,in2)			(in2==1) ? u8rowmins(in1) : u8columnmins(in1)	

#define u160u160minu160(in1,in2)		(in2==1) ? u16rowmins(in1) : u16columnmins(in1)	

#define i80i80mini80(in1,in2)			(in2==1) ? i8rowmins(in1) : i8columnmins(in1)	

#define i160i160mini160(in1,in2)		(in2==1) ? i16rowmins(in1) : i16columnmins(in1)	

#define s2s0mins2(in1,size,in2,out)		(in2==1) ? srowmina(in1,size[0],size[1],out) : scolumnmina(in1,size[0],size[1],out)	

#define d2d0mind2(in1,size,in2,out)		(in2==1) ? drowmina(in1,size[0],size[1],out) : dcolumnmina(in1,size[0],size[1],out)

#define c2s0minc2(in1,size,in2,out)		(in2==1) ? crowmina(in1,size[0],size[1],out) : ccolumnmina(in1,size[0],size[1],out)

#define z2d0minz2(in1,size,in2,out)		(in2==1) ? zrowmina(in1,size[0],size[1],out) : zcolumnmina(in1,size[0],size[1],out)

#define s0s2mins2(in1,size,in2,out)             (in2==1) ? srowmina(in1,size[0],size[1],out) : scolumnmina(in1,size[0],size[1],out)

#define d0d2mind2(in1,size,in2,out)             (in2==1) ? drowmina(in1,size[0],size[1],out) : dcolumnmina(in1,size[0],size[1],out)

#define c0c2minc2(in1,size,in2,out)             (in2==1) ? crowmina(in1,size[0],size[1],out) : ccolumnmina(in1,size[0],size[1],out)

#define z0z2minz2(in1,size,in2,out)             (in2==1) ? zrowmina(in1,size[0],size[1],out) : zcolumnmina(in1,size[0],size[1],out)

#define s2s2mins2(in1,size1,in2,size2,out)	(in2==1) ? srowmina(in1,size1[0,size[1],out]) : scolumnmina(in1,size1[0],size1[0],out)

#define d2d2mind2(in1,size1,in2,size2,out)	(in2==1) ? drowmina(in1,size1[0,size[1],out]) : dcolumnmina(in1,size1[0],size1[0],out)

#define c2c2minc2(in1,size1,in2,size2,out)	(in2==1) ? crowmina(in1,size1[0,size[1],out]) : ccolumnmina(in1,size1[0],size1[0],out)

#define z2z2minz2(in1,size1,in2,size2,out)	(in2==1) ? zrowmina(in1,size1[0,size[1],out]) : zcolumnmina(in1,size1[0],size1[0],out)

#define u82u80minu82(in1,size,in2,out)		(in2==1) ? u8rowmina(in1,size[0],size[1],out) : u8columnmina(in1,size[0],size[1],out)

#define u80u82minu82(in1,size,in2,out)		(in2==1) ? u8rowmina(in1,size[0],size[1],out) : u8columnmina(in1,size[0],size[1],out)

#define u82u82minu82(in1,size1,in2,size2,out)	(in2==1) ? u8rowmina(in1,size1[0],size1[1],out) : u8columnmina(in1,size1[0],size1[1],out)

#define u162u160minu162(in1,size,in2,out)	(in2==1) ? u16rowmina(in1,size[0],size[1],out) : u16columnmina(in1,size[0],size[1],out)

#define u160u162minu162(in1,size,in2,out)       (in2==1) ? u16rowmina(in1,size[0],size[1],out) : u16columnmina(in1,size[0],size[1],out)

#define u162u162minu162(in1,size1,in2,size2,out) (in2==1) ? u16rowmina(in1,size1[0],size1[1],out) : u16columnmina(in1,size1[0],size1[1],out)

#define i82i80mini82(in1,size,in2,out)		(in2==1) ? i8rowmina(in1,size[0],size[1],out) : i8columnmina(in1,size[0],size[1],out)

#define i80i82mini82(in1,size,in2,out)		(in2==1) ? i8rowmina(in1,size[0],size[1],out) : i8columnmina(in1,size[0],size[1],out)

#define i82i82mini82(in1,size1,in2,size2,out)	(in2==1) ? i8rowmina(in1,size1[0],size1[1],out) : i8columnmina(in1,size1[0],size1[1],out)

#define i162i160mini162(in1,size,in2,out)	(in2==1) ? i16rowmina(in1,size[0],size[1],out) : i16columnmina(in1,size[0],size[1],out)

#define i160i162mini162(in1,size,in2,out)	(in2==1) ? i16rowmina(in1,size[0],size[1],out) : i16columnmina(in1,size[0],size[1],out)

#define i162i162mini162(in1,size1,in2,size2,out) (in2==1) ? i16rowmina(in1,size1[0],size1[1],out) : i16columnmina(in1,size1[0],size1[1],out)
	
	
/*'r'  and 'c' case  */	
#define s0g2mins0(in1,in2,size2)			(in2[0]=='r') ? srowmins(in1) : scolumnmins(in1)	

#define d0g2mind0(in1,in2,size2)			(in2[0]=='r') ? drowmins(in1) : dcolumnmins(in1)	

#define c0g2minc0(in1,in2,size2)			(in2[0]=='r') ? crowmins(in1) : ccolumnmins(in1)	

#define z0g2minz0(in1,in2,size2)			(in2[0]=='r') ? zrowmins(in1) : zcolumnmins(in1)

#define u80g2minu80(in1,in2,size2)			(in2[0]=='r') ? u8rowmins(in1) : u8columnmins(in1)

#define u160g2minu160(in1,in2,size2)			(in2[0]=='r') ? u16rowmins(in1) : u16columnmins(in1)

#define i80g2mini80(in1,in2,size2)			(in2[0]=='r') ? i8rowmins(in1) : i8columnmins(in1)

#define i160g2mini160(in1,in2,size2)			(in2[0]=='r') ? i16rowmins(in1) : i16columnmins(in1)	
	

#define s2g2mins2(in1,size,in2,size2,out)		(in2[0]=='r') ? srowmina(in1,size[0],size[1],out) : scolumnmina(in1,size[0],size[1],out)	

#define d2g2mind2(in1,size,in2,size2,out)		(in2[0]=='r') ? drowmina(in1,size[0],size[1],out) : dcolumnmina(in1,size[0],size[1],out)

#define c2g2minc2(in1,size,in2,size2,out)		(in2[0]=='r') ? crowmina(in1,size[0],size[1],out) : ccolumnmina(in1,size[0],size[1],out)

#define z2g2minz2(in1,size,in2,size2,out)		(in2[0]=='r') ? zrowmina(in1,size[0],size[1],out) : zcolumnmina(in1,size[0],size[1],out)	

#define u82g2minu82(in1,size,in2,size2,out)		(in2[0]=='r') ? u8rowmina(in1,size[0],size[1],out) : u8columnmina(in1,size[0],size[1],out)	

#define u162g2minu162(in1,size,in2,size2,out)		(in2[0]=='r') ? u16rowmina(in1,size[0],size[1],out) : u16columnmina(in1,size[0],size[1],out)
	
#define i82g2mini82(in1,size,in2,size2,out)		(in2[0]=='r') ? i8rowmina(in1,size[0],size[1],out) : i8columnmina(in1,size[0],size[1],out)	

#define i162g2mini162(in1,size,in2,size2,out)		(in2[0]=='r') ? i16rowmina(in1,size[0],size[1],out) : i16columnmina(in1,size[0],size[1],out)
	


#endif /* !__INT_STATmin_H__ */
