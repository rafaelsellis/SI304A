#include <stdio.h>
int GA, LOKIZEUS, ODINHORUS, LOKI, ZEUS, ODIN, HORUS = 0; /* Grupo A */
int GB, R, THOROSIRIS,  POSEIDONSETH, THOR, OSIRIS, POSEIDON, SETH = 0;  /* Grupo B */

int main () {
    char V;
    void Selecao_A(void);
    void Selecao_B(void);

    printf("\n\nOI! SEJA BEM-VINDO AO NOSSO QUIZ DE MITOLOGIA! \nRESPONDA O TESTE AGORA E DESCUBRA QUAL HEROI DA MITOLOGIA EH VOCE!!!\n\n");
    printf("PARA CADA PERGUNTA, RESPONDA APENAS SIM OU NAO. \nPara inicar o QUIZ, aperte ENTER. \n");
    V = getchar();
    fflush(stdin);

    printf("\nVOCE EH MAIS UM IMPROVISADOR NATURAL DO QUE UM PLANEJADOR ORGANIZADO? \n(1)SIM. | (2)NAO.\n");
    scanf("%d", &R);
        switch (R) {
        	case 1: {
                	GA=GA+2;
                    R = 0; }
                    break;
        	case 2:
                	{
                	GB=GB+2;
                    R = 0; }
                    break;     }
        fflush(stdin);

    printf("\nAS SUAS VIAGENS SAO SEMPRE BEM PLANEJADAS? \n(1)SIM. | (2)NAO.\n");
    scanf("%d", &R);
        switch (R) {
        	case 1: {
                	GA=GA+2;
                    R = 0; }
                    break;
        	case 2:
                	{
                	GB=GB+2;
                    R = 0; }
                    break;     }
        fflush(stdin);


    printf("\nQUANDO SE TRATA DE UM TRABALHO EM GRUPO, SER EFICIENTE E MAIS IMPORTANTE DO QUE SER COLABORATIVO? \n(1)SIM. | (2)NAO.\n");
    scanf("%d", &R);
        switch (R) {
        	case 1: {
                	GA=GA+2;
                    R = 0; }
                    break;
        	case 2:
                	{
                	GB=GB+2;
                    R = 0; }
                    break;     }
        fflush(stdin);


    printf("\nFICAR DE BOA EM CASA PARA CURTIR SEU SERIADO OU VIDEO GAME FAVORITO, EH MAIS INTERESSANTE DO QUE UM EVENTO SOCIAL? \n(1)SIM. | (2)NAO.\n");
    scanf("%d", &R);
        switch (R) {
        	case 1: {
                	GA=GA+4;
                    R = 0; }
                    break;
        	case 2:
                	{
                	GB=GB+4;
                    R = 0; }
                    break;     }
        fflush(stdin);


    if  (GA > GB)
        Selecao_A();
    else
        Selecao_B();

    return (0);
}

void Selecao_A(void) {
    printf("\nVOCE SE SAI MELHOR TRABALHANDO SOZINHO DO QUE TRABALHANDO EM EQUIPE? \n(1)SIM. | (2)NAO.\n");
    scanf("%d", &R);
        switch (R) {
        	case 1: {
                	LOKIZEUS=1;
                    R = 0; }
                    break;
        	case 2:
                	{
                	ODINHORUS=1;
                    R = 0; }
                    break;         }
    fflush(stdin);


    if (LOKIZEUS==1){
    printf("VOCE PREFERE IMPROVISAR DO QUE GASTAR TEMPO CRIANDO UM PLANO DETALHADO? \n(1)SIM. | (2)NAO.\n");
    scanf("%d", &R);
        switch (R) {
        	case 1: {
                	printf ("\n\n******************************\n       VOCE EH ZEUS!!!\n\n******************************\n\n");
                    R = 0; }
                    break;
        	case 2:
                	{
                	printf ("\n\n******************************\n       VOCE EH LOKI!!!\n\n******************************\n\n");
                    R = 0; }
                    break;         }
    fflush(stdin);  }


    if (ODINHORUS==1){
    printf("\nVOCE ACHA QUE UMA DECISAO LOGICA EH SEMPRE O MELHOR, MESMO MAGOANDO ALGUMAS PESSOAS? \n(1)SIM. | (2)NAO.\n");
    scanf("%d", &R);
        switch (R) {
        	case 1: {
                	printf ("\n\n******************************\n       VOCE EH ODIN!!!\n\n******************************\n\n");
                    R = 0; }
                    break;
        	case 2:
                	{
                	printf ("\n\n******************************\n       VOCE EH HORUS!!!\n\n******************************\n\n");
                    R = 0; }
                    break;         }
    fflush(stdin);  }
}


void Selecao_B(void) {
    printf("\nEH FACIL DEIXAR VOCE IRRITADO?\n(1)SIM. | (2)NAO.\n");
    scanf("%d", &R);
        switch (R) {
        	case 1: {
                	POSEIDONSETH = 1;
                    R = 0; }
                    break;
        	case 2:
                	{
                	THOROSIRIS = 1;
                    R = 0; }
                    break;         }
    fflush(stdin);


    printf("VOCE TEM FACILIDADE EM SE APRESENTAR PARA AS PESSOAS?\n(1)SIM. | (2)NAO.\n");
    scanf("%d", &R);
        switch (R) {
        	case 1: {
                	if (POSEIDONSETH == 1)
                    printf ("\n\n******************************\n       VOCE EH SETH!!!\n\n******************************\n\n");
                    if (THOROSIRIS == 1)
                    printf ("\n\n******************************\n       VOCE EH THOR!!!\n\n******************************\n\n");            }
                    break;
        	case 2:
                	{
                	if (POSEIDONSETH == 1)
                    printf ("\n\n******************************\n       VOCE EH POSEIDON!!!\n\n******************************\n\n");
                    if (THOROSIRIS == 1)
                    printf ("\n\n******************************\n       VOCE EH OSIRIS!!!\n\n******************************\n\n");          }
                    break;         }
    fflush(stdin);
}

