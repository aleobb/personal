/*Debemos lograr tomar Los numeros por ID ,
transformarlos a enteros (parseInt),realizar la operación correcta y 
mostrar el resto entre el dividendo y el divisor.
ej.: "El resto es 0 ."*/
function SacarResto()
{
    var a = parseInt(document.getElementById("numeroDividendo").value);
    var b = parseInt(document.getElementById("numeroDivisor").value);

    
   var res = a % b;

    
    alert("El resto es " + res);	
}