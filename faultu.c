/* This program gets successfully compiled, even through there is a mismatch in the format specifer and the variables in the list used in printf().This is because, printf() accepts variable number of arguments the mismatch above the call stll matches with the prototpe of printf() present in 'stdio.h'. At runtime, when the first printf() is executed, since there is no variable matching with the last specifier %d, a garbage 
intege gets printed. Similarly, in the second printf(), since the format specifier for j has not
been mentioned, its
value does not get printed*/