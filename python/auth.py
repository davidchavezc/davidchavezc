class FinancialTransaction:
    def __init__(self, description, amount):
        self.description = description
        self.amount = amount

def autenticar():
    correct_username = "admin"
    correct_password = "123"
    
    print("Inicie sesión")
    username = input("Usuario: ")
    password = input("Contraseña: ")
    
    if username == correct_username and password == correct_password:
        print("¡Autenticación exitosa!")
        return True
    else:
        print("Usuario o contraseña incorrecto.")
        return False

def registrar_ingreso(transactions, balance):
    income_amount = float(input("Ingrese la cantidad de ingreso: "))
    income_description = input("Descripción del ingreso: ")
    balance += income_amount
    transactions.append(FinancialTransaction(income_description, income_amount))
    print("Ingreso registrado con éxito.")
    return balance

def registrar_gasto(transactions, balance):
    expense_amount = float(input("Ingrese la cantidad del gasto: "))
    if expense_amount > balance:
        print(f"Error: No puede gastar más de lo que ha ingresado. Saldo disponible: {balance:.2f}")
    else:
        expense_description = input("Descripción del gasto: ")
        balance -= expense_amount
        transactions.append(FinancialTransaction(expense_description, -expense_amount))
        print("Gasto registrado con éxito.")
    return balance

def mostrar_movimientos(transactions, balance):
    print("\n---- Lista de movimientos ----")
    for index, transaction in enumerate(transactions, 1):
        print(f"{index}. {transaction.description}: {transaction.amount:.2f}")
    print("-------------------------------")
    print(f"Saldo final: {balance:.2f}")

def main():
    if autenticar():
        financial_transactions = []
        current_balance = 0.0
        while True:
            print("\n---- Menú ----")
            print("1. Registrar ingreso")
            print("2. Registrar gasto")
            print("3. Mostrar lista de movimientos y saldo")
            print("4. Salir")
            selected_option = int(input("Seleccione una opción: "))

            if selected_option == 1:
                current_balance = registrar_ingreso(financial_transactions, current_balance)
            elif selected_option == 2:
                current_balance = registrar_gasto(financial_transactions, current_balance)
            elif selected_option == 3:
                mostrar_movimientos(financial_transactions, current_balance)
            elif selected_option == 4:
                print("Saliendo del programa...")
                break
            else:
                print("Opción no válida. Intente nuevamente.")
    else:
        print("Acceso denegado.")

if __name__ == "__main__":
    main()
