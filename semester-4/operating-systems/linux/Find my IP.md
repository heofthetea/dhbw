> Using ifconfig

```bash
ifconfig
```

- look for wifi interface 

> [!hint] the default [[Docker Port Binding]] also makes the containers available by default on this ip with the corresponding port.


```
2: wlp1s0: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 1500 qdisc noqueue state UP group default qlen 1000
    link/ether 4c:79:6e:57:2e:8e brd ff:ff:ff:ff:ff:ff
    inet 10.178.116.70/24 brd 10.178.116.255 scope global dynamic noprefixroute wlp1s0
       valid_lft 2880sec preferred_lft 2880sec
    inet6 2a02:3038:608:4fb1:9113:1461:b509:9394/64 scope global temporary deprecated dynamic 
       valid_lft 2982sec preferred_lft 0sec
    inet6 2a02:3038:608:4fb1:906b:dcde:3cd5:6408/64 scope global deprecated dynamic mngtmpaddr noprefixroute 
       valid_lft 2982sec preferred_lft 0sec
    inet6 fe80::8f9b:8db0:6032:32b7/64 scope link noprefixroute 
       valid_lft forever preferred_lft forever

```
- the `inet <ip>` is the publicly available ip