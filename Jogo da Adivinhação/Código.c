#include <stdio.h>
#include <locale.h>

int opcao1;
int opcao2;
int opcao3;
int pergunta2;
int pergunta3;
int pergunta4;
int pergunta5;
int jogarnovamente;
int viuvanegra;
int homemdeferro;
int gaviaoarqueiro;
int hulk;
int capitaoamerica;
int thor;


void TelaInicial (){
	
    printf("       __/\\\\__\n");
    printf("      / _  _ \\\n");
    printf("      )(_)(_) \n");
    printf("     {  0  0  }          ");
	printf("Ol� eu sou um mago! Eu vou adivinhar seus pensamentos!\n");
    printf("      `-\\\"\\\"-'\n");
    printf("       ,-'--'.\n");
    printf("     _/  * *  \\_\n");
    printf("    /      *     \\\n");
    printf("   /    *     *   \\\n");
    printf("  /  *   *   *     \\\n");
    printf(" /______*____*______\\\n");
    printf(" \\__________*_______/\n");
    printf("\n\n");
    printf("1- Ol� Mago!\n");
    printf("2- Oi Mago!\n");
    printf("Digite uma op��o:\n");
    scanf("%d", &opcao1);
	system("cls");
	TelaVingadores ();
}

void TelaVingadores(){
	
    printf("       __/\\\\__\n");
    printf("      / _  _ \\\n");
    printf("      )(_)(_) \n");
    printf("     {  0  0  } ");
	printf("Pense em um dos vingadores! (Homem de ferro, Hulk, Vi�va negra, Capit�o America, Thor, Gavi�o arqueiro)\n");
    printf("      `-\\\"\\\"-'\n");
    printf("       ,-'--'.\n");
    printf("     _/  * *  \\_\n");
    printf("    /      *     \\\n");
    printf("   /    *     *   \\\n");
    printf("  /  *   *   *     \\\n");
    printf(" /______*____*______\\\n");
    printf(" \\__________*_______/\n");
    printf("\n\n");
    printf("1- Pronto, pensei!\n");
    printf("2- Pensei! Voc� nunca vai adivinhar...\n");
    printf("Digite uma op��o:\n");
    scanf("%d", &opcao2);
	system("cls");
	TelaPeguntaum();
}

void TelaPeguntaum(){
	
    printf("       __/\\\\__\n");
    printf("      / _  _ \\\n");
    printf("      )(_)(_) \n");
    printf("     {  0  0  }          ");
	printf("Seu vingador � homem ou mulher?\n");
    printf("      `-\\\"\\\"-'\n");
    printf("       ,-'--'.\n");
    printf("     _/  * *  \\_\n");
    printf("    /      *     \\\n");
    printf("   /    *     *   \\\n");
    printf("  /  *   *   *     \\\n");
    printf(" /______*____*______\\\n");
    printf(" \\__________*_______/\n");
    printf("\n\n");
    printf("1- � homem\n");
    printf("2- � mulher\n");
    printf("Digite uma op��o:\n");
    scanf("%d", &opcao3);
    
    	switch(opcao3)
		{
		case 1:
			system("cls");
			TelaPeguntadois();
			break;
		case 2:
			system("cls");
			ViuvaNegra0();
			break;
		default:
			printf("Insira uma op��o correta!");
			break;
		}
}

void TelaPeguntadois(){
	
    printf("       __/\\\\__\n");
    printf("      / _  _ \\\n");
    printf("      )(_)(_) \n");
    printf("     {  0  0  }          ");
	printf("Seu vingador possui for�a f�sica fora do comum?\n");
    printf("      `-\\\"\\\"-'\n");
    printf("       ,-'--'.\n");
    printf("     _/  * *  \\_\n");
    printf("    /      *     \\\n");
    printf("   /    *     *   \\\n");
    printf("  /  *   *   *     \\\n");
    printf(" /______*____*______\\\n");
    printf(" \\__________*_______/\n");
    printf("\n\n");
    printf("1- Sim, ele � beem forte!\n");
    printf("2- � forte, mas n�o � fora do comum.\n");
    printf("Digite uma op��o:\n");
    scanf("%d", &pergunta2);
    	switch(pergunta2){
			case 1:
				system("cls");
				TelaPerguntaquatro();
				break;
			case 2:
				system("cls");
				TelaPerguntatres();
				break;
			default:
				break;
		}
}

