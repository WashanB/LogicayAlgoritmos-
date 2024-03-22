Proceso Descuento
	Definir cantidad, precio, total, descuentoSin, descuentoAplicado como real;
	
	Escribir "Ingrese la cantidad de productos: ";
	leer cantidad;
	Escribir "Ingrese el precio por unidad del producto: ";
	leer precio;
	
	total<-cantidad*precio;
	descuentoSin<-total*0.10;
	descuentoAplicado <- total - descuentoSin;
	
	Escribir "El total de la compra sin el descuento aplicado es: ", total;
	Escribir "El porcentaje de descuento es: ", descuentoSin;
	Escribir "El total de la compra con el descuento aplicado es: ", descuentoAplicado;
	
	
FinProceso
