

typedef struct Contato {
    char nome[30];
    char telefone[10];
} Contato;

void preencherContato(Contato *c, char nome [], char tel []){
    strcpy(c->nome, nome);
    strcpy(c->telefone, tel);
}

void imprimirContato(Contato *c){
    printf("Nome: %s\n", c->nome);
    printf("Telefone: %s\n", c->telefone);
}

int main (){
    Contato* c;
    char nome [] = "Raissa";
    char tel [] = "123456789";

    c = (Contato*) malloc(sizeof(Contato));
    preencherContato(c, "Raissa", "123456789");
    imprimirContato(c);
    free(c);
    return 0;
}