void TelaPerguntatres(){
    printf("       __/\\\\__\n");
    printf("      / _  _ \\\n");
    printf("      )(_)(_) \n");
    printf("     {  0  0  }          ");
	printf("Seu vingador � conhecido pelo dinheiro?\n");
    printf("      `-\\\"\\\"-'\n");
    printf("       ,-'--'.\n");
    printf("     _/  * *  \\_\n");
    printf("    /      *     \\\n");
    printf("   /    *     *   \\\n");
    printf("  /  *   *   *     \\\n");
    printf(" /______*____*______\\\n");
    printf(" \\__________*_______/\n");
    printf("\n\n");
    printf("1- Sim, ele tem bastante dinheiro!\n");
    printf("2- N�o, dinheiro n�o � o seu forte.\n");
    printf("Digite uma op��o:\n");
    scanf("%d", &pergunta3);
    	switch(pergunta3){
			case 1:
				system("cls");
				HomemDeFerro0();
				break;
			case 2:
				system("cls");
				GaviaoArqueiro0();
				break;
			default:
				printf("Insira uma op��o v�lida!");
				break;
		}
}

void TelaPerguntaquatro(){
    printf("       __/\\\\__\n");
    printf("      / _  _ \\\n");
    printf("      )(_)(_) \n");
    printf("     {  0  0  }          ");
	printf("Seu vingador luta usando alguma arma?\n");
    printf("      `-\\\"\\\"-'\n");
    printf("       ,-'--'.\n");
    printf("     _/  * *  \\_\n");
    printf("    /      *     \\\n");
    printf("   /    *     *   \\\n");
    printf("  /  *   *   *     \\\n");
    printf(" /______*____*______\\\n");
    printf(" \\__________*_______/\n");
    printf("\n\n");
    printf("1- Sim, ele luta usando uma 'arma'...\n");
    printf("2- N�o, ele n�o segura nenhuma arma.\n");
    printf("Digite uma op��o:\n");
    scanf("%d", &pergunta4);
    	switch(pergunta4){
			case 1:
				system("cls");
				TelaPerguntacinco();
				break;
			case 2:
				system("cls");
				Hulk0();
				break;
			default:
				printf("Insira uma op��o v�lida!");
				break;
		}	
}

void TelaPerguntacinco(){
    printf("       __/\\\\__\n");
    printf("      / _  _ \\\n");
    printf("      )(_)(_) \n");
    printf("     {  0  0  }          ");
	printf("Seu personagem possui poderes desde o nascimento?\n");
    printf("      `-\\\"\\\"-'\n");
    printf("       ,-'--'.\n");
    printf("     _/  * *  \\_\n");
    printf("    /      *     \\\n");
    printf("   /    *     *   \\\n");
    printf("  /  *   *   *     \\\n");
    printf(" /______*____*______\\\n");
    printf(" \\__________*_______/\n");
    printf("\n\n");
    printf("1- Sim, seus poderes foram herdados!\n");
    printf("2- N�o, ele nasceu sem poder algum.\n");
    printf("Digite uma op��o:\n");
    scanf("%d", &pergunta5);
    	switch(pergunta5){
			case 1:
				system("cls");
				Thor0();
				break;
			case 2:
				system("cls");
				CapitaoAmerica0();
				break;
			default:
				printf("Insira uma op��o v�lida!");
				break;
		}	
}

