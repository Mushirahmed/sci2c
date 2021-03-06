function outsize = FA_SZ_2(insize)
// function outsize = FA_SZ_2(insize)
// -----------------------------------------------------------------
// Returns the second element of the size array.
// 
// Input data:
// insize: size of input argument. It is an array of 2 strings. 
//          The first string specifies the number of rows.
//          The second string specifies the number of columns.
// 
// Output data:
// outsize: second element of the insize array.
//
// Status:
// 08-Dec-2007 -- Raffaele Nutricato: Author.
// 08-Dec-2007 -- Alberto Morea: Test Ok.
// -----------------------------------------------------------------

outsize = insize(2);
disp(outsize,"outsize inside FA_SZ_2.sci file  i.e insize(2) is : ");
endfunction 
