#include <iostream>
#include "Alumno.hpp"

//Constructor por default
Alumno::Alumno()
{
    this->matricula = "A000000";
    this->nombre = "RICARDO RAFAEL QUINTERO MEZA";
    this->edad = 18;
    this->carrera = "ITC";
}

Alumno::Alumno(std::string matricula, std::string nombre, int edad, std::string carrera)
{
}

//Consulta la matricula
std::string Alumno::getMatricula()
{
}

//Consulta el nombre
std::string Alumno::getNombre()
{
}

//Consulta la edad
int Alumno::getEdad()
{
}

//Consulta la carrera
std::string Alumno::getCarrera()
{
}

//Modificando la matricula
void Alumno::setMatricula(std::string matricula)
{
}

//Modificando el nombre
void Alumno::setNombre(std::string nombre)
{
}

//Modificando la edad
void Alumno::setEdad(int edad)
{
}

//Modificando la carrera
void Alumno::setCarrera(std::string carrera)
{
}

//Muestra todos los atributos del alumno en consola
void Alumno::imprimeAlumno()
{
}

//Cambia la edad del alumno por su cumpleaños
void Alumno::cumpleAnios()
{
}