void ViuvaNegra0(){
	
    printf("       __/\\\\__\n");
    printf("      / _  _ \\\n");
    printf("      )(_)(_) \n");
    printf("     {  0  0  }          ");
	printf("Seu vingador tem o nome de uma aranha?\n");
    printf("      `-\\\"\\\"-'\n");
    printf("       ,-'--'.\n");
    printf("     _/  * *  \\_\n");
    printf("    /      *     \\\n");
    printf("   /    *     *   \\\n");
    printf("  /  *   *   *     \\\n");
    printf(" /______*____*______\\\n");
    printf(" \\__________*_______/\n");
    printf("\n\n");
    printf("1- Sim tem!\n");
    printf("2- Voc� acertou...\n");
    printf("Digite uma op��o:\n");
    scanf("%d", &viuvanegra);
    system("cls");
    ViuvaNegra();
}

void HomemDeFerro0(){
		
    printf("       __/\\\\__\n");
    printf("      / _  _ \\\n");
    printf("      )(_)(_) \n");
    printf("     {  0  0  }          ");
	printf("Seu vingador � um g�nio, bilionario, playboy, filantropo?\n");
    printf("      `-\\\"\\\"-'\n");
    printf("       ,-'--'.\n");
    printf("     _/  * *  \\_\n");
    printf("    /      *     \\\n");
    printf("   /    *     *   \\\n");
    printf("  /  *   *   *     \\\n");
    printf(" /______*____*______\\\n");
    printf(" \\__________*_______/\n");
    printf("\n\n");
    printf("1- Sim!\n");
    printf("2- Voc� acertou...\n");
    printf("Digite uma op��o:\n");
    scanf("%d", &homemdeferro);
    system("cls");
    HomemDeFerro();
}

void GaviaoArqueiro0(){
    printf("       __/\\\\__\n");
    printf("      / _  _ \\\n");
    printf("      )(_)(_) \n");
    printf("     {  0  0  }          ");
	printf("Seu vingador luta usando um arco e flecha?\n");
    printf("      `-\\\"\\\"-'\n");
    printf("       ,-'--'.\n");
    printf("     _/  * *  \\_\n");
    printf("    /      *     \\\n");
    printf("   /    *     *   \\\n");
    printf("  /  *   *   *     \\\n");
    printf(" /______*____*______\\\n");
    printf(" \\__________*_______/\n");
    printf("\n\n");
    printf("1- Sim!\n");
    printf("2- Voc� acertou...\n");
    printf("Digite uma op��o:\n");
    scanf("%d", &gaviaoarqueiro);
    system("cls");
    GaviaoArqueiro();
}

void Hulk0(){
    printf("       __/\\\\__\n");
    printf("      / _  _ \\\n");
    printf("      )(_)(_) \n");
    printf("     {  0  0  }          ");
	printf("Seu vingador fica verde quando est� com raiva?\n");
    printf("      `-\\\"\\\"-'\n");
    printf("       ,-'--'.\n");
    printf("     _/  * *  \\_\n");
    printf("    /      *     \\\n");
    printf("   /    *     *   \\\n");
    printf("  /  *   *   *     \\\n");
    printf(" /______*____*______\\\n");
    printf(" \\__________*_______/\n");
    printf("\n\n");
    printf("1- Sim!\n");
    printf("2- Voc� acertou...\n");
    printf("Digite uma op��o:\n");
    scanf("%d", &hulk);
    system("cls");
    Hulk();
}

void CapitaoAmerica0(){
    printf("       __/\\\\__\n");
    printf("      / _  _ \\\n");
    printf("      )(_)(_) \n");
    printf("     {  0  0  }          ");
	printf("Seu vingador veste as  cores da bandeira americana?\n");
    printf("      `-\\\"\\\"-'\n");
    printf("       ,-'--'.\n");
    printf("     _/  * *  \\_\n");
    printf("    /      *     \\\n");
    printf("   /    *     *   \\\n");
    printf("  /  *   *   *     \\\n");
    printf(" /______*____*______\\\n");
    printf(" \\__________*_______/\n");
    printf("\n\n");
    printf("1- Sim!\n");
    printf("2- Voc� acertou...\n");
    printf("Digite uma op��o:\n");
    scanf("%d", &capitaoamerica);
    system("cls");
    CapitaoAmerica();
}

