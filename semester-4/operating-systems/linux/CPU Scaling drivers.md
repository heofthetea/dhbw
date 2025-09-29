```bash
sudo apt install cpufreq-utils  linux-tools-generic
```

--> Fun Fact: Any Linux Kernel \> 6.3 comes with the correct drivers in place. Only the power profiles daemon does not utilize it...
### Check for cpu scaling modes
```bash
powereprofilesctl
```
- if only 2 are listed, and the driver listed is `placeholder`, something is wrong lul

### Check Driver in Use
```bash
cat /sys/devices/system/cpu/cpu0/cpufreq/scaling_driver
cpufreq-info --driver #yields the exact same result
```
- On the Ubuntu installations, this resolves to `amd-pstate-epp`


### Check installed drivers 
> idk if that's actually what it is, but it sure has _something_ to do with it

```bash
ls /lib/modules/$(uname -r)/kernel/drivers/cpufreq
```
- Directory contains a bunch of [[ko file|ko files]]


### Current CPU information
```bash
cpupower frequency-info
```
- lists information about the driver, as well as the current cpu clock speed (which is pretty handy when trying to figure out whether the FUCKING power profiles actually FUCKING work or not)