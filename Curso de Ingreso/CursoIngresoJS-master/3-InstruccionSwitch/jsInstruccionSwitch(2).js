function Mostrar()
{
//tomo la edad  
var mesDelAño = document.getElementById('mes').value;

// alert (mesDelAño);

switch(mesDelAño) {
    case "Julio":
    case "Agosto":
        alert("Abrigate que hace frio.")
    break;
    case "Septiembre":
    case "Octubre":
    case "Diciembre":
    case "Noviembre":
        alert("Ya pasamos el frio, ahora hace calor!")
    break;
    default:
        alert("Falta para el invierno.");
}	


}//FIN DE LA FUNCIÓN