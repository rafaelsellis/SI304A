#include <stdio.h>
int GA, LOKIZEUS, ODINHORUS, LOKI, ZEUS, ODIN, HORUS = 0; /* Grupo A */
int GB, R, THOROSIRIS,  POSEIDONSETH, THOR, OSIRIS, POSEIDON, SETH = 0;  /* Grupo B */
char V;

int main () {
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
                    break;
            default:
                	{
                	printf("\nSUA RESPOSTA NAO FOI COMPUTADA. DIGITE SEMPRE '1' PARA 'SIM' OU '2' PARA 'NAO'.\n"); }
                    break;

                    }
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
                    break;

                    default:
                	{
                	printf("\nSUA RESPOSTA NAO FOI COMPUTADA. DIGITE SEMPRE '1' PARA 'SIM' OU '2' PARA 'NAO'.\n"); }
                    break;    }

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
                    break;

                    default:
                	{
                	printf("\nSUA RESPOSTA NAO FOI COMPUTADA. DIGITE SEMPRE '1' PARA 'SIM' OU '2' PARA 'NAO'.\n"); }
                    break;    }

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
                    break;

                    default:
                	{
                	printf("\n\n\nDESCULPE!\n\nAS SUAS RESPOSTAS NAO FORAM COMPUTADAS PORQUE VOCE NAO RESPONDEU CORRETAMENTE. COMECE NOVAMENTE!!! Obs.: DIGITE SEMPRE '1' PARA 'SIM' OU '2' PARA 'NAO'.\n"); }
                    break;    }


        fflush(stdin);


    if  (GA > GB)
        Selecao_A();
    if  (GA < GB)
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
                	printf ("\n\n******************************\n       VOCE EH ZEUS!!!\n\n******************************\n\nZEUS, na mitologia grega, eh o pai dos deuses e dos homens, que exercia a autoridade sobre os deuses olimpicos como um pai sobre sua familia. Zeus eh, como o rei dos deuses, muito orgulhoso e imponente, exige respeito e precedência de todos. Ele eh, por vezes, egocentrico e facilmente insultado. \nCaracteristicas: Imponente, Respeitado, Egoista.\n\n");
                    R = 0; }
                    break;
        	case 2:
                	{
                	printf ("\n\n******************************\n       VOCE EH LOKI!!!\n\n******************************\n\nLOKI eh um deus ou um gigante da mitologia nordica. Deus da trapaça e da travessura, tambem esta ligado a magia e pode assumir a forma que quiser. Eh inteligente, traicoeiro, de pouca confianca. Eh filho de Odin e irmao de Thor. \nCaracteristicas: Inteligente, Astuto e Manipulador.\n\n");
                    R = 0; }
                    break;         }
    fflush(stdin);  }


    if (ODINHORUS==1){
    printf("\nVOCE ACHA QUE UMA DECISAO LOGICA EH SEMPRE O MELHOR, MESMO MAGOANDO ALGUMAS PESSOAS? \n(1)SIM. | (2)NAO.\n");
    scanf("%d", &R);
        switch (R) {
        	case 1: {
                	printf ("\n\n******************************\n       VOCE EH ODIN!!!\n\n******************************\n\nODIN eh considerado o deus mais importante da mitologia nordica. Tambem eh conhecido como 'Pai de Todos' e 'O enviado do Senhor da Guerra'. Eh o deus da sabedoria, da guerra e da morte, embora tambem, em menor escala, da magia, da poesia e da profecia. \nCaracteristicas: Sabio, Lider, Inflexivel.\n\n");
                    R = 0; }
                    break;
        	case 2:
                	{
                	printf ("\n\n******************************\n       VOCE EH HORUS!!!\n\n******************************\n\nHORUS na mitologia egipcia, eh o deus dos ceus. Era filho de Osiris. Tinha cabeca de falcao e os olhos representavam o Sol e a Lua. Matou Seth, tanto por vinganca pela morte do pai Osiris, como pela disputa do comando do Egito. Apos derrotar Seth, tornou-se o rei dos vivos no Egito. \nCaracteristicas: Justo, Altruista, Autoconfiante.\n");
                    R = 0; }
                    break;         }
    fflush(stdin);  }
    V = getchar();
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
                    printf ("\n\n******************************\n       VOCE EH SETH!!!\n\n******************************\n\nSETH eh o deus egipcio da violencia, do ciume, do deserto, da guerra, da escuridao, das tempestades, dos animais e serpentes. Seth fazia de tudo para conseguir o controle dos deuses e ficar no lugar de seu irmao Osíris. Ele originalmente auxiliava Ra em sua eterna luta contra a serpente Apofis no barco solar. \nCaracteristicas: Guerreiro, Independente, Explosivo.\n\n");
                    if (THOROSIRIS == 1)
                    printf ("\n\n******************************\n       VOCE EH THOR!!!\n\n******************************\n\nTHOR eh o deus nordico dos trovoes e das lutas. E filho de Odin e irmao de Loki. Thor usa como arma o martelo Mjolnir, e tem o cinto Megingjord, que lhe confere enormes forcas. Esta associado aos trovoes, relampagos, tempestades, forca e protecao da humanidade. \nCaracteristicas: Sociavel, Simples, Impaciente.\n\n");            }
                    break;
        	case 2:
                	{
                	if (POSEIDONSETH == 1)
                    printf ("\n\n******************************\n       VOCE EH POSEIDON!!!\n\n******************************\n\nPOSEIDON eh o deus grego da destruicao, terremotos, furacoes, cavalos, oceanos, mares e tempestades. Ele eh filho dos Titas Cronos e Reia, bem como um dos tres grandes. Fazia brotar fontes de agua da terra com seu tridente, mas quando ficava furioso provocava terremotos e tsunamis. \nCaracteristicas: Aventureiro, Corajoso, Explosivo.\n\n");
                    if (THOROSIRIS == 1)
                    printf ("\n\n******************************\n       VOCE EH OSIRIS!!!\n\n******************************\n\nOSIRIS era um deus da mitologia egipcia, associado a vegetacao e a vida no Alem. Foi o deus que trouxe a civilizacao para o Egito e um dos deuses mais populares do Antigo Egito. Marido de Isis e pai de Horus, era ele quem julgava os mortos na 'Sala das Duas Verdades', onde se procedia a pesagem do coracaoo. \nCaracteristicas: Calmo, Correto, Introvertido.\n\n");          }
                    break;         }
    fflush(stdin);
    V = getchar();
}

