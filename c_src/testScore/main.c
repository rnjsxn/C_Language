#include <stdio.h>

typedef struct 
{
	char name[21];
	int kor;
	int eng;
	int mat;
	int sum;
	double average;
	int rank;
	
} Student;
	
int main(void)
{
	FILE * fin, *fout;
	fin = fopen("score.dat", "r");
	fout = fopen("score.out", "w");
	 
	Student students[10];
	
	for(int i=0; i<10; i++) { //student.name->start 
		fscanf(fin,"%s %d %d %d",students[i].name, &students[i].kor, &students[i].eng, &students[i].mat);
	
	students[i].sum = students[i].kor+ students[i].eng+ students[i].mat;
	students[i].average = (double)students[i].sum/3; 
	students[i].rank = 1;
	}
	
	
	
	for(int i=0; i<10; i++) {
		for(int j=0; j<10;j++) {
			if(students[i].sum < students[j].sum /*&& i != j*/) {
				students[i].rank++;
			}
		  }
		} 
		
/*		//sorting by score
	for(int i=0; i<10-1; i++) {
		for(int j=i+1; j<10; j++) {
			if(students[i].sum < students[j].sum) {
				student tmp = students[i];
				students[i] = students[j];
				students[j] = tmp;
				}
			}
		}
*/	fprintf(fout, "                    <<score>>                  \n");
	fprintf(fout, "-----------------------------------------------\n"); 
	fprintf(fout, "     name              kor eng mat sum avr rank\n");
	fprintf(fout, "-----------------------------------------------\n"); 
		
	for(int i=0; i<10; i++) {
		fprintf(fout,"%-20s %3d %3d %3d %3d %5.2f %3d\n", students[i].name, students[i].kor, students[i].eng, students[i].mat, students[i].sum, students[i].average, students[i].rank);
	}
	
	fclose(fin);
	fclose(fout);
	return 0;
}

