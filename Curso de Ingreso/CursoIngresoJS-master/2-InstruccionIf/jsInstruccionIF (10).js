function Mostrar()
{
	//Genero el número RANDOM entre 1 y 10 
	
var nota = Math.floor(Math.random() * 10) + 1;


		if (nota >=9) {    
    	alert("Excelente " + nota);
} else if (nota >= 4) {
    alert("Aprobado " + nota)
} else {
    alert("Vamos, la proxima se puede " + nota);

}



}//FIN DE LA FUNCIÓN