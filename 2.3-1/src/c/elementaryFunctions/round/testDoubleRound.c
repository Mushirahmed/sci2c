/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008 - INRIA - Arnaud TORSET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */


#include <assert.h>
#include <math.h>
#include <stdio.h>
#include "round.h"

static void droundsTest(void) {
	assert ((fabs( drounds(-2) - (-2))/fabs(drounds(-2)))<1e-16);	
	assert ((fabs( drounds(-1.9) - (-2))/fabs(drounds(-1.9)))<1e-16);		
	assert ((fabs( drounds(-1.8) - (-2))/fabs(drounds(-1.8)))<1e-16);	
	assert ((fabs( drounds(-1.7) - (-2))/fabs(drounds(-1.7)))<1e-16);	
	assert ((fabs( drounds(-1.6) - (-2))/fabs(drounds(-1.6)))<1e-16);	
	assert ((fabs( drounds(-1.5) - (-2))/fabs(drounds(-1.5)))<1e-16);	
	assert ((fabs( drounds(-1.4) - (-1))/fabs(drounds(-1.4)))<1e-16);	
	assert ((fabs( drounds(-1.3) - (-1))/fabs(drounds(-1.3)))<1e-16);	
	assert ((fabs( drounds(-1.2) - (-1))/fabs(drounds(-1.2)))<1e-16);	
	assert ((fabs( drounds(-1.1) - (-1))/fabs(drounds(-1.1)))<1e-16);	
	assert ((fabs( drounds(-1.0) - (-1))/fabs(drounds(-1.0)))<1e-16);	
	assert ((fabs( drounds(-0.9) - (-1))/fabs(drounds(-0.9)))<1e-16);	
	assert ((fabs( drounds(1.0) - (1))/fabs(drounds(1.0)))<1e-16);	
	assert ((fabs( drounds(1.1) - (1))/fabs(drounds(1.1)))<1e-16);	
	assert ((fabs( drounds(1.2) - (1))/fabs(drounds(1.2)))<1e-16);	
	assert ((fabs( drounds(1.3) - (1))/fabs(drounds(1.3)))<1e-16);	
	assert ((fabs( drounds(1.4) - (1))/fabs(drounds(1.4)))<1e-16);	
	assert ((fabs( drounds(1.5) - (2))/fabs(drounds(1.5)))<1e-16);	
	assert ((fabs( drounds(1.6) - (2))/fabs(drounds(1.6)))<1e-16);	
	assert ((fabs( drounds(1.7) - (2))/fabs(drounds(1.7)))<1e-16);	
	assert ((fabs( drounds(1.8) - (2))/fabs(drounds(1.8)))<1e-16);	
	assert ((fabs( drounds(1.9) - (2))/fabs(drounds(1.9)))<1e-16);	
	assert ((fabs( drounds(2.0) - (2))/fabs(drounds(2.0)))<1e-16);

}

