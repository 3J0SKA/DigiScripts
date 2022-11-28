# 🚀 DigiScripts

A collection of scripts which can be used with the Digispark ATTiny85 and utilises its HID compatibility to run scripts and perform other tasks.

## 🏃‍♂️ Requirements 

* Digispark ATTiny85 
* Arduino IDE with proper modules installed for Digispark ([guide to do so](http://digistump.com/wiki/digispark/tutorials/connecting))

## 🤔 How to use?

After setting up the [Arduino IDE](https://www.arduino.cc/en/software) and downloading the modules needed for DigiSpark, you are ready to do. All you have to do is hit the "Upload" button and then plug your DigiSpark in.

This will upload the script to DigiSpark's storage and now it is ready to be used.

Now you can plug the microcontroller in and it will start executing commands.

Now you can plug the microcontroller in and it will start executing commands.

## 🦾 Protection

***How do I protect myself from these attacks?***

It's actually not very hard, you have to just follow these 3 things and you will be immune to these HID attacks!

1- **Passwords for Admin Privileges** - Usually windows prompts you with a Yes and No button whenever we run a application with admin privileges but this can be changed by using Windows Settings and prevents these HID attacks as they are programmed to click on that Yes button only.

2- **Random USBs** - This one is simple, just don't plug in random USB devices into your device. No matter what it is, even a charging cord can inject code in your system and potentially gain access or cause some kind of damage.

3- **Lock your System** - Locking your system before being AFK helps you to be immune to these attacks as the attack will need a password to get into the system and perform the task using the microcontroller. This can be done by `Windows + L` on windows and most of the linux systems and `Shift + Command + Q` on OSX.

Stay safe! 

## ❓ FAQs

1- **Why is the script not uploading?**

**Answer**-  This can be caused due to many issues. Common ones are listed below.

* **Low Storage** -  The DigiSpark ATTiny85 has 8KB of storage and 2KB is occupied by the bootloader. So you are just left with 6KB of storage which is usually enough for most projects. Every project in this repository has 2 scripts one which uses less storage as some values are changed to their "codenames" and the other one doesn't use these "codenames" so that the script is readable.

* **Errors** - You script may have some errors which won't allow the script to be uploaded to your microcontrolled. You can click on the "Verify" button to get more information about the error.

* **Modules** - Not having modules or having wrong modules may cause this problem. Refer to [this](http://digistump.com/wiki/digispark/tutorials/connecting) guide to setup Arduino IDE to work with DigiSpark.

2- **Why does my DigiSpark disconnect and reconnect before executing my script?**

**Answer** - This is common with almost every DigiSpark and doesn't mean that your microcontroller has any type of problem.

If the script is not executed after DigiSpark has disconnected and reconnect then the microcontroller might have some issues.

3- **Do I need to solder/connect the pins to the board before using my DigiSpark**

**Answer** - No, the pins are only needed when any external electrical module is being used which is not the case here as we are performing HID based attacks. So soldering these pins are not needed at all.

## 🔴 Note!

These scripts are made for educational purposes only and should **not** be used on any system without prior approval. I am not responsible for any damages caused by these scripts. Enjoy!