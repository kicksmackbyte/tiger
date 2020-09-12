grammar Tiger;


/*
 * Lexer Rules
 */

 tiger_program
    : MAIN LET declaration_segment IN BEGIN stat_seq END
    ;

 declaration_segment
    : type_declaration_list var_declaration_list funct_declaration_list
    ;

 type_declaration_list
    : /* NULL */
    | type_declaration type_declaration_list
    ;

 var_declaration_list
    : /* NULL */
    | var_declaration var_declaration_list
    ;

 funct_declaration_list
    : /* NULL */
    | var_declaration var_declaration_list
    ;

 type_declaration
    : type id '|=' type SEMI
    ;

 type
    : type_id
    | ARRAY LBRACK INTLIT RBRACK OF type_id
    | id
    ;

 type_id
    : INT
    | FLOAT
    ;

 var_declaration
    : VAR id_list COLON type optional_init SEMI
    ;

 id_list
    : id
    | id COMMA id_list
    ;

 optional_init
    : /* NULL */
    | ASSIGN constant
    ;

 funct_declaration
    : FUNCTION id LPAREN param_list RPAREN ret_type BEGIN stat_seq END SEMI
    ;

 param_list
    : /* NULL */
    | param param_list_tail
    ;

 param_list_tail
    : /* NULL */
    | COMMA param param_list_tail
    ;

 ret_type
    : /* NULL */
    | COLON type
    ;

 param
    : id COLON type
    ;

 stat_seq
    : stat
    | stat stat_seq
    ;

 stat
    : lvalue l_tail ASSIGN expr SEMI
    | IF expr THEN stat_seq ENDIF SEMI
    | IF expr THEN stat_seq ELSE stat_seq ENDIF SEMI
    | WHILE expr DO stat_seq ENDDO SEMI
    | FOR id ASSIGN expr TO expr DO stat_seq ENDDO SEMI
    | opt_prefix id LPAREN expr_list RPAREN SEMI
    | BREAK SEMI
    | RETURN expr SEMI
    | LET declaration_segment IN stat_seq END
    ;

 l_tail
    : ASSIGN lvalue l_tail
    | /* NULL */
    ;

 opt_prefix
    : lvalue ASSIGN
    | /* NULL */
    ;

 expr
    : constant
    | lvalue
    | expr binary_operator expr
    | LPAREN expr RPAREN
    ;

 constant
    : INTLIT
    | FLOATLIT
    ;

 binary_operator
    :
    ( EXP
    | PLUS
    | MINUS
    | MULT
    | DIV
    | EQ
    | NEQ
    | LESSER
    | GREATER
    | LESSEREQ
    | GREATEREQ
    | AND
    | OR
    )
    ;

 expr_list
    : /* NULL */
    | expr expr_list_tail
    ;

 expr_list_tail
    : COMMA expr expr_list_tail
    | /* NULL */
    ;

 lvalue
    : id lvalue_tail
    ;

 lvalue_tail
    : LBRACK expr RBRACK
    | /* NULL */
    ;

 id
    : NON_DIGIT ( NON_DIGIT | DIGIT )*
    ;

 INTLIT
    : NON_ZERO_DIGIT DIGIT*
    ;

 FLOATLIT
    : DIGIT+ PERIOD DIGIT*
    ;

 NON_DIGIT
    : [a-zA-Z_]
    ;

 NON_ZERO_DIGIT
    : [1-9]
    ;

 DIGIT
    : [0-9]
    ;

 COMMENT
    : '/*' .*? '*/' -> skip
    ;

 WHITESPACE
    : [ \t\r\n]+ -> skip
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

 SEMI
    : ';'
    ;

 LPAREN
    : '('
    ;

 RPAREN
    : ')'
    ;

 LBRACK
    : '['
    ;

 RBRACK
    : ']'
    ;

 LBRACE
    : '{'
    ;

 RBRACE
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

 MULT
    : '*'
    ;

 EXP
    : '**'
    ;

 DIV
    : '/'
    ;

 EQ
    : '=='
    ;

 NEQ
    : '!='
    ;

 LESSER
    : '<'
    ;

 LESSEREQ
    : '<='
    ;

 GREATER
    : '>'
    ;

 GREATEREQ
    : '>='
    ;

 AND
    : '&'
    ;

 OR
    : '|'
    ;

 ASSIGN
    : ':='
    | '='
    ;
