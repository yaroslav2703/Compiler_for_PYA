#include "pch.h"
  
namespace CONS {

	TableConstr Pravila() {
	
		TableConstr pravila;
	

		pravila.construction = new Constr[MAX_CONSTR - 1]; 
	
		pravila.kol_Constr = 0;
		pravila.construction[0].posl = new Token_space::Token[5];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'F';  //FI(){ //0
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'(';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L')';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L'{';
		pravila.construction[pravila.kol_Constr].dlina = 5;
		pravila.construction[pravila.kol_Constr].name = 11;
		pravila.kol_Constr++;
	
		pravila.construction[1].posl = new Token_space::Token[3];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'F';  //FI( //1
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'(';
		pravila.construction[pravila.kol_Constr].dlina = 3;
		pravila.construction[pravila.kol_Constr].name = 12;
		pravila.kol_Constr++;

		pravila.construction[2].posl = new Token_space::Token[5];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'R';  //R(I)} //2
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'(';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L')';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L'}';
		pravila.construction[pravila.kol_Constr].dlina = 5;
		pravila.construction[pravila.kol_Constr].name = 13;
		pravila.kol_Constr++;

		pravila.construction[3].posl = new Token_space::Token[4];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'A';  //AI){ //3
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L')';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'{';
		pravila.construction[pravila.kol_Constr].dlina = 4;
		pravila.construction[pravila.kol_Constr].name = 21;
		pravila.kol_Constr++;

		pravila.construction[4].posl = new Token_space::Token[3];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'A';  //AI, //4
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L',';
		pravila.construction[pravila.kol_Constr].dlina = 3;
		pravila.construction[pravila.kol_Constr].name = 22;
		pravila.kol_Constr++;

		pravila.construction[5].posl = new Token_space::Token[3];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'V'; // VI; //5
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 3;
		pravila.construction[pravila.kol_Constr].name = 31;
		pravila.kol_Constr++;

		pravila.construction[6].posl = new Token_space::Token[4];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I=I; //6
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 4;
		pravila.construction[pravila.kol_Constr].name = 41;
		pravila.kol_Constr++;

		pravila.construction[7].posl = new Token_space::Token[4];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I=C; //7
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'C';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 4;
		pravila.construction[pravila.kol_Constr].name = 42;
		pravila.kol_Constr++;

		pravila.construction[8].posl = new Token_space::Token[6];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I=I+I; //8
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'+';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[5].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 6;
		pravila.construction[pravila.kol_Constr].name = 43;
		pravila.kol_Constr++;

		pravila.construction[9].posl = new Token_space::Token[6];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I=I+C; //9
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'+';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L'C';
		pravila.construction[pravila.kol_Constr].posl[5].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 6;
		pravila.construction[pravila.kol_Constr].name = 44;
		pravila.kol_Constr++;

		pravila.construction[10].posl = new Token_space::Token[6];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I=C+I; //10
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'C';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'+';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[5].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 6;
		pravila.construction[pravila.kol_Constr].name = 45;
		pravila.kol_Constr++;

		pravila.construction[11].posl = new Token_space::Token[6];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I=C+C; //11
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'C';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'+';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L'C';
		pravila.construction[pravila.kol_Constr].posl[5].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 6;
		pravila.construction[pravila.kol_Constr].name = 46;
		pravila.kol_Constr++;

		pravila.construction[12].posl = new Token_space::Token[6];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I=I-I; //12
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'-';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[5].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 6;
		pravila.construction[pravila.kol_Constr].name = 47;
		pravila.kol_Constr++;

		pravila.construction[13].posl = new Token_space::Token[6];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I=I-C; //13
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'-';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L'C';
		pravila.construction[pravila.kol_Constr].posl[5].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 6;
		pravila.construction[pravila.kol_Constr].name = 48;
		pravila.kol_Constr++;

		pravila.construction[14].posl = new Token_space::Token[6];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I=C-I; //14
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'C';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'-';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[5].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 6;
		pravila.construction[pravila.kol_Constr].name = 49;
		pravila.kol_Constr++;

		pravila.construction[15].posl = new Token_space::Token[6];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I=C-C; //15
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'C';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'-';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L'C';
		pravila.construction[pravila.kol_Constr].posl[5].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 6;
		pravila.construction[pravila.kol_Constr].name = 50;
		pravila.kol_Constr++;

		pravila.construction[16].posl = new Token_space::Token[6];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I=I*I; //16
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'*';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[5].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 6;
		pravila.construction[pravila.kol_Constr].name = 51;
		pravila.kol_Constr++;

		pravila.construction[17].posl = new Token_space::Token[6];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I=I*C; //17
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'*';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L'C';
		pravila.construction[pravila.kol_Constr].posl[5].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 6;
		pravila.construction[pravila.kol_Constr].name = 52;
		pravila.kol_Constr++;

		pravila.construction[18].posl = new Token_space::Token[6];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I=C*I; //18
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'C';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'*';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[5].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 6;
		pravila.construction[pravila.kol_Constr].name = 53;
		pravila.kol_Constr++;

		pravila.construction[19].posl = new Token_space::Token[6];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I=C*C; //19
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'C';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'*';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L'C';
		pravila.construction[pravila.kol_Constr].posl[5].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 6;
		pravila.construction[pravila.kol_Constr].name = 54;
		pravila.kol_Constr++;

		pravila.construction[20].posl = new Token_space::Token[6];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I=I/I; //20
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'/';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[5].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 6;
		pravila.construction[pravila.kol_Constr].name = 55;
		pravila.kol_Constr++;

		pravila.construction[21].posl = new Token_space::Token[6];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I=I/C; //21
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'/';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L'C';
		pravila.construction[pravila.kol_Constr].posl[5].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 6;
		pravila.construction[pravila.kol_Constr].name = 56;
		pravila.kol_Constr++;

		pravila.construction[22].posl = new Token_space::Token[6];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I=C/I; //22
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'C';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'/';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[5].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 6;
		pravila.construction[pravila.kol_Constr].name = 57;
		pravila.kol_Constr++;

		pravila.construction[23].posl = new Token_space::Token[6];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I=C/C; //23
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'C';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'/';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L'C';
		pravila.construction[pravila.kol_Constr].posl[5].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 6;
		pravila.construction[pravila.kol_Constr].name = 58;
		pravila.kol_Constr++;

		pravila.construction[24].posl = new Token_space::Token[6];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I=I%I; //24
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'%';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[5].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 6;
		pravila.construction[pravila.kol_Constr].name = 59;
		pravila.kol_Constr++;

		pravila.construction[25].posl = new Token_space::Token[6];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I=I%C; //25
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'%';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L'C';
		pravila.construction[pravila.kol_Constr].posl[5].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 6;
		pravila.construction[pravila.kol_Constr].name = 60;
		pravila.kol_Constr++;

		pravila.construction[26].posl = new Token_space::Token[6];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I=C%I; //26
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'C';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'%';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[5].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 6;
		pravila.construction[pravila.kol_Constr].name = 61;
		pravila.kol_Constr++;

		pravila.construction[27].posl = new Token_space::Token[6];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I=C%C; //27
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'C';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'%';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L'C';
		pravila.construction[pravila.kol_Constr].posl[5].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 6;
		pravila.construction[pravila.kol_Constr].name = 62;
		pravila.kol_Constr++;

		pravila.construction[28].posl = new Token_space::Token[4];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I--; //28
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'-';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'-';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 4;
		pravila.construction[pravila.kol_Constr].name = 63;
		pravila.kol_Constr++;

		pravila.construction[29].posl = new Token_space::Token[4];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I++; //29
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'+';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'+';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 4;
		pravila.construction[pravila.kol_Constr].name = 64;
		pravila.kol_Constr++;

		pravila.construction[30].posl = new Token_space::Token[5];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I+=C; //30
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'+';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'C';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 5;
		pravila.construction[pravila.kol_Constr].name = 65;
		pravila.kol_Constr++;

		pravila.construction[31].posl = new Token_space::Token[5];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I+=I; //31
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'+';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 5;
		pravila.construction[pravila.kol_Constr].name = 66;
		pravila.kol_Constr++;

		pravila.construction[32].posl = new Token_space::Token[5];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I-=C; //32
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'-';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'C';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 5;
		pravila.construction[pravila.kol_Constr].name = 67;
		pravila.kol_Constr++;

		pravila.construction[33].posl = new Token_space::Token[5];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I-=I; //33
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'-';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 5;
		pravila.construction[pravila.kol_Constr].name = 68;
		pravila.kol_Constr++;

		pravila.construction[34].posl = new Token_space::Token[5];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I*=C; //34
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'*';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'C';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 5;
		pravila.construction[pravila.kol_Constr].name = 69;
		pravila.kol_Constr++;

		pravila.construction[35].posl = new Token_space::Token[5];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I*=I; //35
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'*';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 5;
		pravila.construction[pravila.kol_Constr].name = 70;
		pravila.kol_Constr++;

		pravila.construction[36].posl = new Token_space::Token[5];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I/=C; //36
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'/';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'C';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 5;
		pravila.construction[pravila.kol_Constr].name = 71;
		pravila.kol_Constr++;

		pravila.construction[37].posl = new Token_space::Token[5];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I/=I; //37
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'/';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 5;
		pravila.construction[pravila.kol_Constr].name = 72;
		pravila.kol_Constr++;

		pravila.construction[38].posl = new Token_space::Token[5];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I%=C; //38
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'%';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'C';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 5;
		pravila.construction[pravila.kol_Constr].name = 73;
		pravila.kol_Constr++;

		pravila.construction[39].posl = new Token_space::Token[5];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I%=I; //39
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'%';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 5;
		pravila.construction[pravila.kol_Constr].name = 74;
		pravila.kol_Constr++;

		pravila.construction[40].posl = new Token_space::Token[6];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I=I(); //40
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'(';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L')';  
		pravila.construction[pravila.kol_Constr].posl[5].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 6;
		pravila.construction[pravila.kol_Constr].name = 91;
		pravila.kol_Constr++;

		pravila.construction[41].posl = new Token_space::Token[4];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I=I( //41
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'I';  
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'(';
		pravila.construction[pravila.kol_Constr].dlina = 4;
		pravila.construction[pravila.kol_Constr].name = 92;
		pravila.kol_Constr++;

		pravila.construction[42].posl = new Token_space::Token[3];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I); //42
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L')';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 3;
		pravila.construction[pravila.kol_Constr].name = 93;
		pravila.kol_Constr++;

		pravila.construction[43].posl = new Token_space::Token[2];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  //I, //43
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L',';
		pravila.construction[pravila.kol_Constr].dlina = 2;
		pravila.construction[pravila.kol_Constr].name = 94;
		pravila.kol_Constr++;

		pravila.construction[44].posl = new Token_space::Token[2];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'F';  //F{ //44
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'{';
		pravila.construction[pravila.kol_Constr].dlina = 2;
		pravila.construction[pravila.kol_Constr].name = 14;
		pravila.kol_Constr++;

		pravila.construction[45].posl = new Token_space::Token[2];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'E';  //E} //45
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'}';
		pravila.construction[pravila.kol_Constr].dlina = 2;
		pravila.construction[pravila.kol_Constr].name = 15;
		pravila.kol_Constr++;

		pravila.construction[46].posl = new Token_space::Token[3];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'W';  // W(I //46
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'(';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].dlina = 3;
		pravila.construction[pravila.kol_Constr].name = 101;
		pravila.kol_Constr++;

