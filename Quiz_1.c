#include <stdio.h>
int GA, LOKIZEUS, ODINHORUS, LOKI, ZEUS, ODIN, HORUS = 0; /* Grupo A */
int GB, R, THOROSIRIS,  POSEIDONSETH, THOR, OSIRIS, POSEIDON, SETH = 0;  /* Grupo B */

int main () {
    char V;
    void Selecao_A(void);
    void Selecao_B(void);

    printf("\n\n\nOI! SEJA BEM-VINDO AO NOSSO QUIZ DE MITOLOGIA! RESPONDA O TESTE AGORA E DESCUBRA QUAL HEROI DA MITOLOGIA EH VOCE!!!\n\n");
    printf("PARA CADA PERGUNTA RESPONDA APENAS SIM OU NAO. Para inicar o QUIZ, aperte ENTER. \n");
    V = getchar();
    fflush(stdin);

    printf("Voce eh mais um improvisador natural do que um planejador organizado? \n(1)SIM. | (2)NAO.\n");
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

    printf("As suas viagens sao sempre bem planejadas? \n(1)SIM. | (2)NAO.\n");
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


    printf("Quando se trata de um trabalho em grupo, ser eficiente e mais importante do que ser colaborativo? \n(1)SIM. | (2)NAO.\n");
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


    printf("Ficar de boa em casa para curtir seu seriado ou video game favorito, eh mais interessante do que um evento social com a galera? \n(1)SIM. | (2)NAO.\n");
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

            // printf("GA= %i GB=%i", GA, GB);

    if  (GA > GB)
        Selecao_A();
    else
        Selecao_B();

    return (0);
}

void Selecao_A(void) {
    printf("Voce se sai melhor trabalhando sozinho do que trabalhando em equipe? \n(1)SIM. | (2)NAO.\n");
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
    printf("Voce prefere improvisar do que gastar tempo criando um plano detalhado? \n(1)SIM. | (2)NAO.\n");
    scanf("%d", &R);
        switch (R) {
        	case 1: {
                	printf ("VOCE EH ZEUS!!!/n/n");
                    R = 0; }
                    break;
        	case 2:
                	{
                	printf ("VOCE EH LOKI!!!/n/n");
                    R = 0; }
                    break;         }
    fflush(stdin);  }


    if (ODINHORUS==1){
    printf("Voce acha que uma decisao logica eh sempre o melhor, mesmo magoando algumas pessoas? \n(1)SIM. | (2)NAO.\n");
    scanf("%d", &R);
        switch (R) {
        	case 1: {
                	printf ("VOCE EH ODIN!!!/n/n");
                    R = 0; }
                    break;
        	case 2:
                	{
                	printf ("VOCE EH HORUS!!!/n/n");
                    R = 0; }
                    break;         }
    fflush(stdin);  }
}


void Selecao_B(void) {
    printf("Eh facil deixar voce irritado? \n(1)SIM. | (2)NAO.\n");
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


    printf("Voce tem facilidade em se apresentar para as pessoas? \n(1)SIM. | (2)NAO.\n");
    scanf("%d", &R);
        switch (R) {
        	case 1: {
                	if (POSEIDONSETH == 1)
                    printf ("VOCE EH SETH!!!/n/n");
                    if (THOROSIRIS == 1)
                    printf ("VOCE EH THOR!!!/n/n");            }
                    break;
        	case 2:
                	{
                	if (POSEIDONSETH == 1)
                    printf ("VOCE EH POSEIDON!!!/n/n");
                    if (THOROSIRIS == 1)
                    printf ("VOCE EH OSIRIS!!!/n/n");          }
                    break;         }
    fflush(stdin);
}

