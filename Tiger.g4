grammar Tiger;


/*
 * Lexer Rules
 */

 program
    : MAIN
    ;

 NEWLINE
    : [\r\n]+
    ;

 MAIN
    : 'main'
    ;

 ARRAY
    : 'array'
    ;

 RETURN
    : 'return'
    ;

 BREAK
    : 'break'
    ;

 DO
    : 'do'
    ;

 ELSE
    : 'else'
    ;

 END
    : 'end'
    ;

 FOR
    : 'for'
    ;

 FUNCTION
    : 'function'
    ;

 IF
    : 'if'
    ;

 IN
    : 'in'
    ;

 LET
    : 'let'
    ;

 OF
    : 'of'
    ;

 THEN
    : 'then'
    ;

 TO
    : 'to'
    ;

 TYPE
    : 'type'
    ;

 VAR
    : 'var'
    ;

 WHILE
    : 'while'
    ;

 ENDIF
    : 'endif'
    ;

 BEGIN
    : 'begin'
    ;

 ENDDO
    : 'enddo'
    ;

 INT
    : 'int'
    ;

 FLOAT
    : 'float'
    ;

RESERVED
    :
    ( MAIN
    | ARRAY
    | RETURN
    | BREAK
    | DO
    | ELSE
    | END
    | FOR
    | FUNCTION
    | IF
    | IN
    | LET
    | OF
    | THEN
    | TO
    | TYPE
    | VAR
    | WHILE
    | ENDIF
    | BEGIN
    | ENDDO
    | INT
    | FLOAT )
    ;

 COMMA
    : ','
    ;

 COLON
    : ':'
    ;

 SEMICOLON
    : ';'
    ;

 LPAREN
    : '('
    ;

 RPAREN
    : ')'
    ;

 LBRACKET
    : '['
    ;

 RBRACKET
    : ']'
    ;

 LSQUIGGLE
    : '{'
    ;

 RSQUIGGLE
    : '}'
    ;

 PERIOD
    : '.'
    ;

 PLUS
    : '+'
    ;

 MINUS
    : '-'
    ;

 ASTERISK
    : '*'
    ;

 DIV
    : '/'
    ;

 EQ
    : '='
    ;

 NOT
    : '!'
    ;

 LTHAN
    : '<'
    ;

 GTHAN
    : '>'
    ;

 AMP
    : '&'
    ;

 PIPE
    : '|'
    ;