		pravila.construction[47].posl = new Token_space::Token[3];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'W';
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'(';  // W(C //47
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'C';
		pravila.construction[pravila.kol_Constr].dlina = 3;
		pravila.construction[pravila.kol_Constr].name = 102;
		pravila.kol_Constr++;

		pravila.construction[48].posl = new Token_space::Token[4];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'+';
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'I';  // +I); //48
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L')';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 4;
		pravila.construction[pravila.kol_Constr].name = 102;
		pravila.kol_Constr++;

		pravila.construction[49].posl = new Token_space::Token[4];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'+';
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'C';  // +C); //49
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L')';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 4;
		pravila.construction[pravila.kol_Constr].name = 103;
		pravila.kol_Constr++;

		pravila.construction[50].posl = new Token_space::Token[2];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'+';  // +I //50
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].dlina = 2;
		pravila.construction[pravila.kol_Constr].name = 104;
		pravila.kol_Constr++;

		pravila.construction[51].posl = new Token_space::Token[2];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'+';  // +C //51
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'C';
		pravila.construction[pravila.kol_Constr].dlina = 2;
		pravila.construction[pravila.kol_Constr].name = 105;
		pravila.kol_Constr++;

		pravila.construction[52].posl = new Token_space::Token[9];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  // I=B(I,I); //52
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'B';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'(';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[5].Lexema = L',';
		pravila.construction[pravila.kol_Constr].posl[6].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[7].Lexema = L')';
		pravila.construction[pravila.kol_Constr].posl[8].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 9;
		pravila.construction[pravila.kol_Constr].name = 111;
		pravila.kol_Constr++;

			pravila.construction[53].posl = new Token_space::Token[7];
		pravila.construction[pravila.kol_Constr].posl[0].Lexema = L'I';  // I=B(I); //53
		pravila.construction[pravila.kol_Constr].posl[1].Lexema = L'=';
		pravila.construction[pravila.kol_Constr].posl[2].Lexema = L'B';
		pravila.construction[pravila.kol_Constr].posl[3].Lexema = L'(';
		pravila.construction[pravila.kol_Constr].posl[4].Lexema = L'I';
		pravila.construction[pravila.kol_Constr].posl[5].Lexema = L')';
		pravila.construction[pravila.kol_Constr].posl[6].Lexema = L';';
		pravila.construction[pravila.kol_Constr].dlina = 7;
		pravila.construction[pravila.kol_Constr].name = 112;
		pravila.kol_Constr++;

		

	

		
	

	
	
		return pravila;
	}
}