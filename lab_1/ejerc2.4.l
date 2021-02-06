%{
  int cont_ids = 0;
  int cont_reales = 0;  
%}

%%
[Pp][Rr][Oo][Cc][Ee][Dd][Uu][Rr][Ee] ;
[Bb][Ee][Gg][Ii][Nn]                 ;
[Ee][Nn][Dd]                         ;
(\/\/.*)|(\{.*\})  ;
[a-zA-Z]+(_?[a-zAZ0-9])*            { cont_ids++; }
[0-9]+\.[0-9]+([eE][\+\-]?[0-9]+)?  { cont_reales++; }
\n    				     ;
.      				     ;
%%
main() {
  yylex() ;
  printf("El contador de ids es: %i\n", cont_ids) ;
  printf("El contador de reales es: %i\n", cont_reales) ;
}