void Thor0(){
    printf("       __/\\\\__\n");
    printf("      / _  _ \\\n");
    printf("      )(_)(_) \n");
    printf("     {  0  0  }          ");
	printf("Seu vingador � o deus do trov�o?\n");
    printf("      `-\\\"\\\"-'\n");
    printf("       ,-'--'.\n");
    printf("     _/  * *  \\_\n");
    printf("    /      *     \\\n");
    printf("   /    *     *   \\\n");
    printf("  /  *   *   *     \\\n");
    printf(" /______*____*______\\\n");
    printf(" \\__________*_______/\n");
    printf("\n\n");
    printf("1- Sim!\n");
    printf("2- Voc� acertou...\n");
    printf("Digite uma op��o:\n");
    scanf("%d", &thor);
    system("cls");
    Thor();
}

void ViuvaNegra(){
	jogarnovamente = 0;
    printf("       __/\\\\__\n");
    printf("      / _  _ \\\n");
    printf("      )(_)(_) \n");
    printf("     {  0  0  }          ");
	printf("Seu personagem � a Vi�va Negra!\n");
    printf("      `-\\\"\\\"-'\n");
    printf("       ,-'--'.\n");
    printf("     _/  * *  \\_\n");
    printf("    /      *     \\\n");
    printf("   /    *     *   \\\n");
    printf("  /  *   *   *     \\\n");
    printf(" /______*____*______\\\n");
    printf(" \\__________*_______/\n");
    printf("\n\n");
    printf("Deseja jogar novamente?\n");
    printf("1- Sim\n");
    printf("2- N�o\n");
    printf("Digite uma op��o:\n");
    scanf("%d", &jogarnovamente);
    	switch(jogarnovamente)
		{
		case 1:
			system("cls");
			TelaVingadores();
			break;
		case 2:
			break;
		default:
			printf("Insira uma op��o v�lida!");
			break;
		}
}

void HomemDeFerro(){
	jogarnovamente = 0;
    printf("       __/\\\\__\n");
    printf("      / _  _ \\\n");
    printf("      )(_)(_) \n");
    printf("     {  0  0  }          ");
	printf("Seu personagem � o Homem de Ferro!\n");
    printf("      `-\\\"\\\"-'\n");
    printf("       ,-'--'.\n");
    printf("     _/  * *  \\_\n");
    printf("    /      *     \\\n");
    printf("   /    *     *   \\\n");
    printf("  /  *   *   *     \\\n");
    printf(" /______*____*______\\\n");
    printf(" \\__________*_______/\n");
    printf("\n\n");
    printf("Deseja jogar novamente?\n");
    printf("1- Sim\n");
    printf("2- N�o\n");
    printf("Digite uma op��o:\n");
    scanf("%d", &jogarnovamente);
    	switch(jogarnovamente)
		{
		case 1:
			system("cls");
			TelaVingadores();
			break;
		case 2:
			break;
		default:
			printf("Insira uma op��o v�lida!");
			break;
		}	
}

