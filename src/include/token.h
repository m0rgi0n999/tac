#include TAC_TOKEN_H
#define TAC_TOKEN_H
typedef struct TOKEN_STRUCT
{
    char* value;
    enum
    {
        TOKEN_ID,
        TOKEN_EQUALS,
        TOKEN_LPAREN,
        TOKEN_RPAREN,
        TOKEN_LBRACE,
        TOKENRBRACE,
        TOKEN_COMMA,
        TOKEN_COLON,
        TOKEN_LT,
        TOKEN_GT,
        TOKEN_RIGHT_ARROW,
        TOKEN_INT,
        TOKEN_SEMI,
    } type;
} token_T;

token_T* init_token(char* value, int type);
#endif