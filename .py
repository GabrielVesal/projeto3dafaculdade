condutividade = float(input("Informe a condutividade termica do isolamento (W/(m.K)): "))

temperaturadomeiorefrigerado = float(input("Informe a temperatura do meio refrigerado (°C): "))

temperaturadebulboseco = float(input("Informe a temperatura de bulbo seco (°C): "))

umidaderelativa = float(input("Informe a umidade relativa (%%): "))

conveccaexterna = float(input("Informe o coeficiente de convecção externo (W/(m².°C)): "))

conveccaointerna = float(input("Informe o coeficiente de convecção interno (W/(m².°C)): "))

temperaturadeorvalho = (109.8 + temperaturadebulboseco) * pow((umidaderelativa / 100), 0.1247) - 109.8
espressuranecessariadoisolante = condutividade * ((temperaturadeorvalho - temperaturadomeiorefrigerado) / (temperaturadebulboseco - temperaturadeorvalho) * 1 /conveccaointerna - 1/conveccaexterna)

print("Espessura do isolamento: ", espressuranecessariadoisolante * 1000)

  
