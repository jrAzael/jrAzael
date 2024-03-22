import csv

# Función para cargar los datos de los empleados desde un archivo CSV
def load_employees():
    try:
        with open('employees.csv', mode='r') as file:
            reader = csv.DictReader(file)
            return [employee for employee in reader]
    except FileNotFoundError:
        return []

# Función para guardar los datos de los empleados en un archivo CSV
def save_employees(employees):
    with open('employees.csv', mode='w', newline='') as file:
        fieldnames = ['id', 'name', 'position', 'salary']
        writer = csv.DictWriter(file, fieldnames=fieldnames)
        writer.writeheader()
        writer.writerows(employees)

# Función para agregar un nuevo empleado
def add_employee():
    name = input("Ingrese el nombre del empleado: ")
    position = input("Ingrese el cargo del empleado: ")
    salary = input("Ingrese el salario del empleado: ")
    employee_id = str(len(employees) + 1)
    employees.append({'id': employee_id, 'name': name, 'position': position, 'salary': salary})
    save_employees(employees)
    print("Empleado agregado con éxito.")

# Función para mostrar todos los empleados
def display_employees():
    print("Lista de empleados:")
    for employee in employees:
        print(f"ID: {employee['id']}, Nombre: {employee['name']}, Cargo: {employee['position']}, Salario: {employee['salary']}")

# Función para buscar un empleado por ID
def search_employee():
    employee_id = input("Ingrese el ID del empleado que desea buscar: ")
    for employee in employees:
        if employee['id'] == employee_id:
            print(f"Empleado encontrado - Nombre: {employee['name']}, Cargo: {employee['position']}, Salario: {employee['salary']}")
            return
    print("Empleado no encontrado.")

# Función para actualizar los datos de un empleado
def update_employee():
    employee_id = input("Ingrese el ID del empleado que desea actualizar: ")
    for employee in employees:
        if employee['id'] == employee_id:
            print("Ingrese los nuevos datos del empleado:")
            employee['name'] = input("Nombre: ")
            employee['position'] = input("Cargo: ")
            employee['salary'] = input("Salario: ")
            save_employees(employees)
            print("Datos del empleado actualizados con éxito.")
            return
    print("Empleado no encontrado.")

# Cargar los datos de los empleados al iniciar el programa
employees = load_employees()

# Menú principal del programa
while True:
    print("\nSistema de Gestión de Empleados")
    print("1. Agregar Empleado")
    print("2. Mostrar Empleados")
    print("3. Buscar Empleado")
    print("4. Actualizar Empleado")
    print("5. Salir")
    choice = input("Ingrese el número de la opción deseada: ")

    if choice == '1':
        add_employee()
    elif choice == '2':
        display_employees()
    elif choice == '3':
        search_employee()
    elif choice == '4':
        update_employee()
    elif choice == '5':
        break
    else:
        print("Opción no válida. Por favor, ingrese un número del 1 al 5.")
