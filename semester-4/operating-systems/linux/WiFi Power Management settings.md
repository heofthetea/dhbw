idk what this thing is supposed to do, but it has caused nothing but problems thus far, that's why I have it turned off on i think _all_ devices

### File location
```bash
nano /etc/NetworkManager/conf.d/default-wifi-powersave-on.conf
```

### Configurations
```
[connection]
wifi.powersave = 2 # this disables it
```

- possible values:
0) use the default value
1) don't touch existing setting?
2) disable powersave
3) enable powersave (this is usually the default on new installations)
