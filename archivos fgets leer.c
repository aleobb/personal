char* p;
const char* delim=","; //cambia las comas por fin de cadena ('\0')
char* token;
char line[128];

//salteo primer linea (leyendola)
fgets(line,128,pFile);

while(1)
{
	
	//leo linea
	p=fgets(line,128,pFile);
	if(p=NULL)
		break;
	//printf("%s",line);
	
	
	//creo empleado
	Employee* pE = malloc(sizeof(Employee));
	
	//obtengo partes y las cargo
	token = strtok(line,delim);
	
	pE->id = atoi(token);
	strcpy(pE->name,strtok(NULL,delim));
	strcpy(pE->lastName,strtok(NULL,delim));
	
	printf("%d %s %s\r\n",pE->id,pE->name,pE->lastName);
	
}