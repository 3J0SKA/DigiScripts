
# 👽 Undetected Reverse Shell

This DigiSpark script gives you access to a system through a reverse connection within seconds. Just upload the code to the DigiSpark and BOOM!

## 🤔 How It Works?

1- The script starts with disabling [Tamper Protection](https://learn.microsoft.com/en-us/microsoft-365/security/defender-endpoint/prevent-changes-to-security-settings-with-tamper-protection?view=o365-worldwide), which is the part of Microsoft Windows Defender. Disabling this allows us to change Windows Defender related settings straight from CLI.

2- Now the script opens powershell and turns of Real Time Monitoring allow any type of malware/payloads to run on the system.

3- Now the payload is downloaded to the system. Its not stored on the system, its just executed. So no house cleaning is needed.

## ⭐ What Makes This Special?

1- All the opened windows are closed as soon as the task is done, other tasks which need a window running to perform their task such as reverse shells are moved to the background and are only visible through the Task Manager.

2- As Tamper Protection and Real Time Monitoring is turned off, any commonly used payload such as [Msfvenom](https://www.offensive-security.com/metasploit-unleashed/msfvenom/) payload can be used to gain a reverse shell. 

3- The payload is not stored on the system so the victim can't trace back any details about the attack such as the server hosting the payload.

## 💻 Tested On

This works on : Windows 10 and Windows 11.

If any updates from Microsoft change anything which makes this script unusable, it will be fixed immediately.

## 🔴 Note!

This script is made for educational purposes only and should **not** be used on any system without prior approval. I am not responsible for any damages caused by these scripts. Enjoy!