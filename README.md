#  OSCtoMIDI plug-in
---
![OSCtoMIDI](https://github.com/gtbts/OSCtoMIDI/blob/master/screenshot.png)

## Overview

---
+ This virtual instruments convert **[OSC (Open Sound Control)](http://opensoundcontrol.org/introduction-osc)**  message to **MIDI**.
+ The main purpose of this is to receive OSC message from **[CVtoOSC Converter](https://developer.mbed.org/users/casiotone401/code/CVtoOSCConverter/)**.

## How it works.

---
The **Port** text box bottom of the plug-in set input port, you can input port number and press the return key to connect on a UDP socket and ready to recieve OSC message.

**OSCtoMIDI** plug-in can receive 4 OSC message with address **/acv1** ~ **/acv4**, argument **int** value, and you can choose by **Bit** combo box to set a range of value.
+ 10bit - int _0 ~ 1023_
+ 12bit - int _0 ~ 4095_
+ 14bit - int _0 ~ 16383_
+ 16bit - int _0 ~ 65535_

Small buttons on the right side of label **CV1** ~ **CV4** are **mute** each channel and you can control that with MIDI note **C-2 D-2 E-2 F-2** NoteOn/Off state.

Received OSC message int value is adjusted (quantized) MIDI note range (0 ~ 127) and you can choose several musical scales from **Scale** combo box to change.

### Requirements

---
+ Unfortunately AU plug-in  is not compatible with MIDI output from instrument plugins.
+ **[The JUCE cross-platform C++ framework](https://www.juce.com/)**.

### License

---
This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see http://www.gnu.org/licenses/.
