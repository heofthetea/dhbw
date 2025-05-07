### figure out what name the usb device has
```
lsblk
```
will list all devices within the `/dev` diectory along with mountpoints, size and some other data
```
sda                     8:0    1  29,8G  0 disk  
nvme0n1               259:0    0 953,9G  0 disk  
├─nvme0n1p1           259:1    0   512M  0 part  /boot/efi
├─nvme0n1p2           259:2    0   1,7G  0 part  /boot
└─nvme0n1p3           259:3    0 951,7G  0 part  
  └─nvme0n1p3_crypt   252:0    0 951,7G  0 crypt 
    ├─vgubuntu-root   252:1    0 929,4G  0 lvm   /var/snap/firefox/common/host-hunspell
    │                                            /
    └─vgubuntu-swap_1 252:2    0   1,9G  0 lvm   [SWAP]
```
--> judging by size, you can see that _sda_ should be the usb stick


### mounting and unmounting
- needs `sudo` privileges

```bash
sudo mount /dev/<device-name> <target>
```
(it's common to mount stuff in either the `/mnt` or `media` directories)

- to _unmount_ you can either pass the `/dev` path or the target directory to the command
	- not that there shouldn't be a shell or any other process using the device, otherwise unmounting will fail with "target is busy" error
```bash
sudo umount /dev/<device-name>
```




## Errors

### fix block size
-> could appear when trying to _format_ a stick using Gparted
_Gparted Error Message_: "The driver descriptor says the physical block size is 2048 bytes, but Linux says it is 512 bytes"

--> fix (from [random forum](https://superuser.com/questions/1130966/the-driver-descriptor-says-the-physical-block-size-is-2048-bytes-but-linux-says)):
```bash
sudo dd if=/dev/zero of=/dev/sda bs=2048 count=32 && sync
```
(i have no fucking clue what this does but it seems to work)