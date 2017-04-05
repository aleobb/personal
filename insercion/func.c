void insertion_sort(int array[], int size){
int i, j, aux;

// loop que recorre todos los numeros
for (i = 0; i < size; i++){
		j = i;

		while ((j > 0) && (array[j] < array[j-1]))
            {
			  aux = array[j];
			  array[j] = array[j-1];
			  array[j-1] = aux;
			  j--;
            }
		}

}
