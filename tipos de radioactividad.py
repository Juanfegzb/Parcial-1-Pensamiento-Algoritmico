#se pide al usuario que ingrese la cantidad de nanosegundos
nanosegundo = float(input('Ingresa la cantidad de nanosegundos: '))
#se convierte la cantidad de nanosegundos a segundos
T = nanosegundo / 1e9
#se evalua el valor de T para determinar el tipo de radioactividad
if T <= 1:
    print("Tiene un tipo de reactividad alta")
else:
    if 1 < T <= 86400:
        print("Tiene un tipo de reactividad media")
    else:
        if T > 86400:
            print("Tiene un tipo de reactividad baja")