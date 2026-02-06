> Tool to perform reconnaissance against a target system

### Port Scan
```bash
nmap <ip> -p 0-32000
```

> [!warning] The resulting service infos (i.e. 22 -> ssh) is only a database lookup -> not what is _actually_ running on the port.
### [[Betriebssystem|OS]] fingerprinting
- Goal: Figure out what operating system is running on the remote machine
```bash
nmap -O <ip>
```

- nmap has a database (vgl. [this blog](https://nmap.org/book/man-os-detection.html)) for comparisons with known fingerprints
- basically nmap examines every response it gets for curiosities

### Service and Version Detection
- Basically Interrogates detected open Ports for their services

#### Example (Metasploitable)
```
PORT     STATE SERVICE     VERSION
21/tcp   open  ftp         vsftpd 2.3.4
22/tcp   open  ssh         OpenSSH 4.7p1 Debian 8ubuntu1 (protocol 2.0)
23/tcp   open  telnet      Linux telnetd
25/tcp   open  smtp        Postfix smtpd
53/tcp   open  domain      ISC BIND 9.4.2
80/tcp   open  http        Apache httpd 2.2.8 ((Ubuntu) DAV/2)
111/tcp  open  rpcbind     2 (RPC #100000)
139/tcp  open  netbios-ssn Samba smbd 3.X - 4.X (workgroup: WORKGROUP)
445/tcp  open  netbios-ssn Samba smbd 3.X - 4.X (workgroup: WORKGROUP)
512/tcp  open  exec        netkit-rsh rexecd
513/tcp  open  login
514/tcp  open  shell       Netkit rshd
1099/tcp open  java-rmi    GNU Classpath grmiregistry
1524/tcp open  bindshell   Metasploitable root shell
2049/tcp open  nfs         2-4 (RPC #100003)
2121/tcp open  ftp         ProFTPD 1.3.1
3306/tcp open  mysql       MySQL 5.0.51a-3ubuntu5
5432/tcp open  postgresql  PostgreSQL DB 8.3.0 - 8.3.7
5900/tcp open  vnc         VNC (protocol 3.3)
6000/tcp open  X11         (access denied)
6667/tcp open  irc         UnrealIRCd
8009/tcp open  ajp13       Apache Jserv (Protocol v1.3)
8180/tcp open  http        Apache Tomcat/Coyote JSP engine 1.1
Service Info: Hosts:  metasploitable.localdomain, irc.Metasploitable.LAN; OSs: Unix, Linux; CPE: cpe:/o:linux:linux_kernel

```

### Idle Scanning
- tries to be stealthy (IP spoofing etc)

### Aggressive Mode
> fuck stealth or whatever

```bash
nmap -A <host>
```

equivalent to:
```bash
nmap -O -sV -sC --traceroute
```
fingerprinting (-O), version scanning (-sV), script scanning (-sC) and traceroute (--traceroute)


