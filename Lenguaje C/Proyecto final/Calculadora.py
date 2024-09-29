#!/usr/bin/env python
# -*- coding: utf-8 -*-

while (True):
  print "Lista de opciones:"
  print "1) Suma"
  print "2) Resta"
  print "3) Multiplicación"
  print "4) División"
  print "5) Potencia"
  print "6) Raíz cuadrada"
  print "7) Salir de la calculadora"
  opcion= int(raw_input("Elige una opción:\n"))
  if(opcion==1):
    print "Ha seleccionado la operación suma."
    a=float(raw_input("Ingrese el primer sumando:\n"))
    b=float(raw_input("Ingrese el segundo sumando:\n"))
    resultado= a+b
    print "El resultado de la suma es:", resultado
    print "ENTER para continuar"
    raw_input()
  elif(opcion==2):
    print "Ha seleccionado la operación resta."
    a=float(raw_input("Ingrese el minuendo:\n"))
    b=float(raw_input("Ingrese el sustrayendo:\n"))
    resultado= a-b
    print "El resultado de la resta es:", resultado
    print "ENTER para continuar"
    raw_input()
  elif(opcion==3):
    print "Ha seleccionado la operación multiplicación."
    a=float(raw_input("Ingrese el primer factor:\n"))
    b=float(raw_input("Ingrese el segundo factor:\n"))
    resultado= a*b
    print "El resultado de la multiplicación es:", resultado
    print "ENTER para continuar"
    raw_input()
  elif(opcion==4):
    print "Ha seleccionado la operación división."
    a=float(raw_input("Ingrese el dividendo:\n"))
    b=float(raw_input("Ingrese el divisor:\n"))
    if(b==0):
      print "No se puede dividir entre 0."
      print "ENTER para continuar"
      raw_input()
    else:
      resultado= a/b
      print "El resultado de la división es:", resultado
      print "ENTER para continuar"
      raw_input()
  elif(opcion==5):
    print "Ha seleccionado la operación potencia."
    a=float(raw_input("Ingrese la base:\n"))
    b=float(raw_input("Ingrese el exponente:\n"))
    resultado= a**b
    print "El resultado de la potencia es:", resultado
    print "ENTER para continuar"
    raw_input()
  elif(opcion==6):
    print "Ha seleccionado la operación raíz cuadrada."
    a=float(raw_input("Ingrese el radicando:\n"))
    if(a<0):
      print "No existe una raíz cuadrada real para números negativos."
      print "ENTER para continuar"
      raw_input()
    else:
      resultado= a**0.5
      print "El resultado de la raíz cuadrada es:", resultado
      print "ENTER para continuar"
      raw_input()
  elif(opcion==7):
    break
