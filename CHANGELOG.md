# Change Log

TODAS as modificações notaveis deste projeto serão incluídas nesse documento.
Esse projeto adere a [Versionamento Semântico 2.0.0](https://semver.org/spec/v2.0.0.html).

## [v0.1.3] - 2023-07-30

### Corrigido
 - Correção na função "raise", que não apresentava valor correto ao elevar uma base qualquer a um expoente negativo. 

## [v0.1.2] - 2023-07-28

### Adicionado
 - Função "expression" para realizar uma expressão algébrica de 1º grau.

### Modificado
 - Função "main" separada em várias funções menores. Compartimentalização do código.
 - Função "raise" reajustada para 0^0 retornar NULL, não 1.

## [v0.1.1] - 2023-07-28

### Adicionado
 - Função "raise" para realizar operações de exponenciação.  

### Moficado
 - Simplificado verificação dos operadores na 2ª parte da operação, por meio da adição de variavéis auxiliares que eliminam a necessidade de IFs em excesso.

## [v0.1.0] - 2023-07-28  

### Adicionado
 - Adicionado funcionamento padrão da calculadora para expressões de primeiro grau, considerando prioridade das operações de multiplicação e divisão, sem parentêses.  