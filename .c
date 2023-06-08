#include <stdio.h>
#include <math.h>

int main()
{
  float condutividade, temperaturadomeiorefrigerado, temperaturadebulboseco, umidaderelativa, conveccaointerna, conveccaexterna, temperaturadeorvalho, espressuranecessariadoisolante;

  printf("Informe a condutividade termica do isolamento (W/(m.K)): ");
  scanf("%f", &condutividade);

  printf("Informe a temperatura do meio refrigerado (°C): ");
  scanf("%f", &temperaturadomeiorefrigerado);

  printf("Informe a temperatura de bulbo seco (°C): ");
  scanf("%f", &temperaturadebulboseco);

  printf("Informe a umidade relativa (%%): ");
  scanf("%f", &umidaderelativa);

  printf("Informe o coeficiente de convecção externo (W/(m².°C)): ");
  scanf("%f", &conveccaexterna);

  printf("Informe o coeficiente de convecção interno (W/(m².°C)): ");
  scanf("%f", &conveccaointerna);

  temperaturadeorvalho = (109.8 + temperaturadebulboseco) * pow((umidaderelativa / 100), 0.1247) - 109.8;
  espressuranecessariadoisolante = condutividade * ((temperaturadeorvalho - temperaturadomeiorefrigerado) / (temperaturadebulboseco - temperaturadeorvalho) * 1 / conveccaointerna - 1 / conveccaexterna);

  printf("Espessura do isolamento: %.f mm\n", espressuranecessariadoisolante * 1000);

  return 0;
}
