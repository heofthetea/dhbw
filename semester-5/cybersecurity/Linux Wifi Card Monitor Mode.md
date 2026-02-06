## Prerequisites
- Install the `aircrack-ng` suite as found [here](https://github.com/aircrack-ng/aircrack-ng)
- verify `airmon-ng` is installed

## Enter Monitor Mode
```shell
sudo airmon-ng start $wlp_interface # your interface here
```

- this will create an interface `$wlp_interfacemon` which will be monitored

> [!warning] If you had an ongoing wifi connection before, this will be dropped - you won't have internet connection anymore.
## Exit Monitor Mode
```bash
sudo airmon-ng stop ${wlp_interface}mon
```