from sympy import Matrix

# Función para pedir la matriz al usuario
def pedir_matriz():
    matriz = []
    print("Introduce los coeficientes y términos independientes para las ecuaciones:")
    for i in range(3):
        fila = []
        print(f"Ecuación {i+1}:")
        for j in range(3):
            coeficiente = float(input(f"Coeficiente de i{j+1}: "))
            fila.append(coeficiente)
        termino_independiente = float(input(f"Término independiente: "))
        fila.append(termino_independiente)
        matriz.append(fila)
    return matriz

# Función para resolver usando Montante (Gauss-Jordan)
def resolver_montante():
    matriz = pedir_matriz()
    matriz_aumentada = Matrix(matriz)
    
    # Aplicar método de Gauss-Jordan
    matriz_reducida, _ = matriz_aumentada.rref()
    
    # Mostrar resultados
    for i in range(3):
        print(f"i{i+1} = {matriz_reducida[i, 3]}")

# Llamamos a la función
resolver_montante()