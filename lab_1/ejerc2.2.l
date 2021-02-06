
%%
[a-zA-Z]+(_?[a-zAZ0-9])*	 { printf("%s:\tSI\n",yytext); }
					 
.+   	                       		 { printf("%s:\tNO\n",yytext); }
%%
