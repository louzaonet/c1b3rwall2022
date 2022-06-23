# C1b3rWall 2022

Charla para C1b3rwall 2022 en la Escuela de la Policía Nacional.

- c1b3rwall.cpp incluye errores sintácticos y de funciones no recomendables para hacer saltar DevSkim en GitHub Actions.

- http.cpp incluye una llamada a una URL http en lugar de https que hace que DevSkim devuelva un aviso de protocolo inseguro.

La carpeta Android ha sido eliminada porque el apk usado de ejemplo de análisis con MobSF contienen malware.

Carpeta Overflow:

- overflow1.cpp es un ejemplo para que cppcheck indique que hay un desbordamiento de entero, además de otros problemas de mala definición de variables.

- overflow2.cpp no da ningún error.

Carpeta Charla contiene las diapositivas de la charla en formato PPTX y PDF.