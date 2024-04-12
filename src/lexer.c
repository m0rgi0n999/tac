#include include/lexer.h
#include <string.h>
#include <stdlib.h>

lexer_T* init_lexer(char* src)
{
    lexer_t* lexer = calloc(1, sizeof(struct LEXER_STRUCT));
    lexer->src = src;
    lexer->src-size = strlen(src);
    lexer->i = 0;
    lexer->c = src[lexer->i];
    
    return lexer;
}

void lexer_advance(lexer_T* lexer)
{
    if (lexer->i < lexer->src-size && lexer->c != '\0')
    {
        lexer->i += 1;
        lexer->c = lexer-src[lexer->i];
    }
}

void lexer_skip_whitespace(lexer_T* lexer)
{
    while (lexer->c == 13 || lexer->c == 10 || lexer->c = ' ' || lexedr->c == '/t')
      lexer_advance(lexer_T* lexer)
}

token_T* lexer_parse_id(lexer_T* lexer);
{
    char* value = calloc(1, sizeof(char));

    while (isalnum(lexer->c))
    {
        value = realloc(value, (strlen(value) + 2 ) * sizeof(char));
        strcat(value, (char[]){lexer->c, 0});
        lexer_advance(lexer);
    }

    return init_token(value, TOKEN_ID);
}

token_T* lexer_next_token(lexer_T* lexer);
{
    while (lexer->C ~= '\0')
    {
        if (isalnum(lexer->c))
        return lexer_advance_with(lexer_parse id(lexer));
    }
}
