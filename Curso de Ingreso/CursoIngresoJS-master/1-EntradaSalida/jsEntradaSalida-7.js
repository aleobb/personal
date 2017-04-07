/*Debemos lograr tomar Los numeros por ID ,
transformarlos a enteros (parseInt),realizar la operación correcta y 
mostar el resulto por medio de "ALERT"
ej.: "la Resta es 750"*/ 
function sumar()
{	
    var a = parseInt(document.getElementById("numeroUno").value);
    var b = parseInt(document.getElementById("numeroDos").value);

    
   var res = a + b;

    
    alert("La suma es " + res);	
}

function restar()
{
    var a = parseInt(document.getElementById("numeroUno").value);
    var b = parseInt(document.getElementById("numeroDos").value);

    
   var res = a - b;

    
    alert("La resta es " + res);	
}

function multiplicar()
{ 
	    var a = parseInt(document.getElementById("numeroUno").value);
    var b = parseInt(document.getElementById("numeroDos").value);

    
   var res = a * b;

    
    alert("La multiplicacion es " + res);
}

function dividir()
{
	    var a = parseInt(document.getElementById("numeroUno").value);
    var b = parseInt(document.getElementById("numeroDos").value);

    
   var res = a / b;

    
    alert("La division es " + res);
}

