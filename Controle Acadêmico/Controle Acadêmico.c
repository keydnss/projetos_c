	#include <stdio.h>
	#include <stdlib.h>
	
		//Aba de structs	
 			struct ficha_aluno{
				int matricula;
				char nome[50];
				char cpf [20];
				char datanascimento [20];
				float p1;
				float p2;
				float p3;
				float p4;
				float p5;
				};
				
			struct ficha_professor{
				int matricula;
				char nome[50];
				char cpf [20];
				char datanascimento [20];};
		
			struct ficha_curso{
				int codigo;
				char nomedocurso[50];				
			};
			
			struct ficha_disciplina{
				int codigo;
				char nomedadisciplina[50];
				char curso[50];
			};
				
		//Aba de funções úteis
			void removerlinha(char *str) {
    			size_t len = strlen(str);
    				if (len > 0 && str[len - 1] == '\n') {
    				    str[len - 1] = '\0';
    					}
	  	  	  }	  		
				
		//Aba de variáveis
			int menu, menucad, menuimp;
			struct ficha_aluno aluno [10];
			struct ficha_professor professor [10];
			struct ficha_curso curso [10];
			struct ficha_disciplina disciplina[10];
			int ia;
			int ip;
			int ic;
			int id;
			FILE *pont_arq;
			FILE *pont_arq2;
			FILE *pont_arq3;
			FILE *pont_arq4;
			FILE *pont_arq5;
				
		//Menu Principal
			void MenuPrincipal (){
		do{
		printf("  +===========================+\n");
		printf("  |       MENU ACADEMICO      |\n");
		printf("  +===========================+\n");
		printf("  | 1- CADASTRO | 2- IMPRESSAO|\n");
		printf("  ----------------------------+\n");
		printf("  |          3- SAIR          |\n");
		printf("  +===========================+\n\n");
		printf("Informe a operacao ou digite 3 para sair\n");
		scanf("%d", &menu);
		switch(menu){
			case 1:
				system("cls");
				MenuCadastro ();
				break;
			case 2:
				system("cls");
				MenuImpressao ();
				break;
			default:
				system("cls");
				printf("Opcao Invalida\n");
				MenuPrincipal();
				break;
			case 3:
				system("cls");
				break;
				
		}
		
		}while(menu!=3);
		
	}
		
		//Menu de Cadastro
			void MenuCadastro (){
		do{
		printf("  +================================+\n");
		printf("  |         MENU DE CADASTRO       |\n");
		printf("  +================================+\n");
		printf("  | 1- ALUNOS      | 4- DISCIPLINAS|\n");
		printf("  ---------------------------------+\n");
		printf("  | 2- CURSOS      | 5- NOTAS      |\n");
		printf("  ---------------------------------+\n");
		printf("  | 3- PROFESSORES | 6- VOLTAR     |\n");
		printf("  +================================+\n\n");
		printf("Informe a operacao ou digite 6 para voltar\n");
		scanf("%d",&menucad);
		switch(menucad)
		{
		case 1:
			system("cls");
			CadastroAluno ();
			break;
		case 2:
			system("cls");
			CadastroCurso ();
			break;
		case 3:
			system("cls");
			CadastroProfessor ();
			break;
		case 4:
			system("cls");
			CadastroDisciplinas ();
			break;
		case 5:
			system("cls");
			CadastroNotas ();
			break;
		default:
			system("cls");
			printf("Opcao Invalida\n");
			break;
		}
		
		} while (menucad!=6);
		system("cls");
		MenuPrincipal();
	}
		
		//Menu de Impressão
			void MenuImpressao (){
   	   	   do{
			printf("  +================================+\n");
			printf("  |       MENU DE IMPRESSOES       |\n");
			printf("  +================================+\n");
			printf("  |  1- ALUNOS    | 2- DISCIPLINAS |\n");
			printf("  ---------------------------------+\n");
			printf("  |  3- PROFESSORES | 4- BOLETIM   |\n");
			printf("  ---------------------------------+\n");
			printf("  |           5- VOLTAR            |\n");
			printf("  +================================+\n\n");
			printf("Informe a operacao ou digite 4 para voltar:\n");
			scanf("%d", &menuimp);
			switch(menuimp){
				case 1:
					system("cls");
					ImpressaoAluno();
					break;
				case 2:
					system("cls");
					ImpressaoDisciplinas();
					break;
				case 3:
					system("cls");
					ImpressaoProfessores();
					break;
				case 4:
					system("cls");
					ImpressaoBoletim();
					break;
				default:
					system("cls");
					break;
										
			}	
     	 	 }while(menuimp!=5);
	}
		
		//Cadastro do aluno
			void CadastroAluno (){
				
			int cancelar;
			pont_arq = fopen("alunos.txt", "a");
								
				if(pont_arq == NULL){
					printf("Erro ao criar o arquivo.");
					return 1;
				}else{
				for(ia;ia<10,cancelar!=2;ia++){
					system("cls");
					printf("=======================================");
					printf("\n\nDigite a matricula do Aluno%d: ", ia + 1);
					scanf("%d", &aluno[ia].matricula);
					fprintf(pont_arq, "Matricula: %d\n", aluno[ia].matricula);
					printf("\nNome do Aluno%d: ", ia + 1);
					while (getchar() != '\n');
					fgets(aluno[ia].nome,50,stdin);
					removerlinha(aluno[ia].nome);
					fprintf(pont_arq, "Nome: %s\n", aluno[ia].nome);
					printf("\nDigite o cpf do Aluno%d: ", ia + 1);
					scanf("%s", &aluno[ia].cpf);
					fprintf(pont_arq, "CPF: %s\n", aluno[ia].cpf);
					printf("\nDigite a data de nascimento do Aluno%d (dd.mm.aa):", ia + 1);
					scanf("%s", &aluno[ia].datanascimento);
					fprintf(pont_arq, "Data de nascimento: %s\n\n", aluno[ia].datanascimento);
					printf("\nDeseja cadastrar outro aluno? 1- Sim 2- Nao\n");
					scanf("%d", &cancelar);
					system("cls");
				}
			fclose(pont_arq);	
	  	  	  }	
			}				
		
		//Cadastro do professor
			void CadastroProfessor (){
				
			int cancelar;
			pont_arq2 = fopen("professor.txt", "a");
								
				if(pont_arq2 == NULL){
					printf("Erro ao criar o arquivo.");
					return 1;
				}else{
				for(ip;ip<10,cancelar!=2;ip++){
					system("cls");
					printf("=======================================");
					printf("\n\nDigite a matricula do Professor%d: ", ip + 1);
					scanf("%d", &professor[ip].matricula);
					fprintf(pont_arq2, "Matricula: %d\n", professor[ip].matricula);
					printf("\nNome do Professor%d: ", ip + 1);
					while (getchar() != '\n');
					fgets(professor[ip].nome,50,stdin);
					removerlinha(professor[ip].nome);
					fprintf(pont_arq, "Nome: %s\n", professor[ip].nome);
					printf("\nDigite o cpf do Professor%d: ", ip + 1);
					scanf("%s", &professor[ip].cpf);
					fprintf(pont_arq2, "CPF: %s\n", professor[ip].cpf);
					printf("\nDigite a data de nascimento do Professor%d (dd.mm.aa):", ip + 1);
					scanf("%s", &professor[ip].datanascimento);
					fprintf(pont_arq2, "Data de nascimento: %s\n\n", professor[ip].datanascimento);
					printf("\nDeseja cadastrar outro Professor? 1- Sim 2- Nao\n");
					scanf("%d", &cancelar);
					system("cls");
				}
			fclose(pont_arq2);
	  	  	  }	
			}					
						
		//Cadastro de cursos
			void CadastroCurso (){
				
			int cancelar;
			pont_arq3 = fopen("cursos.txt", "a");
								
				if(pont_arq3 == NULL){
					printf("Erro ao criar o arquivo.");
					return 1;
				}else{
				for(ic;ic<10,cancelar!=2;ic++){
					system("cls");
					printf("=======================================");
					printf("\n\nDigite o codigo do Curso%d: ", ic + 1);
					scanf("%d", &curso[ic].codigo);
					fprintf(pont_arq3, "Codigo: %d\n", curso[ic].codigo);
					while (getchar() != '\n');
					printf("\nDigite o nome do Curso: ", ic + 1);
					fgets(curso[ic].nomedocurso,50,stdin);
					fprintf(pont_arq3, "Nome: %s\n", curso[ic].nomedocurso);
					printf("\nDeseja cadastrar outro curso? 1- Sim 2- Nao\n");
					scanf("%d", &cancelar);
					system("cls");
				}
			fclose(pont_arq3);
	  	  	  }	
			}													
						
		//Cadastro de disciplinas
			void CadastroDisciplinas (){
				
			int cancelar;
			pont_arq4 = fopen("disciplinas.txt", "a");
					
				if(pont_arq4 == NULL){
					printf("Erro ao criar o arquivo.");
					return 1;
				}else{
				for(id;id<4,cancelar!=2;id++){
					system("cls");
					printf("=======================================");
					printf("\n(OBS: O Boletim aceita no max. 5 disciplinas)");
					printf("\n\nDigite o codigo da Disciplina%d: ", id + 1);
					scanf("%d", &disciplina[id].codigo);
					fprintf(pont_arq4, "Codigo: %d\n", disciplina[id].codigo);
					while (getchar() != '\n');
					printf("\nDigite o nome da Disciplina: ", id + 1);
					fgets(disciplina[id].nomedadisciplina,50,stdin);
					removerlinha(disciplina[id].nomedadisciplina);
					fprintf(pont_arq4, "Nome: %s\n", disciplina[id].nomedadisciplina);
					printf("\nQual curso essa disciplina pertence?: ");
					fgets(disciplina[id].curso,50,stdin);					
					fprintf(pont_arq4, "Curso: %s\n", disciplina[id].curso);
					printf("\nDeseja cadastrar outra disciplina? 1- Sim 2- Nao\n");
					scanf("%d", &cancelar);
					system("cls");
				}
			fclose(pont_arq4);
	  	  	  }	
			}													
						
		//Cadastro de notas
			void CadastroNotas (){
				int ia;
				int prosseguir;
				printf("OBS: \n1-Cadastre um aluno para atribuir a nota.\n2-Coloque as notas depois de cadastrar todos os alunos.\n3-Coloque as notas depois de cadastrar 5 disciplinas.\n\nDeseja prosseguir? 1-Sim 2-Nao\n");
				scanf("%d", &prosseguir);
				switch(prosseguir){
					case 1:
		   				for (ia=0; ia < 10; ia++) {
		    				if (aluno[ia].matricula != 0) {
		    						system("cls");
			            		   	printf("Insira a nota de %s em %s: ", aluno[ia].nome, disciplina[ia].nomedadisciplina);
			            		   	scanf("%f", &aluno[ia].p1);
			            		   	printf("\nInsira a nota de %s em %s: ", aluno[ia].nome, disciplina[ia+1].nomedadisciplina);
			            		   	scanf("%f", &aluno[ia].p2);
			            		   	printf("\nInsira a nota de %s em %s: ", aluno[ia].nome, disciplina[ia+2].nomedadisciplina);
			            		   	scanf("%f", &aluno[ia].p3);
			            		   	printf("\nInsira a nota de %s em %s: ", aluno[ia].nome, disciplina[ia+3].nomedadisciplina);
			            		   	scanf("%f", &aluno[ia].p4);
			            		   	printf("\nInsira a nota de %s em %s: ", aluno[ia].nome, disciplina[ia+4].nomedadisciplina);
			            		   	scanf("%f", &aluno[ia].p5);
			            		   	system("cls");
		          	  	  	  }  
							}
							printf("Notas Cadastradas!\n");
							break;
					case 2:
						system("cls");
						MenuCadastro();
						break;
				}
			} 				
						
		//Impressão dos alunos
			void ImpressaoAluno() {
				int ia;
				char voltar[100];
				system("cls");
	    		printf("========== Dados dos Alunos ==========\n");
	    			for (ia=0; ia < 10; ia++) {
	        			if (aluno[ia].matricula != 0) {
	            			printf("Aluno %d:\n", ia + 1);
				    		printf("Matricula: %d\n", aluno[ia].matricula);
	    					printf("Nome: %s\n", aluno[ia].nome);
	    					printf("CPF: %s\n", aluno[ia].cpf);
	    					printf("Data de Nascimento: %s\n\n", aluno[ia].datanascimento);;
	        		    }
					}
	   		    	printf("Aperte 4 para voltar:\n");
		    		scanf("%s", &voltar);
					system("cls");
			    	
			}
						
		//Impressão dos professores
			void ImpressaoProfessores(){
				
				int ip;
				char voltar[100];
				system("cls");
	    		printf("========== Dados dos Professores ==========\n");
	    			for (ip=0; ip < 10; ip++) {
	        			if (professor[ip].matricula != 0) {
	            			printf("Professor %d:\n", ip + 1);
				    		printf("Matricula: %d\n", professor[ip].matricula);
	    					printf("Nome: %s\n", professor[ip].nome);
	    					printf("CPF: %s\n", professor[ip].cpf);
	    					printf("Data de Nascimento: %s\n\n", professor[ip].datanascimento);;
	        		    }
					}
	   		    	printf("Aperte 4 para voltar:\n");
		    		scanf("%s", &voltar);
					system("cls");
			    	
			}										
		
		//Impressão das Disciplinas
			void ImpressaoDisciplinas(){
				
				int id;
				char voltar[100];
				system("cls");
	    		printf("========== Disciplinas Disponíveis ==========\n");
	    			for (id=0; id < 10; id++) {
	        			if (disciplina[id].codigo != 0) {
	            			printf("Disciplina %d:\n", id + 1);
				    		printf("Codigo: %d\n", disciplina[id].codigo);
	    					printf("Nome: %s\n", disciplina[id].nomedadisciplina);
	    					printf("Curso: %s\n", disciplina[id].curso);
	        		    }
					}
	   		    	printf("Aperte 4 para voltar:\n");
		    		scanf("%s", &voltar);
					system("cls");
			    	
			}							
							
		//Impressão do Boletim
		    void ImpressaoBoletim(){
				
				int ia;
				char voltar[100];
				char data[50];
				system("cls");
				printf("Informe a data de hoje:\n");
				scanf("%s", data);
				printf("\n");
				for (ia=0; ia<10; ia++){
					float media = (aluno[ia].p1 + aluno[ia].p2 + aluno[ia].p3 + aluno[ia].p4 + aluno[ia].p5)/5;
					if(aluno[ia].matricula != 0){
						printf("Aluno: %s | Matricula: %d\n", aluno[ia].nome, aluno[ia].matricula);
						printf("(%s)\n", data);
						printf("%s: %.2f\n%s: %.2f\n%s: %.2f\n%s: %.2f\n%s: %.2f\n", disciplina[0].nomedadisciplina, aluno[ia].p1, disciplina[1].nomedadisciplina, aluno[ia].p2, disciplina[2].nomedadisciplina, aluno[ia].p3, disciplina[3].nomedadisciplina,  aluno[ia].p4, disciplina[4].nomedadisciplina, aluno[ia].p5);
						printf("-----------------------------\n");
						printf("Media: %.2f\n", media);
						if(media>=7){
							printf("Status: Aprovado.\n\n");
						}else{
							printf("Status: Reprovado.\n\n");
						}
					}
				}
				printf("Digite 4 para voltar:\n");
				scanf("%s", &voltar);
				system("cls");				
			}					
							
		//Int Main do código
			int main(int argc, char const *argv[]){
			
			do{	
				MenuPrincipal();
			}while(menu!=3);

		}