void GaviaoArqueiro(){
    jogarnovamente = 0;
    printf("       __/\\\\__\n");
    printf("      / _  _ \\\n");
    printf("      )(_)(_) \n");
    printf("     {  0  0  }          ");
	printf("Seu personagem � o Gavi�o Arqueiro!\n");
    printf("      `-\\\"\\\"-'\n");
    printf("       ,-'--'.\n");
    printf("     _/  * *  \\_\n");
    printf("    /      *     \\\n");
    printf("   /    *     *   \\\n");
    printf("  /  *   *   *     \\\n");
    printf(" /______*____*______\\\n");
    printf(" \\__________*_______/\n");
    printf("\n\n");
    printf("Deseja jogar novamente?\n");
    printf("1- Sim\n");
    printf("2- N�o\n");
    printf("Digite uma op��o:\n");
    scanf("%d", &jogarnovamente);
    	switch(jogarnovamente)
		{
		case 1:
			system("cls");
			TelaVingadores();
			break;
		case 2:
			break;
		default:
			printf("Insira uma op��o v�lida!");
			break;
		}
}

void Hulk(){
		jogarnovamente = 0;
    printf("       __/\\\\__\n");
    printf("      / _  _ \\\n");
    printf("      )(_)(_) \n");
    printf("     {  0  0  }          ");
	printf("Seu personagem � o Hulk!\n");
    printf("      `-\\\"\\\"-'\n");
    printf("       ,-'--'.\n");
    printf("     _/  * *  \\_\n");
    printf("    /      *     \\\n");
    printf("   /    *     *   \\\n");
    printf("  /  *   *   *     \\\n");
    printf(" /______*____*______\\\n");
    printf(" \\__________*_______/\n");
    printf("\n\n");
    printf("Deseja jogar novamente?\n");
    printf("1- Sim\n");
    printf("2- N�o\n");
    printf("Digite uma op��o:\n");
    scanf("%d", &jogarnovamente);
    	switch(jogarnovamente)
		{
		case 1:
			system("cls");
			TelaVingadores();
			break;
		case 2:
			break;
		default:
			printf("Insira uma op��o v�lida!");
			break;
		}
}

void CapitaoAmerica(){
    jogarnovamente = 0;
    printf("       __/\\\\__\n");
    printf("      / _  _ \\\n");
    printf("      )(_)(_) \n");
    printf("     {  0  0  }          ");
	printf("Seu personagem � o Capit�o Am�rica!\n");
    printf("      `-\\\"\\\"-'\n");
    printf("       ,-'--'.\n");
    printf("     _/  * *  \\_\n");
    printf("    /      *     \\\n");
    printf("   /    *     *   \\\n");
    printf("  /  *   *   *     \\\n");
    printf(" /______*____*______\\\n");
    printf(" \\__________*_______/\n");
    printf("\n\n");
    printf("Deseja jogar novamente?\n");
    printf("1- Sim\n");
    printf("2- N�o\n");
    printf("Digite uma op��o:\n");
    scanf("%d", &jogarnovamente);
    	switch(jogarnovamente)
		{
		case 1:
			system("cls");
			TelaVingadores();
			break;
		case 2:
			break;
		default:
			printf("Insira uma op��o v�lida!");
			break;
		}
}

void Thor(){
    jogarnovamente = 0;
    printf("       __/\\\\__\n");
    printf("      / _  _ \\\n");
    printf("      )(_)(_) \n");
    printf("     {  0  0  }          ");
	printf("Seu personagem � o Thor!\n");
    printf("      `-\\\"\\\"-'\n");
    printf("       ,-'--'.\n");
    printf("     _/  * *  \\_\n");
    printf("    /      *     \\\n");
    printf("   /    *     *   \\\n");
    printf("  /  *   *   *     \\\n");
    printf(" /______*____*______\\\n");
    printf(" \\__________*_______/\n");
    printf("\n\n");
    printf("Deseja jogar novamente?\n");
    printf("1- Sim\n");
    printf("2- N�o\n");
    printf("Digite uma op��o:\n");
    scanf("%d", &jogarnovamente);
    	switch(jogarnovamente)
		{
		case 1:
			system("cls");
			TelaVingadores();
			break;
		case 2:
			break;
		default:
			printf("Insira uma op��o v�lida!");
			break;
		}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	TelaInicial();
	return 0;
}