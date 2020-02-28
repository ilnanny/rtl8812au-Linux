#RTL8812AU-Linux
__________________

<img src="https://raw.githubusercontent.com/ilnanny/rtl8812au-Linux/master/screen.png" alt="RTL8812AU-Linux">
_____________________________________________________________________________________________

___      *Assuming you have already installed the build softwares, linux-headers or dkms;
            Follow the steps:
_____________________________________________________________________________________________

___      *Build


 make
 sudo insmod 8812au.ko


After loading the module, a wireless network interface named __Realtek 802.11n WLAN Adapter__ should be available.

___      *Installing


 sudo cp 8812au.ko /lib/modules/(uname -r)/kernel/drivers/net/wireless
 sudo depmod


The driver module should now be loaded automatically.

___      *DKMS

Automatically rebuilds and installs on kernel updates [Debian and derivates]


 sudo apt-get install build-essential dkms


The driver source must be copied to /usr/src/8812au-4.2.2

Then add it to DKMS:

```sh
 sudo dkms add -m 8812au -v 4.2.2
 sudo dkms build -m 8812au -v 4.2.2
 sudo dkms install -m 8812au -v 4.2.2
```

Check with:

 sudo dkms status

Automatically load at boot:

 echo 8812au | sudo tee -a /etc/modules

Eventually remove from DKMS with:

 sudo dkms remove -m 8812au -v 4.2.2 --all

_____________________________________________________________________________________________