static void zroundsTest(void) {
	doubleComplex in, out;
	
	
	/* tests allant de -2 + i a -1 + 2*i, les reels décroissants de 0.1, les imaginaires croissant de 0.1
	+ 1 test supplementaire : -0.9 + 0.9*i*/
	
	in=DoubleComplex(-2,1);
	out = zrounds(in);
	assert ((fabs( zreals(out) - (-2))/fabs(zreals(out)))<1e-16);	
	assert ((fabs( zimags(out) - (1))/fabs(zimags(out)))<1e-16);
	in=DoubleComplex(-1.9,1.1);
	out = zrounds(in);	
	assert ((fabs( zreals(out) - (-2))/fabs(zreals(out)))<1e-16);	
	assert ((fabs( zimags(out) - (1))/fabs(zimags(out)))<1e-16);	
	in=DoubleComplex(-1.8,1.2);
	out = zrounds(in);
	assert ((fabs( zreals(out) - (-2))/fabs(zreals(out)))<1e-16);
	assert ((fabs( zimags(out) - (1))/fabs(zimags(out)))<1e-16);
	in=DoubleComplex(-1.7,1.3);
	out = zrounds(in);		
	assert ((fabs( zreals(out) - (-2))/fabs(zreals(out)))<1e-16);	
	assert ((fabs( zimags(out) - (1))/fabs(zimags(out)))<1e-16);
	in=DoubleComplex(-1.6,1.4);
	out = zrounds(in);
	assert ((fabs( zreals(out) - (-2))/fabs(zreals(out)))<1e-16);		
	assert ((fabs( zimags(out) - (1))/fabs(zimags(out)))<1e-16);
	in=DoubleComplex(-1.5,1.5);
	out = zrounds(in);	
	assert ((fabs( zreals(out) - (-2))/fabs(zreals(out)))<1e-16);		
	assert ((fabs( zimags(out) - (2))/fabs(zimags(out)))<1e-16);
	in=DoubleComplex(-1.4,1.6);
	out = zrounds(in);	
	assert ((fabs( zreals(out) - (-1))/fabs(zreals(out)))<1e-16);	
	assert ((fabs( zimags(out) - (2))/fabs(zimags(out)))<1e-16);
	in=DoubleComplex(-1.3,1.7);
	out = zrounds(in);
	assert ((fabs( zreals(out) - (-1))/fabs(zreals(out)))<1e-16);	
	assert ((fabs( zimags(out) - (2))/fabs(zimags(out)))<1e-16);
	in=DoubleComplex(-1.2,1.8);
	out = zrounds(in);
	assert ((fabs( zreals(out) - (-1))/fabs(zreals(out)))<1e-16);	
	assert ((fabs( zimags(out) - (2))/fabs(zimags(out)))<1e-16);
	in=DoubleComplex(-1.1,1.9);
	out = zrounds(in);
	assert ((fabs( zreals(out) - (-1))/fabs(zreals(out)))<1e-16);	
	assert ((fabs( zimags(out) - (2))/fabs(zimags(out)))<1e-16);
	in=DoubleComplex(-1.0,2.0);
	out = zrounds(in);
	assert ((fabs( zreals(out) - (-1))/fabs(zreals(out)))<1e-16);	
	assert ((fabs( zimags(out) - (2))/fabs(zimags(out)))<1e-16);
	in=DoubleComplex(-.9,.9);
	out = zrounds(in);	
	assert ((fabs( zreals(out) - (-1))/fabs(zreals(out)))<1e-16);
	assert ((fabs( zimags(out) - (1))/fabs(zimags(out)))<1e-16);	

}

static void droundaTest(void) {
	int i;
	double in[10]={1.2, 2.0,-2.0,-3.1,-4.5,6.1,4.1,4.9,-0.7, 0.5};
	double res[10]={1,2,-2,-3,-5,6,4,5,-1,1};
	double out[10];
	
	drounda(in,10,out);
	
	for (i=0;i<10;i++)
		if (out[i]!=0) 		assert(fabs(out[i]-res[i])/fabs(out[i]) <1e-16);
		else	assert(fabs(out[i]-res[i]) <1e-16);

}

static void zroundaTest(void) {
	int i;
	double inR[10]={1.2, 2.0,-2.0,-3.1,-4.5,6.1,4.1,4.9,-0.7, 0.5};
	double inI[10]={5.4,1.8,1.4,-4.0,-2.7,-0.3,1.5,1.4,7.3,-4.6};
	double resR[10]={1,2,-2,-3,-5,6,4,5,-1,1};
	double resI[10]={5,2,1,-4,-3,0,2,1,7,-5};
	doubleComplex out[10],*in;
	
	in=DoubleComplexMatrix(inR,inI,10);
	zrounda(in,10,out);
	
	for (i=0;i<10;i++){
	 	if (zreals(out[i])!=0)	assert(fabs(zreals(out[i])-resR[i])/fabs(zreals(out[i])) <1e-16);
		else	assert(fabs(zreals(out[i])-resR[i]) <1e-16);
	 	if (zimags(out[i])!=0)	assert(fabs(zimags(out[i])-resI[i])/fabs(zimags(out[i])) <1e-16);
		else 	assert(fabs(zimags(out[i])-resI[i]) <1e-16);
	 }

}


static int testRound() {
  printf("\n>>>> Double Round Tests\n");
  droundsTest();
  zroundsTest();
  droundaTest();
  zroundaTest();

  return 0;
}

int main() {
  assert(testRound() == 0);
  return 0;
}
