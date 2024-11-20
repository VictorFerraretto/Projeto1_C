#include "biblioteca.h"
void copiarCpfsParaCarteira(carteira* carteiras, char cpf_lista[NUM_OF_USERS][MAX_CPF_LENGTH], int num_usuarios) {
    for (int i = 0; i < num_usuarios && i < NUM_OF_USERS; i++) {
        
        strncpy(carteiras[i].cpf, cpf_lista[i], sizeof(carteiras[i].cpf) - 1);
        carteiras[i].cpf[sizeof(carteiras[i].cpf) - 1] = '\0'; 
        carteiras[i].num_moedas = 0; 
    }
}