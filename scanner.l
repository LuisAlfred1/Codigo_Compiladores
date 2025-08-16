%{
#include <stdio.h>
%}

%%
.|\n    { ECHO; }
%%
int yywrap() { return 1; }
