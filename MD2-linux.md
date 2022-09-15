#Mājasdarbs - Linux vides instalācija
## 1. Linux distribūcijas lejupielāde un bootable media izveide
Tai vietā lai izveidotu virtualizētu linux vidi, es izvēlējos to uzstādīt uz sava datora izmantojot dual boot paralēli windows 10.

Es izvēlējos Lubuntu linux distribūciju, jo tā man škita piemērota manam datoram, par cik tā ir paradzēta vājākām ierīcēm.
![Lubuntu](https://github.com/BingoFresh/RTR105/blob/main/MD2-linux%20images/lubuntu.jpg?raw=true)

Lai izveidotu bootable media linux instalācijai, es izmantoju programmu Balena Etcher. Tieši šo programmu izvēlējos, jo man ir līdzšinēji bijusi laba pieredze izmantojot šo programmu.
![BalenaEtcher](https://github.com/BingoFresh/RTR105/blob/main/MD2-linux%20images/balena.jpg?raw=true)

## 2. Linux instalācija dual boot
Es uzstādiju Linux paralēli Windows 10, lai būtu pieejamas priekšrocības no abām OS.

Lai arī to varētu uzskatīt par slinku izvēli, es izmantoju Lubuntu instalācijā iebūvēto "Install alongside" opciju, lai man manuāli nebūtu jāizveido visas nepieciešamās partīcijas (boot,swap,etc.)
![Install Alongside](https://github.com/BingoFresh/RTR105/blob/main/MD2-linux%20images/dualboot1.jpg?raw=true)
![Install Alongside2](https://github.com/BingoFresh/RTR105/blob/main/MD2-linux%20images/dualboot2.jpg?raw=true)

## 3. Gatava Linux vide
Pēc instalācijas un datora restartēšanas dual boot veiksmīgi strādā un parādas GRUB.
![GRUB](https://github.com/BingoFresh/RTR105/blob/main/MD2-linux%20images/grub.jpg?raw=true)

Un pēc login ir veiksmīgi izveidota Linux vide.
![Terminal](https://github.com/BingoFresh/RTR105/blob/main/MD2-linux%20images/desktop.jpg?raw=true)
