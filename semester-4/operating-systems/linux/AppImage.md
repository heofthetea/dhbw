> Distribute Applications via a single executable.

[[Extract Contents from AppImage]]
- Honestly: Really good attempt, but the realization is horrible. I mean I can do it, but it's just one more thing that really makes you understand why some people think Linux is way too complex.


I'll try to demonstrate to myself how to deal with AppImages using _Audacity_ as an Example.
### 1. Download AppImage
```bash
wget -o- https://github.com/audacity/audacity/releases/download/Audacity-3.5.1/audacity-linux-3.5.1-x64.AppImage
```
Make sure it's the latest version.
Also: the beauty of this approach is, that any new version of the [[AppImage]] simply needs to replace the old one in `/usr/local/bin` and that's it, so at least updating is easy lol
### 2.  Rename bulky filename and place it in adequate directory
[[usr filesystem]],
Also: Make sure the AppImage is actually _executable_

```bash
mv audacity-linux-3.5.1-x64.AppImage /usr/local/bin/audacity
chmod +x /usr/local/bin/audacity
```
- Audacity should now be callable via `audacity` in the terminal. Fun Fact: Give it a file/directory, and it will open that!

### 3. Add Desktop file
Sadly this often really is crap.
1. [[Extract Contents from AppImage]]
	1. yes, the way I did this, this will create the `squashfs-root` directory in `/usr/local/bin`. Please make sure to delete this afterwards.
2. copy the icon out of the created folder
```bash
audacity --appimage-extract 
cp /usr/local/bin/squashfs-root/audacity.svg /usr/share/icons
rm -rf /usr/local/bin/squashfs-root
```
> [!hint] Maybe better just get a png logo from the internet lol
#### Manually create the desktop file
The desktop File the [[AppImage]] provides works only _inside_ of the [[chroot]] `squashfs-root` directory. So a manual [[Desktop file]] needs to be created.
```bash
touch /usr/share/applications/audacity.desktop
```
Contents of the file:
```ini
[Desktop Entry]
Name=Audacity
GenericName=Audio Editor
Exec=audacity
Type=Application
Icon=/usr/share/icons/audacity.svg
```



==> ==Here ya go, little prick. Sometimes, Linux really is a pain in the ass.== 