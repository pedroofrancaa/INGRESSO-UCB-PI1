#include <stdio.h>

int main(){
    int pagina, meus_eventos, ver_info, rep_eve = 1, eve_pag, lim_pes, op_pag, loop_eve = 1, codigo_evento = 123456, cont_codigo = 1, codigo_c;
    float valor_cobrado, valor_contri;
    char localizacao[50], data[11], nome_evento[50], data_limite[11];   
    

    while(rep_eve == 1){
        if(loop_eve == 1){
            printf("\n\n_-_-_-_-_- Pagina Inicial -_-_-_-_-_\n\n");
            printf("[1] Meus Eventos\n");
            printf("[2] Cadastar Evento\n");
            printf("[3] Entrar em um evento\n\n");
            printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n\n");
            printf("Opcao desejada: ");
            scanf(" %d", &pagina);

            switch(pagina){
                    case 1:
                        printf("\n\n_-_-_-_- Meus Eventos -_-_-_-_\n\n");
                        printf("[1] Churrasco\n");
                        printf("Data: 30/10/2022\n"); 
                        printf("Status: Em andamento\n\n");

                        printf("[2] Cinema Joao\n");
                        printf("Data: 11/10/2022\n"); 
                        printf("Status: Encerrado\n\n");

                        printf("Selecionar Evento: ");
                        scanf(" %d", &ver_info);
                        
                        switch(ver_info){
                            case 1:
                                printf("\n_-_-_- Churrasco -_-_-_\n\n");
                                printf("SALDO: R$ 200,00\n\n");
                                printf("PESSOAS             TRANSACOES\n\n");
                                printf("Guilherme Levi        R$ 20,00\n");
                                printf("Pedro Franca          R$ 20,00\n");
                                printf("Wallacy William       R$ 20,00\n");
                                printf("Bruno Temote          R$ 20,00\n");
                                printf("Lucas Teles           R$ 20,00\n");
                                printf("Pedro Nunes           R$ 20,00\n\n");

                                printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n\n");
                            break;
                            
                            default:
                                printf("\nINFORMACOES AINDA NAO ADICONADAS\n\n");
                                printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n\n");
                        }
                    break;
                    

                    case 2:
                        printf("\n\n_-_-_-_- Cadastrar novo evento -_-_-_-_\n\n");
                        printf("Nome do evento: ");
                        scanf(" %[^\n]%*c", nome_evento);
                        printf("Data: ");
                        scanf(" %s", data);
                        printf("Limite de pessoas: ");
                        scanf(" %d", &lim_pes);
                            
                        printf("\nEvento Pago?[1] Sim [2] Nao: ");
                        scanf(" %d", &eve_pag);
                        if(eve_pag == 1){
                            printf("Valor cobrado: R$");
                            scanf(" %f", &valor_cobrado);
                            printf("Data limite para pagamento: ");
                            scanf(" %s", data_limite);
                        }
                        printf("Localizacao: ");
                        scanf(" %[^\n]%*c", localizacao);


                        printf("\n\n_-_-_-_- Evento Criado -_-_-_-_\n\n");
                        printf("%s\n", nome_evento);
                        printf("Data do evento: %s\n", data);
                        printf("Limite de pessoas: %d\n", lim_pes);
                        printf("Valor individual cobrado: %.2f\n", valor_cobrado);
                        printf("Data limite para pagamento: %s\n", data_limite);
                        printf("Localizacao: %s\n", localizacao);
                        printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_");
                    break;

                    case 3:
                        printf("\n\n_-_-_-_- Entrar em um evento -_-_-_-_\n\n");
                        do{
                            if(cont_codigo == 1){
                                printf("Digite o codigo do evento: ");
                                scanf(" %d", &codigo_c);
                                cont_codigo += 1;
                            }else{
                                printf("Codigo incorreto, digite novamente: ");
                                scanf(" %d", &codigo_c);
                            }
                        }while(codigo_evento != codigo_c);
                       
                        printf("\n\n        Copa do Mundo\n\n");
                        printf("Quadra SQN 305 Bloco D - Asa Norte\nBrasilia/DF - 70737-040\n\n");
                        printf("24/11/2022\n\n");
                        printf("EBA, @guilevi te convidou para contribuir com um evento\n");
                        printf("Com qual valor deseja contribuir?\nValor mínimo: R$ 20,00\n");
                        scanf(" %f", &valor_contri);

                        

                        printf("\n\n[1] Cartao de Credito\n");
                        printf("[2] PIX\n");
                        printf("[3] Apple Pay\n");
                        printf("\nOpcao desejada: ");
                        scanf(" %d", &op_pag);
                        printf("\nPagamento realizado com sucesso!");
            }
             loop_eve += 1;
    }else{
        printf("\n\n_-_-_-_-_- Pagina Inicial -_-_-_-_-_\n\n");
        printf("[1] Meus Eventos\n");
        printf("[2] Cadastar Evento\n");
        printf("[3] Entrar em um evento\n\n");
        printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n\n");
        printf("Opcao desejada: ");
        scanf(" %d", &pagina);

        switch(pagina){
                case 1:
                    printf("\n\n_-_-_-_- Meus Eventos -_-_-_-_\n\n");
                    printf("[1] Churrasco\n");
                    printf("Data: 30/10/2022\n"); 
                    printf("Status: Em andamento\n\n");

                    printf("[2] Cinema Joao\n");
                    printf("Data: 11/10/2022\n"); 
                    printf("Status: Encerrado\n\n");

                    printf("[3] %s\n", nome_evento);
                    printf("Data: %s\n", data);
                    printf("Status: Em andamento\n\n");

                    printf("Selecionar Evento: ");
                    scanf(" %d", &ver_info);
                    
                    switch(ver_info){
                        case 1:
                            printf("\n_-_-_- Churrasco -_-_-_\n\n");
                            printf("SALDO: R$ 200,00\n\n");
                            printf("PESSOAS             TRANSACOES\n\n");
                            printf("Guilherme Levi        R$ 20,00\n");
                            printf("Pedro Franca          R$ 20,00\n");
                            printf("Wallacy William       R$ 20,00\n");
                            printf("Bruno Temote          R$ 20,00\n");
                            printf("Lucas Teles           R$ 20,00\n");
                            printf("Pedro Nunes           R$ 20,00\n\n");

                            printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n\n");
                        break;

                        case 2:
                            printf("Evento finalizado!");
                        break;

                        case 3:
                            if(eve_pag == 1){
                                printf("\n_-_-_- %s -_-_-_\n\n", nome_evento);
                                printf("Localizacao: %s\n", localizacao);
                                printf("Data: %s\n", data);
                                printf("Limite de pessoas: %d\n", lim_pes);
                                printf("Valor minimo: R$%.2f\n", valor_cobrado);
                                printf("Data limite para pagamento: %s", data_limite);
                            }else{
                                printf("\n_-_-_- %s -_-_-_\n\n", nome_evento);
                                printf("Localizacao: %s\n", localizacao);
                                printf("Data: %s\n", data);
                                printf("Limite de pessoas: %d\n", lim_pes);
                            }
                        break;

                        
                        default:
                            printf("\nINFORMACOES AINDA NAO ADICONADAS\n\n");
                            printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n\n");
                    }
                break;
                

                case 2:
                    printf("\n\n_-_-_-_- Cadastrar novo evento -_-_-_-_\n\n");
                    printf("Nome do evento: ");
                    scanf(" %[^\n]%*c", nome_evento);
                    printf("Data: ");
                    scanf(" %s", data);
                    printf("Limite de pessoas: ");
                    scanf(" %d", &lim_pes);
                        
                    printf("\nEvento Pago?[1] Sim [2] Nao: ");
                    scanf(" %d", &eve_pag);
                    if(eve_pag == 1){
                        printf("Valor cobrado: R$");
                        scanf(" %f", &valor_cobrado);
                        printf("Data limite para pagamento: ");
                        scanf(" %s", data_limite);
                    }
                    printf("Localizacao: ");
                    scanf(" %[^\n]%*c", localizacao);


                    printf("\n\n_-_-_-_- Evento Criado -_-_-_-_\n\n");
                    printf("%s\n", nome_evento);
                    printf("Data do evento: %s\n", data);
                    printf("Limite de pessoas: %d\n", lim_pes);
                    printf("Valor individual cobrado: %.2f\n", valor_cobrado);
                    printf("Data limite para pagamento: %s\n", data_limite);
                    printf("Localizacao: %s\n", localizacao);
                    printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_");
                break;

                case 3:
                    printf("\n\n_-_-_-_- Entrar em um evento -_-_-_-_\n\n");
                    
                    do{
                        if(cont_codigo == 1){
                            printf("Digite o codigo do evento: ");
                            scanf(" %d", &codigo_c);
                            cont_codigo += 1;
                        }else{
                            printf("Codigo incorreto, digite novamente: ");
                            scanf(" %d", &codigo_c);
                        }
                    }while(codigo_evento != codigo_c);
                    
                    
                    printf("\n\n        Copa do Mundo\n\n");
                    printf("Quadra SQN 305 Bloco D - Asa Norte\nBrasilia/DF - 70737-040\n\n");
                    printf("24/11/2022\n\n");
                    printf("EBA, @guilevi te convidou para contribuir com um evento\n");
                    printf("Com qual valor deseja contribuir?\nValor mínimo: R$ 20,00\n");
                    scanf(" %f", &valor_contri);

                    printf("\n\n[1] Cartao de Credito\n");
                    printf("[2] PIX\n");
                    printf("[3] Apple Pay\n");
                    printf("\nOpcao desejada: ");
                    scanf(" %d", &op_pag);
                    printf("\nPagamento realizado com sucesso!");

            }
        }
    }
    return 0;
}