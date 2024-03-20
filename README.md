# Digital pipette
[![DOI](https://zenodo.org/badge/598303344.svg)](https://zenodo.org/badge/latestdoi/598303344)

This repository contains CAD files and programs for [Digital pipette: Open hardware for liquid transfer in self-driving laboratories](https://doi.org/10.1039/D3DD00115F)

## Demo Video
https://user-images.githubusercontent.com/29328746/236104835-9dc766c4-92dd-4aab-9998-5ebd59588d73.mp4

## Bill of materials
| Item | Quantity | Description | Note |
| --- | --- | --- | --- |
| Linear actuator | 1 | Actuonix L16-100-63-6-R | https://www.actuonix.com/l16-100-63-6-r |
| DC 6V power supply | 1 | DC Linear Actuator Power Supply* | https://www.actuonix.com/dcpowersupply |
| Arduino | 1 | Arduino Uno Rev3** | https://store-usa.arduino.cc/products/arduino-uno-rev3 |
| Syringe | 1 | NORM-JECT Luer Solo (10 mL) | https://us.vwr.com/store/product/4646293/norm-ject-luer-lock-sterile-syringes-air-tite-products |
| Short screws & nuts | 3  | M3 10 mm screws and M3 nuts were used | |
| Long screw & nut | 1 | M3 20 mm screw and M3 nut were used | |

Basic electronic Parts to build a circuit (e.g. breadboard, cables, soldering iron, etc.) are not included in the list.

\* Any other DC 6V power supply should work.

** Any other Arduino-compatible boards should work.

## Electric circuit
<img src="https://github.com/ac-rad/digital-pipette/assets/29328746/d050fe97-b7cc-464c-8c88-2bb7522dbcb9" width="600">

Although it is not drawn explicitly, please make sure that the GND of Arduino and DC 6V power supply are connected.

### Example setup
You can connect with Arduino, the linear actuator, and the 6V power using jumper wires and alligator cables. This setup works for development, but it is not recommended for production since cables get easily disconnected.

<img src="https://github.com/ac-rad/digital-pipette/assets/29328746/14d8f489-b429-40e3-86df-e21802a3bcac" width="600">

Soldering wires is recommended for production to make connections more stable. My example using a PCB prototyping board is shown below.

<img src="https://github.com/ac-rad/digital-pipette/assets/29328746/78d98caf-7418-4ba3-8f8d-8ae256860f44" width="600">

## Build instruction
### Step 1
Prepare items shown in the bill of materials. Print the [platform](https://github.com/ac-rad/digital-pipette/blob/main/design/stl/platform.stl), [plunger holder](https://github.com/ac-rad/digital-pipette/blob/main/design/stl/holder.stl) and [syringe cover](https://github.com/ac-rad/digital-pipette/blob/main/design/stl/cover.stl) with a 3D printer. The length of the linear actuator should be adjusted before building by using an Arduino and the provided code. A screwdriver and pliers are helpful to tighten screws.

<img src="https://github.com/ac-rad/digital-pipette/assets/29328746/65dbc788-4889-4268-b346-5a5cf6f65cf1" width="600">



### Step 2
Connect the linear actuator and the plunger holder with a short screw and a nut.

https://github.com/ac-rad/digital-pipette/assets/29328746/378bcaca-c717-46af-9cfb-5fd15bf9850b

### Step 3
Connect the linear actuator and the platform with plastic parts shipped with the actuator, screws (short and long), and nuts.

https://github.com/ac-rad/digital-pipette/assets/29328746/e1789dd6-4c45-4c4c-84f6-89d388aaab22

### Step 4
Connect the syringe plunger with the plunger holder. Fasten the syringe with the platform and the syringe cover.

https://github.com/ac-rad/digital-pipette/assets/29328746/42ebc0b9-3168-43e8-8522-d95415921b36

### Step 5
Connect the linear actuator with the electric circuit.

## Source code
[src](https://github.com/ac-rad/digital-pipette/tree/main/src) directory contains an example code to operate the digital pipette.
- `pipette.ino` is an example Arduino sketch
- `controller.py` is an example Python code to send commands from PC to the Arduino

## Citation
If you find this useful in your research, please consider citing as below.

```
@article{yoshikawa2023digital,
  author = "Yoshikawa, Naruki and Darvish, Kourosh and Vakili, Mohammad Ghazi and Garg, Animesh and Aspuru-Guzik, Al{\'a}n",
  title = "Digital pipette: open hardware for liquid transfer in self-driving laboratories",
  journal = "Digital Discovery",
  year = "2023",
  volume = "2",
  issue = "6",
  pages = "1745-1751",
  publisher = "Royal Society of Chemistry",
  doi = "10.1039/D3DD00115F"
}
```

## License
The pipette is licensed under the [Creative Commons Attribution 4.0 International License][cc-by].

[![CC BY 4.0][cc-by-image]][cc-by]

[cc-by]: http://creativecommons.org/licenses/by/4.0/
[cc-by-image]: https://i.creativecommons.org/l/by/4.0/88x31.png

The source code is licensed under the MIT license.
