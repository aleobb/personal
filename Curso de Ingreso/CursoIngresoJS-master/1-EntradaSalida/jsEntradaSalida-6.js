/*Debemos lograr tomar Los numeros por ID ,
transformarlos a enteros (parseInt) y Sumarlos.
Mostar el resulto por medio de "ALERT"*/
function sumar()
{
    var a = parseInt(document.getElementById("numeroUno").value);
    var b = parseInt(document.getElementById("numeroDos").value);

    
   var res = a + b;


    alert("La suma es " + res);

}

